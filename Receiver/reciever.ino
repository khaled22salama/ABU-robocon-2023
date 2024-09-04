#include "config.h"

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

const uint64_t pipeIn = 0xE9E8F0F0E1LL;  //IMPORTANT: The same as in the receiver 0xE9E8F0F0E1LL | Bu adres alıcı ile aynı olmalı
RF24 radio(49, 48);                        // select CE,CSN pin | CE ve CSN pinlerin seçimi
struct Signal {
  byte command;
};
Signal data;
void nrf_init() {
  radio.begin();
  radio.openReadingPipe(1, pipeIn);
  radio.startListening();  //start the radio comunication for Transmitter | Verici olarak sinyal iletişimi başlatılıyor
}
void INIT() {
  stop();
  warehouse_down();
  shooting_angle_low();
  warehouse_open();
}
void setup() {
  robot_config();
  INIT();
  Serial.begin(9600);
  nrf_init();
}

void loop() {
  while (radio.available()) {
   Serial.print("Recieving...");
    radio.read(&data, sizeof(Signal));
    switch (data.command) {
      case 'F':
        Serial.println("Recieving Move Forward");
        move_forward();
        break;
      case 'B':
        Serial.println("Recieving Move Back");
        move_back();
        break;
      case 'L':
        Serial.println("Recieving Move Left");
        move_left();
        break;
      case 'R':
        Serial.println("Recieving Move Right");
        move_right();
        break;
        /*rotate right*/
      case 'X':
        Serial.println("Recieving Move Rotate right");
        move_rotate_right();
        break;
        /*rotate left*/
      case 'Y':
        Serial.println("Recieving Move Rotate left");
        move_rotate_left();
        break;
      case 'S':
        Serial.println("Recieving Stop");
        stop();
        break;
      case 'U':
        Serial.println("Recieving Warehouse UP");
        // warehouse_up();
        break;
      case 'D':
        Serial.println("Recieving Warehouse Down");
        // warehouse_down();
        break;
      case 'O':
        Serial.println("Recieving Warehouse Open");
        warehouse_open();
        break;
      case 'C':
        Serial.println("Recieving Warehouse Close");
        warehouse_close();
        break;
      case 'G':
        Serial.println("Recieving Warehouse Get Ring");
        warehouse_get_ring();
        break;
      case 'l':
        Serial.println("Recieving Shooting Low angle");
        shooting_angle_low();
        break;
      case 'h':
        Serial.println("Recieving Shooting HIgh angle");
        shooting_angle_high();
        break;
      case 'f':
        Serial.println("Recieving Shooting Fire");
        shooting_fire();
        break;
      default:
        Serial.println("Recieving Stop");
        //stop();
    }
    //stop();
  }
}
