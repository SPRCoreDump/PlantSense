
const int lightSensorPort = A0;
const int tempSensorPort = A1;
const int greenLedPort = 3;
const int blueLedPort = 4;
const int redLedPort = 5;

void setup() {
  Serial.begin(115200);
  pinMode(greenLedPort, OUTPUT);
  pinMode(blueLedPort, OUTPUT);
  pinMode(redLedPort, OUTPUT);
  pinMode(lightSensorPort, INPUT);
  pinMode(tempSensorPort, INPUT);
}

void loop() {
  int greenLed = 0;
  int blueLed = 0;
  int redLed = 0;
  if(analogRead(lightSensorPort) < 1000){
    redLed = 1;
  }
  else {
    greenLed = 1;
  }
  
  digitalWrite(greenLedPort, greenLed);
  digitalWrite(blueLedPort, blueLed);
  digitalWrite(redLedPort, redLed);
  
  //Serial.print("light sensor: ");
  Serial.println(analogRead(lightSensorPort));
  //Serial.println("Temp sensor: ");
  //Serial.println(digitalRead(tempSensorPort));

  delay(50);
}
