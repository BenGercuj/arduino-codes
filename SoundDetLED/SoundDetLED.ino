const int pinRed = 2;
const int pinGreen = 3;
const int pinBlue = 4;

const int pinSound = 5;
int var = 0;

void setup() {
    pinMode(pinSound, INPUT);
}

void loop() {
  var = digitalRead(pinSound);
    
    if(var == HIGH)
      {
        analogWrite(pinRed, 0);
        analogWrite(pinGreen, 255);
        analogWrite(pinBlue, 0);
        delay(200);
      }
    else
      {
        analogWrite(pinRed, 255);
        analogWrite(pinGreen, 0);
        analogWrite(pinBlue, 0);
      }
}

//detection sensitivity set with module's potentiometer
//over a certain level, the PC's passive sound is high enough to be detected, rendering anything else undetectable
//however, it might work just fine in 100% silent environment
