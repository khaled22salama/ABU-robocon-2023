#ifndef CONFIG_H_
#define CONFIG_H_

#define FORWARD  A0
#define BACK  A3
#define LEFT  A2
#define RIGHT  A1
#define ROTATE_RIGHT  A5
#define ROTATE_LEFT A4


#define WAREHOUSE_UP   7
#define WAREHOUSE_DOWN 6

#define WAREHOUSE_OPEN   A6
#define WAREHOUSE_CLOSE  5

#define WAREHOUSE_GET_RING 2

#define SHOOTING_LOW_ANGLE  3
#define SHOOTING_HIGH_ANGLE 4

#define SHOOTING_FIRE 8

void config();
#endif