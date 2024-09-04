#include "config.h"

void robot_config()
{
  pinMode(MOTOR_A_1 , OUTPUT);
  pinMode(MOTOR_A_2 , OUTPUT);

  pinMode(MOTOR_B_1 , OUTPUT);
  pinMode(MOTOR_B_2 , OUTPUT);
  
  pinMode(MOTOR_C_1 , OUTPUT);
  pinMode(MOTOR_C_2 , OUTPUT);
  
  pinMode(MOTOR_D_1 , OUTPUT);
  pinMode(MOTOR_D_2 , OUTPUT);

  pinMode(WAREHOUSE_MOTOR_1 , OUTPUT);
  pinMode(WAREHOUSE_MOTOR_2 , OUTPUT);
  pinMode(WAREHOUSE_OPEN , OUTPUT);
  pinMode(WAREHOUSE_GET_RING , OUTPUT);

  pinMode(SHOOTING_ANGLE_LOW , OUTPUT);
  pinMode(SHOOTING_FIRE , OUTPUT);
}