const int touchPin = 2;

const int led1 = 4;
const int led2 = 5;
const int led3 = 6;
const int led4 = 7;
const int led5 = 8;

int tapCount = 0;

int lastTouchState = LOW;

unsigned long lastTapTime = 0;
const unsigned long tapTimeout = 800;

void setup()
{
  pinMode(touchPin, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);

  Serial.begin(9600);

  turnOffAllLEDs();
}

void loop()
{
  int touchState = digitalRead(touchPin);

  // Detect one complete touch
  if (touchState == HIGH && lastTouchState == LOW)
  {
    tapCount++;

    if (tapCount > 5)
    {
      tapCount = 0;
    }

    Serial.print("Tap Count: ");
    Serial.println(tapCount);

    updateLEDs();

    lastTapTime = millis();

    delay(150);
  }

  lastTouchState = touchState;

  // Reset after 800 ms without another tap
  if (tapCount > 0 && millis() - lastTapTime > tapTimeout)
  {
    // Keep current LEDs ON
  }
}

void updateLEDs()
{
  digitalWrite(led1, tapCount >= 1 ? HIGH : LOW);
  digitalWrite(led2, tapCount >= 2 ? HIGH : LOW);
  digitalWrite(led3, tapCount >= 3 ? HIGH : LOW);
  digitalWrite(led4, tapCount >= 4 ? HIGH : LOW);
  digitalWrite(led5, tapCount >= 5 ? HIGH : LOW);
}

void turnOffAllLEDs()
{
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
}