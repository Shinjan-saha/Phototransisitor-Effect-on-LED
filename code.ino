
const int ledPin = 13; //led pin

void setup() {
  pinMode(ledPin, OUTPUT); 
  digitalWrite(ledPin, LOW); 
  Serial.begin(9600); 
}

void loop() {
  
  float voltage = analogRead(A0) * (5.0 / 1023.0);    // Convert analog reading to voltage (5V as source on digital pins)
  
  
  float current = voltage / 220.0; // considering resistance on the wire & other electronic component in arduino  is 220 ohms
  
  
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.print(" V, Current: ");
  Serial.print(current * 1000); 
  Serial.println(" mA");
  
  
  delay(1000);
}
