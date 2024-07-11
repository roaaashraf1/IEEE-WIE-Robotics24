// include the library code:
#include <LiquidCrystal.h>
#include <Keypad.h>
#define led 13
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = A0, d5 = A1, d6 = A2, d7 = A3;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {5, 4, 3, 2}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {8, 7, 6}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

char storepass[]="123456";
int i=0 ,count=0, num= sizeof(storepass)-1;
char pass[sizeof(storepass)-1];
void setup(){
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Enter password");
  lcd.setCursor(0, 1);
  pinMode(led,OUTPUT);
}
  
void loop(){
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  

  char key = keypad.getKey();
  
  if (key>'0' && key != '#'){
    lcd.print('*');
    pass[i]=key;
    i++;
  }else if (key=='#'){
    if(i==num){
      for(int j=0;j<num;j++){
        if(pass[j]==storepass[j])count++;
      }
      if(count==num){
        lcd.clear();
        digitalWrite(led , HIGH);
        lcd.setCursor(0,0);
        lcd.print("Correct password     ");
        delay(2000);
        lcd.clear();
        lcd.print("Enter password");
        lcd.setCursor(0, 1);
        i=0;
        count=0;
        
      }else{
        printt();

      }
    }else{
      printt();
    }

  }
}
void printt ()
{
 lcd.clear();
 digitalWrite(led , LOW);
 lcd.setCursor(0,0);
 lcd.print("Wrong password       ");
 delay(2000);
 lcd.clear();
 lcd.print("Enter password");
 lcd.setCursor(0, 1);
 i=0;
 count=0;
 
}
