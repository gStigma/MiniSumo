#define NUM_SENSORES 8
#define Umbral 2000 // Umbral utilizado para detectar superficie negra

int sensorPins[NUM_SENSORES] = {34, 35, 32, 33, 25, 26, 27, 14}; // Pines analógicos utilizados para leer los datos de la barra QTR en la ESP32


bool valorAlmacenado(){
  int qtrValues[NUM_SENSORES]; // Array para almacenar los valores de los 8 sensores
  for (int i = 0; i < NUM_SENSORES; i++) {
    qtrValues[i] = analogRead(sensorPins[i]); // Leer los valores analógicos de cada sensor
  }
  for (int i = 0; i < NUM_SENSORES; i++) {
    if (qtrValues[i] < Umbral) {
      return true;// Si es superficie negra
    } else {
      return false;// Si es superficie blanca
    }
  }
  delay(100); // Esperar un tiempo antes de leer nuevamente la QTR-8A
}
