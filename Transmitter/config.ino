#include "config.h"

void config() {

  pinMode(FORWARD, INPUT);
  pinMode(LEFT, INPUT);
  pinMode(RIGHT, INPUT);
  pinMode(ROTATE_RIGHT, INPUT);
  pinMode(ROTATE_LEFT, INPUT);
  pinMode(BACK, INPUT);

  pinMode(WAREHOUSE_UP, INPUT);
  pinMode(WAREHOUSE_DOWN, INPUT);
  pinMode(WAREHOUSE_OPEN, INPUT);
  pinMode(WAREHOUSE_CLOSE, INPUT);
  pinMode(WAREHOUSE_GET_RING, INPUT);

  pinMode(SHOOTING_LOW_ANGLE, INPUT);
  pinMode(SHOOTING_HIGH_ANGLE, INPUT);
  pinMode(SHOOTING_FIRE , INPUT);

}