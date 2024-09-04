#include "config.h"

void stop() {
  digitalWrite(MOTOR_A_1, LOW);
  digitalWrite(MOTOR_A_2, LOW);

  digitalWrite(MOTOR_B_1, LOW);
  digitalWrite(MOTOR_B_2, LOW);

  digitalWrite(MOTOR_C_1, LOW);
  digitalWrite(MOTOR_C_2, LOW);

  digitalWrite(MOTOR_D_1, LOW);
  digitalWrite(MOTOR_D_2, LOW);
}
void move_right() {
  /*A -> 1 , B -> 0 , C -> 0  , D -> 1*/
  digitalWrite(MOTOR_A_1, MOTOR_HIGH);
  digitalWrite(MOTOR_A_2, MOTOR_LOW);

  digitalWrite(MOTOR_B_1, MOTOR_LOW);
  digitalWrite(MOTOR_B_2, MOTOR_HIGH);

  digitalWrite(MOTOR_C_1, MOTOR_LOW);
  digitalWrite(MOTOR_C_2, MOTOR_HIGH);

  digitalWrite(MOTOR_D_1, MOTOR_HIGH);
  digitalWrite(MOTOR_D_2, MOTOR_LOW);
}

void move_left(){
  /*A -> 0 , B -> 1 , C -> 1  , D -> 0*/
  digitalWrite(MOTOR_A_1, MOTOR_LOW);
  digitalWrite(MOTOR_A_2, MOTOR_HIGH);

  digitalWrite(MOTOR_B_1, MOTOR_HIGH);
  digitalWrite(MOTOR_B_2, MOTOR_LOW);

  digitalWrite(MOTOR_C_1, MOTOR_HIGH);
  digitalWrite(MOTOR_C_2, MOTOR_LOW);

  digitalWrite(MOTOR_D_1, MOTOR_LOW);
  digitalWrite(MOTOR_D_2, MOTOR_HIGH);
}
void move_forward()
{
  /*A -> 1 , B -> 1 , C -> 1  , D -> 1*/
  digitalWrite(MOTOR_A_1, MOTOR_HIGH);
  digitalWrite(MOTOR_A_2, MOTOR_LOW);

  digitalWrite(MOTOR_B_1, MOTOR_HIGH);
  digitalWrite(MOTOR_B_2, MOTOR_LOW);

  digitalWrite(MOTOR_C_1, MOTOR_HIGH);
  digitalWrite(MOTOR_C_2, MOTOR_LOW);

  digitalWrite(MOTOR_D_1, MOTOR_HIGH);
  digitalWrite(MOTOR_D_2, MOTOR_LOW);
}

void move_back()
{
  /*A -> 0 , B -> 0 , C -> 0  , D -> 0*/
  digitalWrite(MOTOR_A_1, MOTOR_LOW);
  digitalWrite(MOTOR_A_2, MOTOR_HIGH);

  digitalWrite(MOTOR_B_1, MOTOR_LOW);
  digitalWrite(MOTOR_B_2, MOTOR_HIGH);

  digitalWrite(MOTOR_C_1, MOTOR_LOW);
  digitalWrite(MOTOR_C_2, MOTOR_HIGH);

  digitalWrite(MOTOR_D_1, MOTOR_LOW);
  digitalWrite(MOTOR_D_2, MOTOR_HIGH);
}

void move_rotate_right()
{
    /*A -> 1 , B -> 0 , C -> 1  , D -> 0*/
  digitalWrite(MOTOR_A_1, MOTOR_HIGH);
  digitalWrite(MOTOR_A_2, MOTOR_LOW);

  digitalWrite(MOTOR_B_1, MOTOR_LOW);
  digitalWrite(MOTOR_B_2, MOTOR_HIGH);

  digitalWrite(MOTOR_C_1, MOTOR_HIGH);
  digitalWrite(MOTOR_C_2, MOTOR_LOW);

  digitalWrite(MOTOR_D_1, MOTOR_LOW);
  digitalWrite(MOTOR_D_2, MOTOR_HIGH);
}
void move_rotate_left()
{
  /*A -> 0 , B -> 1 , C -> 0  , D -> 1*/
  digitalWrite(MOTOR_A_1, MOTOR_LOW);
  digitalWrite(MOTOR_A_2, MOTOR_HIGH);

  digitalWrite(MOTOR_B_1, MOTOR_HIGH);
  digitalWrite(MOTOR_B_2, MOTOR_LOW);

  digitalWrite(MOTOR_C_1, MOTOR_LOW);
  digitalWrite(MOTOR_C_2, MOTOR_HIGH);

  digitalWrite(MOTOR_D_1, MOTOR_HIGH);
  digitalWrite(MOTOR_D_2, MOTOR_LOW);
}

void warehouse_up()
{
  digitalWrite(WAREHOUSE_MOTOR_1 , MOTOR_HIGH);
  digitalWrite(WAREHOUSE_MOTOR_2 , MOTOR_LOW);
}
void warehouse_down()
{
  digitalWrite(WAREHOUSE_MOTOR_1 , MOTOR_LOW);
  digitalWrite(WAREHOUSE_MOTOR_2 , MOTOR_HIGH);
}

void warehouse_open()
{
  digitalWrite(WAREHOUSE_OPEN , HIGH);
}
void warehouse_close()
{
  digitalWrite(WAREHOUSE_OPEN , LOW);
}
void warehouse_get_ring()
{
  digitalWrite(WAREHOUSE_GET_RING , HIGH);
  delay(500);
  digitalWrite(WAREHOUSE_GET_RING , LOW);
}

void shooting_angle_low()
{
  digitalWrite(SHOOTING_ANGLE_LOW , LOW);
}
void shooting_angle_high()
{
  digitalWrite(SHOOTING_ANGLE_LOW , HIGH);
}
void shooting_fire()
{
  digitalWrite(SHOOTING_FIRE , HIGH);
  delay(1000);
  digitalWrite(SHOOTING_FIRE , LOW);
}