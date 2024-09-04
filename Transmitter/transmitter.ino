#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include "config.h"

struct Signal {
  byte command;
};
Signal data;
const uint64_t pipeIn = 0xE9E8F0F0E1LL;
RF24 radio(9, 10);
void nrf_init() {
  radio.begin();
  radio.openWritingPipe(pipeIn);
  radio.stopListening();
}
void INIT() {
  config();
}
void setup() {
  INIT();
  nrf_init();
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(FORWARD) == 1) {
    data.command = 'F';
    radio.write(&data, sizeof(Signal));
  } else if (digitalRead(BACK) == 1) {
    data.command = 'B';
    radio.write(&data, sizeof(Signal));
  } else if (digitalRead(LEFT) == 1) {
    data.command = 'L';
    radio.write(&data, sizeof(Signal));
  } else if (digitalRead(RIGHT) == 1) {
    data.command = 'R';
    radio.write(&data, sizeof(Signal));
  } else if (digitalRead(ROTATE_RIGHT) == 1) {
    data.command = 'X';
    radio.write(&data, sizeof(Signal));
  } else if (digitalRead(ROTATE_LEFT) == 1) {
    data.command = 'Y';
    radio.write(&data, sizeof(Signal));
  } else if (digitalRead(WAREHOUSE_UP) == 1) {
    data.command = 'U';
    radio.write(&data, sizeof(Signal));
  } else if (digitalRead(WAREHOUSE_DOWN) == 1) {
    data.command = 'D';
    radio.write(&data, sizeof(Signal));
  } else if (digitalRead(WAREHOUSE_CLOSE) == 1) {
    data.command = 'C';
    radio.write(&data, sizeof(Signal));
  } else if (digitalRead(WAREHOUSE_OPEN) == 1) {
    data.command = 'O';
    radio.write(&data, sizeof(Signal));
  } else if (digitalRead(WAREHOUSE_GET_RING) == 1) {
    data.command = 'G';
    radio.write(&data, sizeof(Signal));
  } else if (digitalRead(SHOOTING_FIRE) == 1) {
    data.command = 'f';
    radio.write(&data, sizeof(Signal));
  } else if (digitalRead(SHOOTING_HIGH_ANGLE) == 1) {
    data.command = 'h';
    radio.write(&data, sizeof(Signal));
  } else if (digitalRead(SHOOTING_LOW_ANGLE) == 1) {
    data.command = 'l';
    radio.write(&data, sizeof(Signal));
  } else {
    data.command = 'S';
    radio.write(&data, sizeof(Signal));
  }
}