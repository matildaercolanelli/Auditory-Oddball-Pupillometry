#include <Keyboard.h>
#include <Bounce2.h>
#define BUTTON_PIN 2

Bounce button = Bounce();

int speaker = 11;
int V [200] = {/*insert array*/};
int i = 0;
int led1 = 4;
bool start = false;
int end = 200;
int led1State = HIGH;


void setup() {
  delay(1000);
  Keyboard.begin(); 
  pinMode(speaker, OUTPUT);
  pinMode(led1, OUTPUT);
  button.attach(BUTTON_PIN,INPUT_PULLUP);
  button.interval(10);
  digitalWrite(led1, led1State);
}

void loop() {

button.update();
 
//the stimuli administration starts together with the MEYE triggering when the button is pressed, at the same time the led switches off

if (button.fell()) {
  if (start == false) {
    start = true;
    digitalWrite(led1, LOW);
    delay(200);
  }
  else if (start == true) {
    start = false;
    digitalWrite(led1, HIGH);
    i = 0;
  }
  
}

  if (start == true) {  
  
  //after the first button press the administration will be interrupted when all stimuli have been presented or the button is pressed again

    if (timer(1000)) {
      
      if (i == end)  {
        digitalWrite (led1, HIGH);
        start = false;
        i = 0;    
      } 

      else {

          if (V[i] == 0) {
              tone(11,415.3);
              Keyboard.press('q');
              delay(300),
              noTone(11);
              Keyboard.release('q');
          }    

          else if (V[i] == 1) {
              tone(11,622.3);
              Keyboard.press('w');
              delay(300);
              noTone(11);
              Keyboard.release('w');
          }
        
        }

      if (i < end) {
        i++;
      }

    }

  }

}

//creating a timer function which goes off every second, giving the time for the stimuli administration

int timer(unsigned long intervallo) {
static unsigned long t0, delta;
int ret = 0;
delta = millis()-t0;
  
if (delta >= intervallo) {
    t0 = millis();
    ret = 1;
  }

return ret;

}

