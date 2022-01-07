 /* 
  * File:blinkLED2.ino
  * ------------------
 * Arduino Blink LED Sketch.
 * @author: electronsandbits
 * @version:06/01/2022
 * 
 */
 
void setup() {
   pinMode(13,OUTPUT); /*set digital pin 13 to output */

}

void loop() {
   digitalWrite(13, HIGH);  /* turn on digital pin 13 */  
   delay(250);              /* pause for one-quarter of one second */
   digitalWrite(13, LOW);   /* turn off digital pin 13 */
   delay (250);             /* pause for one-quarter of one second */
  
}
