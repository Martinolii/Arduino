//Bottones
//#define BUTTONRIGHT 7
//#define BUTTONLEFT 13
// Conexion en puente H con Arduino
int IN1= 6;
int IN2=9;
int ENA = 10;

void setup(){
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
}
void loop(){
  digitalWrite(ENA, HIGH);
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, HIGH);
  delay(2000);
   digitalWrite(ENA, LOW);
   delay(2000);
   digitalWrite(ENA, HIGH);
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, HIGH);
  
  
}
