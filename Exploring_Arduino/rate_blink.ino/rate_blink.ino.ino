
const int LED = 9; /* Define LED for pin 9 */

void setup() {
    pinMode(LED, OUTPUT); /* Set the LED pin as an output */
   
}

void loop() {
    for (int i = 100; i <= 1000; i = i +100) {
       digitalWrite(LED, HIGH);
       delay(i);
       digitalWrite(LED, LOW);
      
       delay(i);
   }
}
