#ifndef INPUTS_H
#define INPUTS_H



#define INPUT_1                   4
#define INPUT_2                   16
#define INPUT_3                   17
#define INPUT_4                   5
#define INPUT_5                   18
#define INPUT_6                   19
#define INPUT_7                   21
#define INPUT_8                   22

#define NUMBER_OF_INPUTS          8
 
/**
 * Set the opto pins into the correct mode.
 */
void init_inputs();

/**
 * Checks the opto states and sets the input LEDs accordingly.
 * 
 * Call this regularly or the input LEDs will not light up to
 * show the input states!
 */
void do_inputs();

/**
 * Read the input states and place them in the passed buffer.
 * 
 * Onus is on the user to make sure that the buffer is big enough to 
 * store all of the data.
 */
void get_inputs( char * states );

#endif
