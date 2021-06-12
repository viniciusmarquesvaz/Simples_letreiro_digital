#include <LiquidCrystal.h> //Biblioteca LCD
// lcd (RS,E,D4,D5,D6,D7,D8)

LiquidCrystal lcd(8,9,4,5,6,7);
int numRows = 2;  //linhas 
int numCols = 16; //colunas
int i= 0;

void setup()
{
  lcd.begin(numRows, numCols); //inicio
  lcd.clear(); //limpa o LCD
  
}

void loop()
{
  lcd.setCursor(0,0); //ajusta o cursor
  lcd.print("Loja Aberta");  //imprime
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("Bem Vindos!");
  delay(1000);
  lcd.clear();
}