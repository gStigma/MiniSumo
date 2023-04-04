/*Creacion de robot minisumo 
 * @Jose
 * @Adriana
 * @Jesus 
 * V1.0
 */

 
#include "puenteH.h"
#include "QTR.h"

void setup() {
 configuracionPuenteH();
}

void loop(){ 
  if(valorAlmacenado()){//Si detecta una linea blanca se regrese hacia atras a gran velocidad
  }else{
    MotoresAtras();
  }
}
