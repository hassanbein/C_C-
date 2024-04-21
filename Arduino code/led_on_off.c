void setup() 
{
  pinMode(13,OUTPUT);//Définer le porte 13 comme sortie
}
void loop()
{
  digitalWrite(13,HIGH);// allumer une LED connectée à la broche 13 de la carte Arduino 5v
  delay(1000);//suspendre l'exécution du programme pendant 1s
  digitalWrite(13,LOW);// éteindre la LED 0v
  delay(1000);//suspendre l'exécution du programme pendant 1s
}