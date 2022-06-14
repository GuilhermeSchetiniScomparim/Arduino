long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);

  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  Serial.println(0.01723 * readUltrasonicDistance(4, 3));
  if (0.01723 * readUltrasonicDistance(4, 3) < 70) {
    digitalWrite(12, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(5, LOW);
  } else {
    if (0.01723 * readUltrasonicDistance(4, 3) < 150) {
      digitalWrite(12, LOW);
      digitalWrite(8, HIGH);
      digitalWrite(5, LOW);
    } else {
      digitalWrite(12, LOW);
      digitalWrite(8, LOW);
      digitalWrite(5, HIGH);
    }
  }
  delay(10); // Delay a little bit to improve simulation performance
}