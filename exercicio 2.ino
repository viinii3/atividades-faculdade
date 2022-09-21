void setup ()
{
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);
pinMode(3, OUTPUT);
pinMode(2, OUTPUT);
// NÃO COLOQUEI OS PINOS g E dp POIS ELES NAO ESTAVAM SENDO CONSIDERADOS NO EXERCÍCIO
}

void loop()
{
digitalWrite (7, HIGH);
delay(500);
digitalWrite(7, LOW);
delay (500);

digitalWrite (6, HIGH);
delay(500);
digitalWrite(6, LOW);
delay (500);

digitalWrite (5, HIGH);
delay(500);
digitalWrite(5, LOW);
delay (500);

digitalWrite (4, HIGH);
delay(500);
digitalWrite(4, LOW);
delay (500);

digitalWrite (3, HIGH);
delay(500);
digitalWrite(3, LOW);
delay (500);

digitalWrite (2, HIGH);
delay(500);
digitalWrite(2, LOW);
delay (500);
}







