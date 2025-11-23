/*
  ------------------------------------------------------------------------------
  © 2025 Javier Siliacay | USTP Autotronics - All Rights Reserved.

  This source code is the intellectual property of the author and is provided 
  for educational and non-commercial use only. Unauthorized copying, modification, 
  distribution, or use of this code for commercial purposes is strictly prohibited 
  without prior written consent from the author.

  Violation of these terms may result in legal action under applicable intellectual 
  property laws.

  For permissions, contact: github.com/javiersiliacay
  ------------------------------------------------------------------------------
*/

#define flameSensorValue A0
#define gasSensorValue   A1

#define waterpump 2
#define redLed    3

#define triggerPin 5
#define echoPin    4

int binFullThreshold = 10;

void setup() {
  pinMode(waterpump, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);

digitalWrite(waterpump, LOW);
  Serial.begin(9600);
}

long readDistance() {
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  long distance = duration * 0.034 / 2;
  return distance;
}

void loop() {
  int flameValue = analogRead(flameSensorValue);
  int gasValue   = analogRead(gasSensorValue);
  long distance  = readDistance();

  Serial.print("Flame: "); Serial.print(flameValue);
  Serial.print(" | Gas: "); Serial.print(gasValue);
  Serial.print(" | Distance: "); Serial.println(distance);

  // Fire or gas detected
  if (flameValue < 500 || gasValue > 400) {
    digitalWrite(waterpump, HIGH);
  } else {
    digitalWrite(waterpump, LOW);
  }

  // Bin full detection
  if (distance <= binFullThreshold) {
    digitalWrite(redLed, HIGH);
  } else {
    digitalWrite(redLed, LOW);
  }

  delay(200);
}
