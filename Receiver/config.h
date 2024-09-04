#ifndef CONFIG_H_
#define CONFIG_H_

#define MOTOR_HIGH  1
#define MOTOR_LOW   0

#define MOTOR_A_1   9
#define MOTOR_A_2   8

#define MOTOR_B_1   6
#define MOTOR_B_2   7

#define MOTOR_C_1   2
#define MOTOR_C_2   3

#define MOTOR_D_1   4
#define MOTOR_D_2   5

#define WAREHOUSE_MOTOR_1  25
#define WAREHOUSE_MOTOR_2  26


#define WAREHOUSE_OPEN  13
#define WAREHOUSE_GET_RING  11

#define SHOOTING_ANGLE_LOW  10

#define SHOOTING_FIRE 12

void robot_config();

void stop();
void move_right();
void move_left();
void move_forward();
void move_back();
void move_rotate_right();
void move_rotate_left();

void warehouse_up();
void warehouse_down();
void warehouse_open();
void warehouse_close();
void warehouse_get_ring();

void shooting_angle_low();
void shooting_angle_high();
void shooting_fire();

void robot_config();
#endif