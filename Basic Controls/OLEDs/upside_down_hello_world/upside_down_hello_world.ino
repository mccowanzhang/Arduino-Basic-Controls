#include "U8glib.h"
U8GLIB_SSD1306_132X64 u8g(10, 9, 12, 11, 13);
//arduno connections: 10=D0, 9=D1, 12=CS, 11=DC, 13=RST
void setup() {
u8g.setRot180();
}
void helloWorld(){
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(10,10);
  u8g.print("Hello World");
}
void loop() {
u8g.firstPage();
do{
helloWorld();
}while(u8g.nextPage());
delay(100);
}
