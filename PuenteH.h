/*****Configuracion*****/
//salidas
#define STBY 26
#define PWMA 25
#define AIN1 32
#define AIN2 33
#define PWMB 14
#define BIN1 27
#define BIN2 12

void configuracionPuenteH(){
  //Configuramos las salidas hacia el motor
  pinMode(STBY, OUTPUT);
  digitalWrite(STBY, HIGH);
  pinMode(PWMA, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
}
/*******Acciones*******/
void MotoresAdelante(){
  // Girar ambos motores hacia adelante a velocidad máxima
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  analogWrite(PWMA, 255);
  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  analogWrite(PWMB, 255);
  delay(2000);
}

void MotoresAtras(){
  // Girar ambos motores hacia atrás a velocidad máxima
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  analogWrite(PWMA, 255);
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  analogWrite(PWMB, 255);
  delay(2000);
}

void MotoresGiroDerecha(){
  // Girar ambos motores hacia derecha a velocidad máxima
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  analogWrite(PWMA, 255);
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, LOW);
  analogWrite(PWMB, 255);
  delay(2000);
}
void MotoresGiroIzquierda(){
  // Girar ambos motores hacia izquierda a velocidad máxima
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, LOW);
  analogWrite(PWMA, 255);
  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  analogWrite(PWMB, 255);
  delay(2000);
}
void MotoresParo(){
  // Apagar ambos motores
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, LOW);
  analogWrite(PWMA, 0);
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, LOW);
  analogWrite(PWMB, 0);
  delay(2000);
}
