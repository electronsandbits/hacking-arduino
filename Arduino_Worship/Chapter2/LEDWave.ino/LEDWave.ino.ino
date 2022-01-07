/*
 * File:LEDWave.ino
 * ----------------
 * Project #1:Creating a Blinking LED Wave
 * In this project, we'll use five LEDs to emulate 
 * the front of the famous TV show vehicle KITT fron the televison 
 * show Knight Rider,creating a kind of wavelike pattern.
 */
void setup() {
    pinMode(2, OUTPUT); /* LED 1 control pin is set up as an output */
    pinMode(3, OUTPUT); /* same for LED2 to LED5 */
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
}

void loop() {
    digitalWrite(2, HIGH); /* Turn LED1 on  */  
    delay(500);
    digitalWrite(2, LOW);   /* Turn LED1 off */
    digitalWrite(3, HIGH); /* and repeat for LED 2 to 5 */
    delay(500);
    digitalWrite(3, LOW);
    digitalWrite(4,HIGH);
    delay(500);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(500);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    delay(500);
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    delay(500);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    /* The loop() will now loop around and start from the top again */
  
}
