#define LED1 13
#define LED2 12

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial.begin(9600);   
}

void loop()
{
  while(Serial.available()) 
  {
    char data = Serial.read();
    Serial.println(data);
    if (data == '1') 
    {
      digitalWrite(LED2, LOW);
      digitalWrite(LED1, HIGH);
    }
    if (data == '0') 
    {
      digitalWrite(LED2, HIGH);
      digitalWrite(LED1, LOW);
    }
  }
}
