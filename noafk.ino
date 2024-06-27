#include "DigiKeyboard.h"


void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(1000);
  switch(rand()%3)
  {
    case 0:
      DigiKeyboard.sendKeyPress(KEY_W);
      DigiKeyboard.delay(rand()%5000);
      DigiKeyboard.sendKeyPress(0);
      break;
    case 1:
      DigiKeyboard.sendKeyPress(KEY_A);
      DigiKeyboard.delay(rand()%5000);
      DigiKeyboard.sendKeyPress(0);
      break;
    case 2:
      DigiKeyboard.sendKeyPress(KEY_S);
      DigiKeyboard.delay(rand()%5000);
      DigiKeyboard.sendKeyPress(0);
      break;
    case 3:
      DigiKeyboard.sendKeyPress(KEY_D);
      DigiKeyboard.delay(rand()%5000);
      DigiKeyboard.sendKeyPress(0);
      break;
    default:
      DigiKeyboard.sendKeyPress(KEY_SPACE);
      DigiKeyboard.delay(rand()%5000);
      DigiKeyboard.sendKeyPress(0);
      break;
  }
  DigiKeyboard.delay((rand()%10)*1000);
}