#include "U8glib.h"
U8GLIB_SSD1306_132X64 u8g(10, 9, 12, 11, 13);
//arduno connections: 10=D0, 9=D1, 12=CS, 11=DC, 13=RST
//1.3" 132x64 0.99" 128x64

int a = 1; 
int z = 0.1;

void setup() {
  // put your setup code here, to run once:

}
void bouncing(){
a = a+z;
  u8g.drawCircle(30, (a*a)/2, 5);
if(a==0||a==10){
  z= -z;
}
}
void loop(){
u8g.firstPage();
do{
  bouncing();
  

}
while(u8g.nextPage());
}
