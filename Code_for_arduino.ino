#include <LiquidCrystal.h>


#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

const int colorR = 50;
const int colorG = 50;
const int colorB = 150;



const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;
void setup() {
  lcd.begin(16, 2);
  pinMode(switchPin, INPUT);
  lcd.setRGB(colorR, colorG, colorB);
  //Begin init statement
  lcd.print("Hallo bei der");
  lcd.setCursor(0,1); // changes the Cursor to continue writing in the second row
  lcd.print("Jobkristallkugel");
}
void loop() {
  switchState=digitalRead(switchPin);

  if (switchState != prevSwitchState) {
    if (switchState == HIGH) {
      reply = random(31);
      lcd.clear(); // clears the writing
      lcd.setCursor(0,0); 
      //Output - "Your Job"
      lcd.print("Dein Job:");
      lcd.setCursor(0,1);
      //All possible Jobs
      switch(reply){ // the program will enter the case assigned to the switch
        case 0:
        lcd.print("Sicherheitskraft");
        break;
        case 1:
        lcd.print("Putzkraft");
        break;
        case 2:
        lcd.print("WerkstudentIn");
        break;
        case 3:
        lcd.print("MechatronikerIn");
        break;
        case 4:
        lcd.print("IngenieurIn");
        break;
        case 5:
        lcd.print("SachbearbeiterIn");
        break;
        case 6:
        lcd.print("SachbearbeiterIn");
        break;
        
        lcd.print("BetriebsaerztIn");
        break;
        case 7:
        lcd.print("SektionsleiterIn");
        break;
        case 8:
        lcd.print("CFO");
        break;
        lcd.print("TeamleiterIn");
        break;
        case 9:
        lcd.print("InformatikerIn");
        break;
        case 10:
        lcd.print("CEO");
        break;
        case 11:lcd.print("SachbearbeiterIn");
        break;
        case 12:lcd.print("SachbearbeiterIn");
        break;
        case 13:lcd.print("SachbearbeiterIn");
        break;
        case 14:lcd.print("SachbearbeiterIn");
        break;
        case 15: lcd.print("Facility ManagerIn");
        break;
        case 16:lcd.print("Facility ManagerIn");
        break;
        case 17:lcd.print("Facility ManagerIn");
        break;
        case 18:lcd.print("MonteurIn");
        break;
        case 19:lcd.print("MonteurIn");
        break;
        case 20:lcd.print("MonteurIn");
        break;
        case 21:lcd.print("MechatronikerIn");
        break;
        case 22:lcd.print("ElektrotechnikerIN");
        break;
        case 23:lcd.print("ElektrotechnikerIN");
        break;
        case 24:lcd.print("InformatikerIN");
        break;
        case 25:
        lcd.print("Putzkraft");
        break;
        case 26:lcd.print("PersonalerIn");
        break;
        case 27:lcd.print("PersonalerIn");
        break;
        case 28:lcd.print("Empfangspersonal");
        break;
        case 29:lcd.print("InformatikerIN");
        break;
        case 30:
        lcd.print("Putzkraft");
        break;
      }
    }
  }
  

}
