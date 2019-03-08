/*
 * test.c
 */
#include <util/delay.h>
#include <avr/io.h>
#define LED PA0

int main(void) {
  // define pd4 as output
  DDRA |= (1 << LED);

  while (1) {
    PORTA |= (1 << LED);    // switch on
    _delay_ms(100);
    _delay_ms(100);
    PORTA &= ~(1 << LED);    // switch off
    _delay_ms(100);
    _delay_ms(100);
  }
return 0;
}