#include <fxcg/display.h> //Imports
#include <fxcg/keyboard.h>

int main() {
  PrintXY(3,5,"--Hey, this is", TEXT_MODE_NORMAL, TEXT_COLOR_RED); // The text. X and Y start at 1 for some reason.
  PrintXY(3,6,"--my first program!", TEXT_MODE_NORMAL, TEXT_COLOR_BLUE);
  int key;
  while(1)
    GetKey(&key); // Loop until the "MENU" key is pressed to close :D
  
  return 0; 
}
