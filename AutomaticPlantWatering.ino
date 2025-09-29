const int moisturePin = A0;    
const int pumpPin = 7;          
const int threshold = 400;      

void setup() {
  Serial.begin(9600);
  pinMode(pumpPin, OUTPUT);
  digitalWrite(pumpPin, LOW);   
}

void loop() {
  int moistureLevel = analogRead(moisturePin);
  Serial.print("Soil moisture level: ");
  Serial.println(moistureLevel);

  if (moistureLevel < threshold) {
    Serial.println("Soil is dry → Pump ON");
    digitalWrite(pumpPin, HIGH)
    delay(5000);                
    digitalWrite(pumpPin, LOW); 
  } else {
    Serial.println("Soil is moist → Pump OFF");
    digitalWrite(pumpPin, LOW);
  }

  delay(2000); 
}
