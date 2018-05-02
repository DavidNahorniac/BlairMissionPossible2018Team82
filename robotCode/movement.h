#include "types.h"

#ifndef MOVEMENT_H
#define MOVEMENT_H


#ifdef __cplusplus
extern "C"{
#endif

/**
 * Movement/Motor Control
 * 
 */

//motor pins
#define MOTOR_TEST null



void move(Direction d, double distance); //distance is in centimetres





#ifdef __cplusplus
}//finish extern C
#endif
#endif
