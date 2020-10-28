int soundsensor = 2;
int led = 13;
int led2 = 12;
int led3 = 11;

void setup()
{
  pinMode (soundsensor, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin (9600);
}

void loop()
{
  int sensorvalue = digitalRead(soundsensor);

  if (sensorvalue == 1)
  {
    digitalWrite(led, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    Serial.println (sensorvalue);
  }
  else
  {
    digitalWrite(led, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    Serial.println (sensorvalue);
  }
}
