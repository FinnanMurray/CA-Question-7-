void setup() {
  Serial.begin(9600); // Start serial communication

  int a = 10;
  int b = 20;
  int c = 30;

  int d = a + b;
  Serial.print("Value of d (a + b): ");
  Serial.println(d);

  int e = d - c;
  Serial.print("Value of e (d - c): ");
  Serial.println(e);
}

void loop() {
}