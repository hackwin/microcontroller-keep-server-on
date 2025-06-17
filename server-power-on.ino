// tested with lolin esp32 s2 mini
// to program: hold button 0, press reset, release button 0

#define LDR_INPUT 2
#define RELAY_OUTPUT 4
long checkEvery = 60000;
  
void setup() {
  Serial.begin(115200);
  pinMode(LDR_INPUT, INPUT);
  Serial.println("Starting!");
}

void loop() {
  Serial.print("LED Brightness: ");
  Serial.println(analogRead(LDR_INPUT));
  if(analogRead(LDR_INPUT) > 4000){
      Serial.println("Power LED is on!");
  }
  else{
    Serial.println("Power LED is off!");
    pinMode(RELAY_OUTPUT, OUTPUT);
    Serial.println("Pressing power switch!");
    digitalWrite(RELAY_OUTPUT, LOW);
    delay(2000);
    Serial.println("Releasing power switch!");
    pinMode(RELAY_OUTPUT, INPUT);    
  }
  Serial.print("Waiting ");
  Serial.print(checkEvery);
  Serial.println(" milliseconds");
  delay(checkEvery);
}
