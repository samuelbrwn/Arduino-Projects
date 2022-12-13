/*******Alternating LED Code*******/

//defining gives constant values. Since our pin values won't change, we can define these before the program starts.
//defined constants take up no memory on the chip.
#define RED 22
#define BLUE 31
#define GREEN 33

void setup() {
  // setting our pins to output voltage
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);

}

void loop() {
  // Control loop to cyle through the lights.
  // for loop counts to 100 in increments of one. One cycle starts on red, and ends on green.

for (int i=0; i < 5; i++){
  digitalWrite(RED, HIGH);  //turns red on.
  digitalWrite(BLUE, LOW);
  digitalWrite(GREEN, LOW);

  delay(250); // red is on for 1/4 second before blue turns on.
  digitalWrite(RED, LOW);
  digitalWrite(BLUE, HIGH);
  digitalWrite(GREEN, LOW);

  delay(250);
  digitalWrite(RED, LOW);
  digitalWrite(BLUE, LOW);
  digitalWrite(GREEN, HIGH);

  delay(250); // this delay is necessary to keep the green light on. otherwise it turns off instantly.

}

digitalWrite(GREEN, LOW); //after the loop is complete, we turn green off.

exit(0); // breaks out of void loop() to end the program. Otherwise it would repeat forever.

}
