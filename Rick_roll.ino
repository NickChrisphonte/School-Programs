#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}

//infinite rick rolls
void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  
  //DigiKeyboard.println("Hello Digispark!");
  //opens cmd
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  
  DigiKeyboard.print("cmd.exe");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  //opens chrome for some rick rollin
  DigiKeyboard.print("start chrome.exe https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
  DigiKeyboard.delay(500);
}
