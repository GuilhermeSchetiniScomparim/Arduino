#include <LiquidCrystal.h>

//Conexões:
//rs (pino LCD 4) para D4
//rw (pino LCD 5) para D5
//enable (pino LCD 6) para D6
//pino LCD 15 para D13
//pino LCD D4, D5, D6, D7 para D9, D10, D11, D12

LiquidCrystal lcd(4, 5, 6, 9, 10, 11, 12);

//Controlará a iluminação de fundo (backlight)
const short int backlight = 13;

void setup (){
	pinMode(backlight, OUTPUT);

	//ligar o backlight
	digitalWrite(backlight, HIGH);

	//iniciar o LCD 16x2. (colunas x linhas)
	lcd.begin(16,2);

	//Limpar a tela
	lcd.clear();

	//Mover o cursor para a primeira coluna e primeira linha
	lcd.setCursor(0,0);

	//Escrever o texto na tela
	lcd.print("ANA");

	//Move o cursor para a segunda linha
	lcd.setCursor(0,1);

	//Escrever o texto na tela
	lcd.print("CAROLINA");
}

void loop (){
	//Aguardar 2 segundos (2000ms)
	delay(2000);
	lcd.noDisplay();

	//Desliga o display
	delay(500);
	
	lcd.display();
}