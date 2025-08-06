// Define pin numbers
const int inputPin = 1;     // Digital input D1
const int outputPin1 = 3;   // Digital output D3
const int outputPin2 = 4;   // Digital output D4

int my_flag = 0;

void setup() {
  // Initialise Digital Input D1
  pinMode(inputPin, INPUT);

  // Initialise Digital Outputs D3, D4
  pinMode(outputPin1, OUTPUT);
  pinMode(outputPin2, OUTPUT);

  // Set initial states for output pins (optional)
  digitalWrite(outputPin1, LOW);
  digitalWrite(outputPin2, LOW);
}

void loop() {
  // Infinite loop
  if (digitalRead(inputPin) == LOW) {
    if (my_flag == 0) {
      // Set flag as 1
      my_flag = 1;

      // Toggle outputs D3 and D4
      digitalWrite(outputPin1, !digitalRead(outputPin1));
      digitalWrite(outputPin2, !digitalRead(outputPin2));
    }
  } else {
    // Set flag as 0
    my_flag = 0;
  }
}
