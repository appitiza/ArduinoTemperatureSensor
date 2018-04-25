int val;
int tempPin = 0;

void setup()
{
Serial.begin(9600);
}
void loop()
{
val = analogRead(tempPin);
float mv = ( val/1024.0)*5000;
float cel = mv/10;
//float farh = (cel*9)/5 + 32;

//Serial.print("TEMPRATURE = ");
Serial.print("#");
Serial.print(cel);
//Serial.print("*C");
//Serial.println();
Serial.print("~");
delay(1000);


//Serial.print("TEMPRATURE = ");
//Serial.print(farh);
//Serial.print("*F");
//Serial.println();
}
