
#include <Arduino.h>
#include "input.h"

char opto_states[ NUMBER_OF_INPUTS ];

void init_inputs() {
  
  pinMode( INPUT_1, INPUT );
  pinMode( INPUT_2, INPUT );
  pinMode( INPUT_3, INPUT );
  pinMode( INPUT_4, INPUT );
  pinMode( INPUT_5, INPUT );
  pinMode( INPUT_6, INPUT );
  pinMode( INPUT_7, INPUT );
  pinMode( INPUT_8, INPUT );
  
}

void get_inputs( char * states ) {

  states[ 0 ] = ( digitalRead( INPUT_8 ) ) ? '0' : '1';
  states[ 1 ] = ( digitalRead( INPUT_7 ) ) ? '0' : '1';
  states[ 2 ] = ( digitalRead( INPUT_6 ) ) ? '0' : '1';
  states[ 3 ] = ( digitalRead( INPUT_5 ) ) ? '0' : '1';
  states[ 4 ] = ( digitalRead( INPUT_4 ) ) ? '0' : '1';
  states[ 5 ] = ( digitalRead( INPUT_3 ) ) ? '0' : '1';
  states[ 6 ] = ( digitalRead( INPUT_2 ) ) ? '0' : '1';
  states[ 7 ] = ( digitalRead( INPUT_1 ) ) ? '0' : '1';
  states[ 8 ] = '\0';
  
}
