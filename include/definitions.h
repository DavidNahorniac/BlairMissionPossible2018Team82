/*
Custom definitions

Use this file to define new types, pins, etc.

*/

#ifndef DEFINITIONS_H
#define DEFINITIONS_H


//digital pins
#define EXAMPLE_PIN_DIGITAL 5 //example


//analog pins
#define EXAMPLE_PIN_ANALOG 1 //example


//motor pins
#define TEST_MOTOR 2



//new types
typedef enum direction {
  Forward = 0,
  Backward = 1,
  Right = 2,
  Left = 3
} Direction;



#endif
