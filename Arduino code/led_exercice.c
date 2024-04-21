int led1=10,led2=11
void setup()
{
pinMode(led1,LOW)
pinMode(Led2,OUTPUT);
}
void loop 
{
 digitalWrite(led1,LOW);
 digitalWrite(led2,HIGH);
 delay(500);
 digitalWrite(led1,HIGH);
 digitalWrite(led2,LOW);	
 delay(1000);
 digitalWrite(led1,HIGH);
 digitalWrite(led2,LOW);	
 delay(500);	
}