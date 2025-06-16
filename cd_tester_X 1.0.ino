#include <LiquidCrystal_I2C.h>

/*
----------------CDTESTER.X 1.0---------------------------------------------------------------------------------------------------------------- 
ITALIA — Firmware sviluppato da CD, progettato per testare componenti elettronici come LED, LED RGB e display LCD (16x2, 20x2 e altri formati).
È compatibile con qualsiasi display LCD I2C, indipendentemente dalle dimensioni, grazie all’utilizzo della libreria LiquidCrystal_I2C.

Questa è la prima versione beta, attualmente in costante sviluppo, con l’obiettivo di integrare sempre più componenti e funzionalità.

Il progetto è completamente open-source, per permettere a chiunque di studiarlo, modificarlo e adattarlo alle proprie esigenze.

Le lingue supportate al momento sono l’italiano e l’inglese.

Per segnalazioni di bug o richieste di supporto, è possibile contattarmi su Discord: cdcorals21.
-------------------------------------------------------------------------------------------------
ENGLISH — Firmware developed by CD, designed to test electronic components such as LEDs, RGB LEDs, and LCD displays (16x2, 20x2, and other formats).
It supports any I2C LCD display, regardless of size, thanks to the use of the LiquidCrystal_I2C library.

This is the first beta version, currently under continuous development, with the goal of adding support for more components and features over time.

The project is fully open-source, allowing anyone to study, modify, and adapt the code to their own needs.

The currently supported languages are Italian and English.

To report bugs or request support, feel free to contact me on Discord: cdcorals21.
----------------------------------------------------------------------------------------------
*/





LiquidCrystal_I2C lcd(0x27,16, 2); //Changeable I2C address




//Setting of LCD ( I2C )
int x = 3; 
int y = 0;
String text = "hello world"; // You can change the phrase "Hello world" with whatever you want.





// defines of GPIO pins.
#define LED_PIN 2




// defines of RGB pins.
#define LED_PIN_RED 3
#define LED_PIN_BLUE 5
#define LED_PIN_GREEN 6

  

void setup() {
Serial.begin(9600);
pinMode(LED_PIN, OUTPUT);
 
Serial.println("firmware by CD");
Serial.println("Enter 'h' for all command");
  
delay(20);
}

void loop() {
if (Serial.available() > 0) {
char r = Serial.read();
if (r == 'h') {
help(); }
else if (r == 'l') {
ledon(); }
else if (r == 'L') {
ledoff(); }
else if (r == 'r') {
red(); }
else if (r == 'b') {
blue(); }
else if (r == 'g') {
green(); }
else if (r == '0') {
screen(); 
         }
    }
}
   
  

void help() {
Serial.println("----Commands----");
Serial.println("(l) = Led ON");
Serial.println("(L) = Led OFF");
Serial.println("(0) = ON THE LCD I2C");
Serial.println("(r) = ON RED OF LED RGB");
Serial.println("(b) = ON BLUE OF LED RGB");
Serial.println("(g) = ON GREEN OF LED RGB");
}
  
  

void ledon() {
digitalWrite(LED_PIN, HIGH);
Serial.println("Led : ON"); }



void ledoff() {
digitalWrite(LED_PIN, 	LOW);
Serial.println("Led : OFF"); }




void red() {
digitalWrite(LED_PIN_RED, HIGH);
Serial.println("LED RGB : RED ON"); }



void blue() {
digitalWrite(LED_PIN_BLUE, HIGH);
Serial.println("LED RGB : BLUE ON"); }



void green () {
digitalWrite(LED_PIN_GREEN, HIGH);
Serial.println("LED RGB : GREEN ON"); }



void screen() {
lcd.init();
delay(20);
lcd.backlight();
lcd.setCursor(3, 0);
  
lcd.print("Firmware");
lcd.setCursor(0, 1);
  
lcd.print("CD-tester.x 1.0");
delay(5000);
lcd.clear();
lcd.setCursor(x, y);
lcd.print(text); }