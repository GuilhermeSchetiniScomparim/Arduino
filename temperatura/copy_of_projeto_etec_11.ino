//Declaração das variáveis
byte leds[] = {6, 7, 8, 9, 10, 11, 12, 13};
int sensor = A1 ;
float temp2 = 0 ;
float temp = 0;

// Inicialização das variáveis
void setup() {
  for (int i = 0; i <= sizeof (leds); i++) {
pinMode (leds[i], //OUTPUT);
}
  pinMode (sensor, INPUT);
 // analogReference (INTERNAL);
  Serial.begin(9600);
}
// Execução
void loop() {
  temp2 = analogRead (sensor);
  float tensao = 5 * temp2;
  tensao = tensao / 1024;
  temp = (tensao - 0.5) * 100;
  
  Serial.print( "Temperatura:" );
  Serial.println(temp);
  Serial.println("  c");
    
    if (temp >= -40 && temp <=20){
    digitalWrite(leds[13], INPUT);
    digitalWrite(leds[12], INPUT);
    digitalWrite(leds[11], INPUT);
    }
    else (temp >= -40 && temp <=20); {
    digitalWrite(leds[13], OUTPUT);
    digitalWrite(leds[12], OUTPUT);
    digitalWrite(leds[11], OUTPUT);
      
    if (temp >= 21 && temp <=60){
    digitalWrite(leds[10], INPUT);
    digitalWrite(leds[9], INPUT);
    }
    else(temp >= 21 && temp <=60); {
    digitalWrite(leds[10], OUTPUT);
    digitalWrite(leds[9], OUTPUT);

      
      
    if (temp >= 61 && temp <=100){
    digitalWrite(leds[8], INPUT);
    digitalWrite(leds[7], INPUT);
    digitalWrite(leds[6], INPUT);
    }
    else(temp >= 61 && temp <=100); {
    digitalWrite(leds[8], OUTPUT);
    digitalWrite(leds[7], OUTPUT);
    digitalWrite(leds[6], OUTPUT);  
    
    
    
    
    }
    }
    }
    }
   