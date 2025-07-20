// Pin number for the onboard LED
const int ledPin = 13;

// Morse code timing variables (in milliseconds)
const int dotTime = 500;                // Time for a dot
const int dashTime = 3 * dotTime;       // Time for a dash
const int intraCharDelay = dotTime;     // Delay between dots/dashes in a character
const int interCharDelay = 3 * dotTime; // Delay between characters
const int interWordDelay = 7 * dotTime; // Optional longer pause between full SOS patterns

// Dot function
void dot() {
  digitalWrite(ledPin, HIGH);
  delay(dotTime);
  digitalWrite(ledPin, LOW);
  delay(intraCharDelay);
}

// Dash function
void dash() {
  digitalWrite(ledPin, HIGH);
  delay(dashTime);
  digitalWrite(ledPin, LOW);
  delay(intraCharDelay);
}

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Morse code for SOS is "... --- ..."

  // Letter S: dot, dot, dot
  dot();
  dot();
  dot();
  delay(interCharDelay); // Delay between S and O

  // Letter O: dash, dash, dash
  dash();
  dash();
  dash();
  delay(interCharDelay); // Delay between O and final S

  // Letter S: dot, dot, dot
  dot();
  dot();
  dot();
  delay(interWordDelay); // Delay before repeating the pattern
}
