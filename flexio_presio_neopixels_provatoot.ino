// the setup routine runs once when you press reset:

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

#define PIN 6

#define NUM_LEDS 60

#define BRIGHTNESS 50

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);


void setup() {
  // put your setup code here, to run once:
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

  strip.setBrightness(BRIGHTNESS);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'

}

void loop() {
  // put your main code here, to run repeatedly:

  //Lector de flexió
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  // print out the value you read:
  Serial.println(voltage);


  //Lector de presió
  // read the input on analog pin 1:
  int sensorValue2 = analogRead(A1);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage2 = sensorValue2 * (5.0 / 1023.0);
  // print out the value you read:
  Serial.println(voltage2);


  //AQUESTES SEqÜENCIES DE LLUM SOL FUNCIONARÀ QUAN EL SENSOR DE FLEXIO ESTIGUI FLEXIONAT PER SOBRE ELS x GRAUS

  if (voltage > 1.2 && voltage2 < 2 ) {
    for (int i = 0; i < 33; i++) {
      strip.setPixelColor(i, strip.Color(255, 255, 255));
      strip.show();
      delay(60);

      if (i == 32) {
        strip.setPixelColor(0, strip.Color(0, 0, 0));
        strip.setPixelColor(1, strip.Color(0, 0, 0));
        strip.setPixelColor(2, strip.Color(0, 0, 0));
        strip.setPixelColor(3, strip.Color(0, 0, 0));
        strip.setPixelColor(4, strip.Color(0, 0, 0));
        strip.setPixelColor(5, strip.Color(0, 0, 0));
        strip.setPixelColor(6, strip.Color(0, 0, 0));
        strip.setPixelColor(7, strip.Color(0, 0, 0));
        strip.setPixelColor(8, strip.Color(0, 0, 0));
        strip.setPixelColor(9, strip.Color(0, 0, 0));
        strip.setPixelColor(10, strip.Color(0, 0, 0));
        strip.setPixelColor(11, strip.Color(0, 0, 0));
        strip.setPixelColor(12, strip.Color(0, 0, 0));
        strip.setPixelColor(13, strip.Color(0, 0, 0));
        strip.setPixelColor(14, strip.Color(0, 0, 0));
        strip.setPixelColor(15, strip.Color(0, 0, 0));
        strip.setPixelColor(16, strip.Color(0, 0, 0));
        strip.setPixelColor(17, strip.Color(0, 0, 0));
        strip.setPixelColor(18, strip.Color(0, 0, 0));
        strip.setPixelColor(19, strip.Color(0, 0, 0));
        strip.setPixelColor(20, strip.Color(0, 0, 0));
        strip.setPixelColor(21, strip.Color(0, 0, 0));
        strip.setPixelColor(22, strip.Color(0, 0, 0));
        strip.setPixelColor(23, strip.Color(0, 0, 0));
        strip.setPixelColor(24, strip.Color(0, 0, 0));
        strip.setPixelColor(25, strip.Color(0, 0, 0));
        strip.setPixelColor(26, strip.Color(0, 0, 0));
        strip.setPixelColor(27, strip.Color(0, 0, 0));
        strip.setPixelColor(28, strip.Color(0, 0, 0));
        strip.setPixelColor(29, strip.Color(0, 0, 0));
        strip.setPixelColor(30, strip.Color(0, 0, 0));
        strip.setPixelColor(31, strip.Color(0, 0, 0));
        strip.setPixelColor(32, strip.Color(0, 0, 0));

        strip.show();
      }
    }
  }


  //AQUESTES SEqÜENCIES DE LLUM SOL FUNCIONARÀ QUAN EL SENSOR DE PRESIO ESTIGUI PRESIONAT PER SOBRE ELS x GRAUS

  if (voltage < 1.2 && voltage2 >= 2  ) {
    for (int i = 0; i < 4; i++) {
      for (int j = 0; i < 16; i++) {
        strip.setPixelColor(i * 2, strip.Color(255, 255, 255));
        strip.setPixelColor(i * 2 + 1, strip.Color(229, 9, 127));
      }
      strip.setPixelColor(33, strip.Color(255, 255, 255));
      strip.show();

      delay(300);
      
      strip.setPixelColor(0, strip.Color(0, 0, 0));
      strip.setPixelColor(1, strip.Color(0, 0, 0));
      strip.setPixelColor(3, strip.Color(0, 0, 0));
      strip.setPixelColor(5, strip.Color(0, 0, 0));
      strip.setPixelColor(7, strip.Color(0, 0, 0));
      strip.setPixelColor(9, strip.Color(0, 0, 0));
      strip.setPixelColor(11, strip.Color(0, 0, 0));
      strip.setPixelColor(13, strip.Color(0, 0, 0));
      strip.setPixelColor(15, strip.Color(0, 0, 0));
      strip.setPixelColor(17, strip.Color(0, 0, 0));
      strip.setPixelColor(19, strip.Color(0, 0, 0));
      strip.setPixelColor(21, strip.Color(0, 0, 0));
      strip.setPixelColor(23, strip.Color(0, 0, 0));
      strip.setPixelColor(25, strip.Color(0, 0, 0));
      strip.setPixelColor(27, strip.Color(0, 0, 0));
      strip.setPixelColor(29, strip.Color(0, 0, 0));
      strip.setPixelColor(31, strip.Color(0, 0, 0));
      strip.setPixelColor(33, strip.Color(0, 0, 0));
      strip.show();

      delay(300);
      strip.setPixelColor(1, strip.Color(0, 0, 0));
      strip.setPixelColor(2, strip.Color(0, 0, 0));
      strip.setPixelColor(3, strip.Color(0, 0, 0));
      strip.setPixelColor(4, strip.Color(0, 0, 0));
      strip.setPixelColor(5, strip.Color(0, 0, 0));
      strip.setPixelColor(6, strip.Color(0, 0, 0));
      strip.setPixelColor(7, strip.Color(0, 0, 0));
      strip.setPixelColor(8, strip.Color(0, 0, 0));
      strip.setPixelColor(9, strip.Color(0, 0, 0));
      strip.setPixelColor(10, strip.Color(0, 0, 0));
      strip.setPixelColor(11, strip.Color(0, 0, 0));
      strip.setPixelColor(12, strip.Color(0, 0, 0));
      strip.setPixelColor(13, strip.Color(0, 0, 0));
      strip.setPixelColor(14, strip.Color(0, 0, 0));
      strip.setPixelColor(15, strip.Color(0, 0, 0));
      strip.setPixelColor(16, strip.Color(0, 0, 0));
      strip.setPixelColor(17, strip.Color(0, 0, 0));
      strip.setPixelColor(18, strip.Color(0, 0, 0));
      strip.setPixelColor(19, strip.Color(0, 0, 0));
      strip.setPixelColor(20, strip.Color(0, 0, 0));
      strip.setPixelColor(21, strip.Color(0, 0, 0));
      strip.setPixelColor(22, strip.Color(0, 0, 0));
      strip.setPixelColor(23, strip.Color(0, 0, 0));
      strip.setPixelColor(24, strip.Color(0, 0, 0));
      strip.setPixelColor(25, strip.Color(0, 0, 0));
      strip.setPixelColor(26, strip.Color(0, 0, 0));
      strip.setPixelColor(27, strip.Color(0, 0, 0));
      strip.setPixelColor(28, strip.Color(0, 0, 0));
      strip.setPixelColor(29, strip.Color(0, 0, 0));
      strip.setPixelColor(30, strip.Color(0, 0, 0));
      strip.setPixelColor(31, strip.Color(0, 0, 0));
      strip.setPixelColor(32, strip.Color(0, 0, 0));
      strip.setPixelColor(33, strip.Color(0, 0, 0));
      strip.show();


    }

  }

  delay(50);

}
