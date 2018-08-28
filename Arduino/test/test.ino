/*

This code is used to control the Arduino using the accompanying Arduino Bluetooth LED app.
Author: Malek Itani

*/


#define red 2
#define yellow 4
#define green 7

char getInput() // Read input from serial if there is any.
{ 
  if(Serial.available()){
    return char(Serial.read());
  }
}

void setup() {
  // Setup output pins and initialize serial.
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  switch(getInput()){ // Handle the different button presses according to the encoding specified in the README 
    case 'R':
      digitalWrite(red, HIGH);
      break;
    case 'Y':
      digitalWrite(yellow, HIGH);
      break;
    case 'G':
      digitalWrite(green, HIGH);
      break;
    case '1':
      digitalWrite(red, LOW);
      break;
    case '2':
      digitalWrite(yellow, LOW);
      break;
    case '3':
      digitalWrite(green, LOW);
      break;
    case 'N':
      digitalWrite(red, HIGH);
      digitalWrite(green, HIGH);
      digitalWrite(yellow, HIGH);
      break;
    case 'F':
      digitalWrite(red, LOW);
      digitalWrite(green, LOW);
      digitalWrite(yellow, LOW);
      break;
  }
  
}
