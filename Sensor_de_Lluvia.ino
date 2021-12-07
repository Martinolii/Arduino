//A0 del modulo es el A0 del arduino
//D0 del modulo va pin 2

int analogValue;// valores de 0 a 1023
bool digitalValue; //Se guarda el valor digital
void setup(){
  Serial.begin(9600);
}

void loop (){
  analogValue =analogRead (0);//entrada de lectura analogica Leemos A0
  if (analogValue < 300)// Si nuestro valor analogico es de 300
    Serial.println("LLuvia Intensa");
  else if (analogValue < 500)
    Serial.println("Lluvia Moderada");
  else 
    Serial.println("Lluvia no dtectada");
    
  digitalValue =digitalRead(2);// Vamos a leer el valor del sensor D0 y va al pin 2 del arduino
  if (digitalValue == HIGH)
  
  Serial.println(">>>> No Lluvia");
  else 
   Serial.println(">>> LLuvia");
  delay(1000);
}
