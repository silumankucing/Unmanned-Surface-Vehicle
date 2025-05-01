char thermalDT;
char thermalDT2;

const int THERMAL_PIN = A0;
int LED_PIN = 2;

void setup(){
  analogReference(INTERNAL);
  Serial.begin(9600);
  
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() 
{
  if(Serial.available() > 0)
  {
    //dataBT = Serial.read();
    
    thermalDT = Serial.write(thermalDT2);
    Serial.print(thermalDT);
    
    //if(dataBT == 'OK')
    //{
    //  digitalWrite(pin_2, HIGH);
    //}
    
    //else if(dataBT == 'NO')
    //{
    // digitalWrite(pin_2, LOW);
    //}

    float thermalDT2 = analogRead(THERMAL_PIN)/9.31;
    Serial.println(thermalDT2);
    delay(1000);
  }
}
