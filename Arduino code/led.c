int LED1=2,LED2=3,LED3=4;//Varible gloobale
void setup() 
{
pinMode(LED1,OUTPUT);//pin 2,3,4 comme des sortie
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
}
void loop() 
{
  digitalWrite(LED1,HIGH);
  delay(1000);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  delay(2000);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,HIGH);
  delay(3000);
  digitalWrite(LED3,LOW);
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  delay(1000);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  delay(1000);
}