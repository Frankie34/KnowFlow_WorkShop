void setup()
{
  Serial.begin(9600);     //  Set serial baud rate to 9600 bps
  pinMode(A0,INPUT);      //  Set A0 to input
  pinMode(13,OUTPUT);     //  Set pin 13 to output
}
void loop()
{
  int val;
  val=analogRead(0);      //  Read slider value from analog 0
  Serial.println(val,DEC);//  Print the DEC value to serial port
  delay(100);
  if(val>20)
  {
    digitalWrite(13,HIGH);
    delay(100);
  }else{
    digitalWrite(13,LOW);
    delay(100);
  }
}
