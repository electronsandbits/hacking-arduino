const int LED = 9;           /* The LED is connected to pin 9 */
const int BUTTON = 2;        /* The Button is connected to pin 2 */
boolean lastButton = LOW;    /* Variable containing the previous button state */  
boolean currentButton = LOW; /* Variable containing the current button state */
boolean ledOn = false;       /* The present state of the LED (on/off) */

void setup() {
    pinMode(LED, OUTPUT);    /* Set the LED pin as an output */
    pinMode(BUTTON, INPUT);  /* Set Button as input (not required) */
}

/*
 * Function: debounce;
 * Usage: boolean current = digitalRead(BUTTON);
 * --------------------------------------------
 * pass it the previous button state, and get back the curent debounced button state.
 */

 boolean debounce (boolean last) {
    boolean current  = digitalRead(BUTTON);   /* Read the button state */
    if (last != current) {
      delay(5);   /* wait 5 ms*/
      current = digitalRead(BUTTON);  /* Read it again */
    }
    return current;
 }

void loop() {
    currentButton = debounce(lastButton);              /* Read debounced state */
    if (lastButton == LOW && currentButton = HIGH)  {    /* if it was pressed */
      ledOn = !ledOn;                       /* Toggle the LED value */           
    }
    lastButton = currentButton;    /* Reset button Value */
    digitalWrite(LED,ledON);        /* change the LED state */
                                           
}
