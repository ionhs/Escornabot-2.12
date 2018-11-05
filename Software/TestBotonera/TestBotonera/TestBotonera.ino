#define KEYBOARD_PIN A7  
    #define KEYBOARD_WIRES 2 // change to 3 in old buttonsets with 3 wires

    void setup() {
      pinMode(KEYBOARD_PIN, KEYBOARD_WIRES == 2 ? INPUT_PULLUP : INPUT);
      Serial.begin(9600);
    }
    void loop() {
      Serial.println(analogRead(KEYBOARD_PIN));
      delay(200);
    }
