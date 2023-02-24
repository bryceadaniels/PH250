////////////////////////////////////////////////////////////////////////////
//Arduino Sketch to blink 2 LED lights
// Written by Bro Lines, but this is Bryce Daniels' code
// Feb 23, 2023

int ledPin1 = 13;
int ledPin2 = 12;
////////////////////////////////////////////////////////////////////////////
void setup() {
// Setting up pin modes
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
}
////////////////////////////////////////////////////////////////////////////
// Arduino loop function
// Every Arduino sketch has a loop function
// This is where we put what we want the Arduino to do
// The Arduino will do whatever is in the loop function
// until the Arduino is unplugged.
void loop() {
// put your main code here, to run repeatedly:
// turn on the LED
digitalWrite(ledPin1,HIGH);
digitalWrite(ledPin2,LOW);
// leave in on for 100ms
delay(1000);
// turn off one and turn on the other
digitalWrite(ledPin1,LOW);
digitalWrite(ledPin2,HIGH);
// delay for a second
delay(1000);
}


