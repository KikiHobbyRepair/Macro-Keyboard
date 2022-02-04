
#include <OneButton.h>
#include <Keyboard.h>

 
OneButton button1(7, true);
OneButton button2(6, true);
OneButton button3(5, true);
OneButton button4(4, true);
OneButton button5(3, true);
OneButton button6(A1, true);
OneButton button7(A2, true);
OneButton button8(A3, true);
OneButton button9(9, true);
OneButton button10(8, true);
OneButton button11(10, true);
OneButton button12(16, true);
OneButton button13(14, true);
OneButton button14(15, true);
OneButton button15(A0, true);



void setup() {
  
  button1.attachClick(click1);
  button2.attachClick(click2);
  button3.attachClick(click3);
  button3.attachDoubleClick(doubleclick1);
  button3.attachMultiClick(multiclick1);
  button4.attachClick(click4);
  button5.attachClick(click5);
  button6.attachClick(click6);
  button7.attachClick(click7);
  button8.attachClick(click8);
  button9.attachClick(click9);
  button10.attachClick(click10);
  button11.attachClick(click11);
  button12.attachClick(click12);
  button13.attachClick(click13);
  button14.attachClick(click14);
  button14.attachDoubleClick(doubleclick2);
  button14.attachMultiClick(multiclick2);
  button15.attachClick(click15);
  Keyboard.begin();

} // setup


 
void loop() {
  
  button1.tick();
  button2.tick();
  button3.tick();
  button4.tick();
  button5.tick();
  button6.tick();
  button7.tick();
  button8.tick();
  button9.tick();
  button10.tick();
  button11.tick();
  button12.tick();
  button13.tick();
  button14.tick();
  button15.tick();
 
 
  delay(10);
} // loop


void click1() {
  Keyboard.press ('q'); 
  Keyboard.releaseAll();
} 
void click2() {
  Keyboard.press ('e'); 
  Keyboard.releaseAll();
} 
void click3() {
  Keyboard.press ('r'); 
  Keyboard.releaseAll();
} 
void doubleclick1() {
   Keyboard.press (KEY_LEFT_SHIFT); 
   Keyboard.press ('r');
   Keyboard.releaseAll();
} 
void multiclick1() {
   Keyboard.press (KEY_LEFT_CTRL); 
   Keyboard.press ('r');
   Keyboard.releaseAll();
} 
void click4() {
  Keyboard.press ('t'); 
  Keyboard.releaseAll();
} 
void click5() {
  Keyboard.press ('i'); 
  Keyboard.releaseAll();
} 
void click6() {
  Keyboard.press ('o'); 
  Keyboard.releaseAll();
} 
void click7() {
  Keyboard.press ('p'); 
  Keyboard.releaseAll();
} 
void click8() {
  Keyboard.press ('d'); 
  Keyboard.releaseAll();
} 
void click9() {
  Keyboard.press ('f'); 
  Keyboard.releaseAll();
} 
void click10() {
  Keyboard.press ('h'); 
  Keyboard.releaseAll();
} 
void click11() {
  Keyboard.press ('j'); 
  Keyboard.releaseAll();
} 
void click12() {
  Keyboard.press ('l'); 
  Keyboard.releaseAll();
} 
void click13() {
  Keyboard.press ('x'); 
  Keyboard.releaseAll();
} 
void click14() {
  Keyboard.press ('c'); 
  Keyboard.releaseAll();
} 
void doubleclick2() {
   Keyboard.press (KEY_LEFT_SHIFT); 
   Keyboard.press ('c');
   Keyboard.releaseAll();
} 
void multiclick2() {
   Keyboard.press (KEY_LEFT_SHIFT); 
   Keyboard.press ('o');
   Keyboard.releaseAll();
} 
void click15() {
  Keyboard.press ('m'); 
  Keyboard.releaseAll();
} 
