#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <Arduino.h>
// MACROS: EN DONDE ALLA LA PALABRA LITERAL, LA REEMPLAZA POR EL DATO, NO TERMINA EN ; POR QUE NO ES UNA INSTRUCCION
#define   DELAY   1000
//pines
#define   LED1   2
#define   LED2   3
#define   LED3   4
#define   LED4   5
#define   BTN    6
#define BAUDRATE 9600
//uint8_t flag =0 //almacena del 0 a 285lop mismo que chart
 
//colocamos las cabeceras(prototipo de las funciones)
void configuracion();
void espera();
void secuencia();


#endif