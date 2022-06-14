//Semáfaro legal
//declaração de variáveis
int led1 = 13;
int led2 = 12;
int led3 = 11;
int tempo = 1000; // não precisa definir essa variável, pode usar o número direto

//Inicialização das variáveis
void setup() {
 	pinMode(led1, OUTPUT); // saída 
  	pinMode(led2, OUTPUT);
 	pinMode(led3, OUTPUT);
  	
}

//Execução
void loop () {
 	digitalWrite(led1, 1000);
  	delay(tempo);
  	digitalWrite(led1, 0);
  	delay(tempo);   	
    digitalWrite(led2, 1000);
    delay(tempo);
  	digitalWrite(led2, 0);
  	delay(tempo);
  	digitalWrite(led3, 1000);
  	delay(tempo);
  	digitalWrite(led3, 0);
  	delay(tempo);
}