void setup() {
  pinMode(A5, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  Serial.println(analogRead(A5));
  delay(500);
  if(analogRead(A5)>900){
    digitalWrite(13, 1);
  }
  else
    digitalWrite(13, 0);
}
