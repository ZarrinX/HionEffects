
//Define Global Variables
int LED_ROOF = 2; //White
int LED_LAMP = 3; //White
int LED_SHOP = 4; //White
int LED_PINK1 = 5;
int LED_PINK2 = 6;
int LED_PINK3 = 7;
int LED_BLUE1 = 8;
int LED_BLUE2 = 9;
int LED_BLUE3 = 10;

// the setup function runs once when you press reset or power the board
void setup() {
  /*
  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.
  */
  pinMode(LED_ROOF, OUTPUT);
  pinMode(LED_LAMP, OUTPUT);
  pinMode(LED_SHOP, OUTPUT);
  pinMode(LED_PINK1, OUTPUT);
  pinMode(LED_PINK2, OUTPUT);
  pinMode(LED_PINK3, OUTPUT);
  pinMode(LED_BLUE1, OUTPUT);
  pinMode(LED_BLUE2, OUTPUT);
  pinMode(LED_BLUE3, OUTPUT);

  digitalWrite(LED_ROOF, HIGH);
  digitalWrite(LED_LAMP, HIGH);
  digitalWrite(LED_SHOP, HIGH);
}

void randomFlicker(int LED_PIN, int duration) {
  unsigned long startTime = millis();
  while (millis() - startTime < duration) {
    // Generate a random delay between 10ms and 200ms
    int delayTime = random(10, 120);

    // Turn the LED on
    digitalWrite(LED_PIN, HIGH);
    delay(delayTime);

    // Turn the LED off
    digitalWrite(LED_PIN, LOW);
    delay(delayTime);
  }
  digitalWrite(LED_PIN, HIGH);
}

// the loop function runs over and over again forever
void loop() {
// **************************************
// Slow Blinks
// **************************************
delay(7000);
randomFlicker(LED_ROOF, 400);                    // wait for a second
delay(random(7000, 15000));
randomFlicker(LED_LAMP, 400);
delay(random(7000, 15000));
randomFlicker(LED_SHOP, 400);
delay(random(7000, 15000));
randomFlicker(LED_ROOF, 400);
// **************************************
// Fast Blinks
// **************************************
delay(random(1000, 2000));
randomFlicker(LED_LAMP, 400);
delay(random(1000, 2000));
randomFlicker(LED_SHOP, 400);
delay(random(1000, 2000));
// **************************************
// Blackout
// **************************************
randomFlicker(LED_ROOF, 2000);
digitalWrite(LED_ROOF, LOW);
randomFlicker(LED_SHOP, 1500);
digitalWrite(LED_SHOP, LOW);
randomFlicker(LED_LAMP, 1500);
digitalWrite(LED_LAMP, LOW);
delay(800);
digitalWrite(LED_LAMP, HIGH);
delay(10);
digitalWrite(LED_LAMP, LOW);
// **************************************
// Hion Mode
// **************************************
delay(3000);
digitalWrite(LED_PINK1, HIGH);
digitalWrite(LED_PINK2, HIGH);
digitalWrite(LED_PINK3, HIGH);
digitalWrite(LED_BLUE1, HIGH);
digitalWrite(LED_BLUE2, HIGH);
digitalWrite(LED_BLUE3, HIGH);
delay(20);
digitalWrite(LED_PINK1, LOW);
digitalWrite(LED_PINK2, LOW);
digitalWrite(LED_PINK3, LOW);
digitalWrite(LED_BLUE1, LOW);
digitalWrite(LED_BLUE2, LOW);
digitalWrite(LED_BLUE3, LOW);
delay(300);
digitalWrite(LED_PINK1, HIGH);
digitalWrite(LED_PINK2, HIGH);
digitalWrite(LED_PINK3, HIGH);
digitalWrite(LED_BLUE1, HIGH);
digitalWrite(LED_BLUE2, HIGH);
digitalWrite(LED_BLUE3, HIGH);
delay(20);
digitalWrite(LED_PINK1, LOW);
digitalWrite(LED_PINK2, LOW);
digitalWrite(LED_PINK3, LOW);
digitalWrite(LED_BLUE1, LOW);
digitalWrite(LED_BLUE2, LOW);
digitalWrite(LED_BLUE3, LOW);
delay(200);
digitalWrite(LED_PINK1, HIGH);
digitalWrite(LED_PINK2, HIGH);
digitalWrite(LED_PINK3, HIGH);
digitalWrite(LED_BLUE1, HIGH);
digitalWrite(LED_BLUE2, HIGH);
digitalWrite(LED_BLUE3, HIGH);
delay(20);
digitalWrite(LED_PINK1, LOW);
digitalWrite(LED_PINK2, LOW);
digitalWrite(LED_PINK3, LOW);
digitalWrite(LED_BLUE1, LOW);
digitalWrite(LED_BLUE2, LOW);
digitalWrite(LED_BLUE3, LOW);
delay(100);
digitalWrite(LED_PINK1, HIGH);
digitalWrite(LED_PINK2, HIGH);
digitalWrite(LED_PINK3, HIGH);
digitalWrite(LED_BLUE1, HIGH);
digitalWrite(LED_BLUE2, HIGH);
digitalWrite(LED_BLUE3, HIGH);
delay(7000);
digitalWrite(LED_BLUE1, LOW);
randomFlicker(LED_BLUE2, 200);
randomFlicker(LED_PINK1, 200);
digitalWrite(LED_PINK1, LOW);
randomFlicker(LED_PINK3, 200);
digitalWrite(LED_PINK3, LOW);
randomFlicker(LED_BLUE1, 200);
digitalWrite(LED_BLUE2, LOW);
randomFlicker(LED_PINK2, 200);
digitalWrite(LED_PINK2, LOW);
randomFlicker(LED_BLUE3, 200);
digitalWrite(LED_BLUE3, LOW);
// **************************************
// Reset
// **************************************
digitalWrite(LED_PINK1, LOW);
digitalWrite(LED_PINK2, LOW);
digitalWrite(LED_PINK3, LOW);
digitalWrite(LED_BLUE1, LOW);
digitalWrite(LED_BLUE2, LOW);
digitalWrite(LED_BLUE3, LOW);
delay(1000);
randomFlicker(LED_LAMP, 200);
randomFlicker(LED_ROOF, 200);
randomFlicker(LED_SHOP, 400);
}
