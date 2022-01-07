/*
 * File: blinkLED.ino
 * ------------------
 * Arduino Blink LED Sketch.
 * Created 13/03/2021
 */
 
void setup() {
   pinMode(13,OUTPUT); /*set digital pin 13 to output */

}

void loop() {
   digitalWrite(13, HIGH);  /* turn on digital pin 13 */  
   delay(1000);             /* pause for one second */
   digitalWrite(13, LOW);   /* turn off digital pin 13 */
   delay (1000);            /* pause for one second */
  
}
