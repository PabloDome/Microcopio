int incomingByte = 0;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    incomingByte = Serial.read();

  if(incomingByte>0){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }       
}
