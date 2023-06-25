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
 
/*the stimuli administration starts together with the MEYE triggering when the button is pressed*/

if (start == false && button.fell()) {
  digitalWrite(led1, LOW);
  start = true;
  delay(200);
}

if (start == true) {

/*after the first button press the administration of stimuli will be interrupted when all stimuli have been presented or the button is pressed again*/

button.update();
 
    if (button.fell()) {
    digitalWrite (led1, HIGH);
    start = false;
    i=0;
    }

    if (i==end)  {
    digitalWrite (led1, HIGH);
    start = false;
    i = 0;    
    }

    else {
 

      if(V[i] == 0) {
        tone(11,415.3);
        Keyboard.press('q');
        delay(300);
        noTone(11);
        Keyboard.release('q');
      }    
      else if(V[i] == 1) {
        tone(11,622.3);
        Keyboard.press('w');
        delay(300);
        noTone(11);
        Keyboard.release('w');
      }
    
    }

      if (i < end){
        i++;
      }

      delay(1000);

  }
    
}
