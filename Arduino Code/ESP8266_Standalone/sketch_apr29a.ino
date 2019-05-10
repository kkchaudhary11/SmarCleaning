const int wifi = 2; 

void setup() {
  Serial.begin(9600); // Other baud rates can be used...
  Serial.println("My Sketch has started");
  pinMode(wifi, INPUT);

}

void loop() {
  
while(digitalRead(wifi)==LOW){
  Serial.println("STOP");
}
Serial.println("RUNNING");
delay(1000);
}
