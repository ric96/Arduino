int in1=22, in2=23, in3=24, in4=25, fl=30, fr=31, bl=32, br=33, b=34, f=35, del=500;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(fl, INPUT);
  pinMode(fr, INPUT);
  pinMode(bl, INPUT);
  pinMode(br, INPUT);
  pinMode(b, INPUT);
  pinMode(f, INPUT);
}

void loop() {
  // the loop function runs over and over again forever
  if((digitalRead(fl)==HIGH||digitalRead(fr)==HIGH||digitalRead(f)==HIGH)&&(digitalRead(bl)==HIGH||digitalRead(br)==HIGH||digitalRead(b)==HIGH))
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }
  else if(digitalRead(br)==HIGH)
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    delay(del);
  }
  else if(digitalRead(bl)==HIGH)
  {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    delay(del);
  }
  else if(digitalRead(fr)==HIGH)
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    delay(del);
  }
  else if(digitalRead(fl)==HIGH)
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    delay(del);
  }
  else if(digitalRead(b)==HIGH)
  {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    delay(del);
  }
  else if(digitalRead(f)==HIGH)
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    delay(del);
  }
  else
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW );
  }
  delay(10);

}
