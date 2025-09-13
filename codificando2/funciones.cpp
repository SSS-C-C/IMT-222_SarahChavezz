#include "funciones.h"

bool flag = false; //bool llega a ser como entero
//colocamos solo las funciones
//para no tener numeros m[agicos
//funcion de configuracion - estado 1
void configuracion(){
  Serial.begin(BAUDRATE);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(BTN,INPUT);

  digitalWrite(LED1,false);
  digitalWrite(LED2,false);
  digitalWrite(LED3,false);
  digitalWrite(LED4,false);

}

//funcion de espera - estado 2
void espera(){
  if (BTN==true){
    flag=true;
  }
}
//funcion de espera - estado 3
void secuencia(){
  if(flag){
    flag=false;
    digitalWrite(LED1,true);
    delay(DELAY);
    digitalWrite(LED2,true);
    delay(DELAY);
    digitalWrite(LED3,true);
    delay(DELAY);
    digitalWrite(LED4,true);
    delay(DELAY);
    digitalWrite(LED1,false);
    digitalWrite(LED2,false);
    digitalWrite(LED3,false);
    digitalWrite(LED4,false);
  }

}