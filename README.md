# stm32
Experiments with the STM32 Board

## Overview

https://www.youtube.com/watch?v=EaZuKRSvwdo

## Setup Arduino-IDE

https://www.arduino.cc/en/Guide/Linux

## Board Infos

http://wiki.stm32duino.com/index.php?title=Main_Page

## Connect Board

USB2Serial-Converter --> STM32 (3v3-Mode!)
* GND --> GND
* TX --> A10
* RX --> A9

Power STM32 via microUSB

## Arduino BoardManager

* new URL http://http://dan.drown.org/stm32duino/package_STM32duino_index.json
* install STM32F1xx Board

## Sketch

~~~~~
void setup() {
  pinMode(PA6, OUTPUT);

}

void loop() {
  digitalWrite(PA6, HIGH);
  delay(1000);
  digitalWrite(PA6, LOW);
  delay(1000);
}
~~~~~

Add LED with resistor to Pin6 (A6) and GND.

## Troubleshooting

### Upload not possible

* uninstall modemmanager
* try to use USB2 port on your PC, avoid USB-Hub or USB3-port

