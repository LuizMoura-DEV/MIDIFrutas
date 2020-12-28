#include <CapacitiveSensor.h>


CapacitiveSensor nota_01 = CapacitiveSensor(13,12);
CapacitiveSensor nota_02 = CapacitiveSensor(13,11);
CapacitiveSensor nota_03 = CapacitiveSensor(13,10);
CapacitiveSensor nota_04 = CapacitiveSensor(13,9);


const int qNotas =  4 , capS = 50;

void setup(){
  Serial.begin(9600);
}

void loop(){  
  long nota[qNotas] = {
     (nota_01.capacitiveSensor(capS)),   //Posicao 0 do vetor
     (nota_02.capacitiveSensor(capS)),   //Posicao 1 do vetor
     (nota_03.capacitiveSensor(capS)),   //Posicao 2 do Vetor 
     (nota_04.capacitiveSensor(capS)),   //Posicao 3 do Vetor
  };  
  
  while(nota[0] > 500){
     tone(6, 262); 
     nota[0] = nota_01.capacitiveSensor(capS);
  }
  while(nota[1] > 500){
     tone(6, 294);  
     nota[1] = nota_02.capacitiveSensor(capS);
  }
  while(nota[2] > 500){
     tone(6, 330);  
     nota[2] = nota_03.capacitiveSensor(capS);
  }
  while(nota[3] > 500){
     tone(6, 349);  
     nota[3] = nota_04.capacitiveSensor(capS);
  }  
  noTone(6);
}

/*void teste(){
  Serial.print("Valores: Nota 01: ");
  Serial.print(nota[0]);
  Serial.print(" |Nota 02: ");
  Serial.print(nota[1]);
  Serial.print(" |Nota 03: ");
  Serial.print(nota[2]);
  Serial.print(" |Nota 04: ");
  Serial.println(nota[3]); 
  delay(1000);  
}*/
