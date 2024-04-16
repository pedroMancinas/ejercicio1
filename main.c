/*Pedro Mancinas Hernandez 21060686*/
/*FORO UNIDAD 2 EJERCICIO 1*/

#include "msp.h" // Incluye la biblioteca de periféricos MSP432040IR

#define lola 12

void main(void) // Función principal main
{
    WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD; // Detiene el temporizador de vigilancia

    P1->SEL0 &= ~0x01; // Configura el pin P1.0 en modo GPIO
    P1->SEL1 &= ~0x01;
    P1->DIR |= 0x01;   // Configura el pin P1.0 como salida
    P1->OUT |= 0x01;   // Establece el pin P1.0 en alto para encender el LED inicialmente

    while(1) {
         P1->OUT ^= 0x01; // Realiza una operación XOR entre el pin P1.0 y 1 para cambiar su estado
        _delay_cycles(500000); // Espera un tiempo aproximadamente de medio segundo
  }
}
