*# stm32
Experiments with the STM32 Board

## Overview

* https://www.youtube.com/watch?v=EaZuKRSvwdo
* https://www.mikrocontroller.net/articles/STM32_f%C3%BCr_Einsteiger
* https://predictabledesigns.com/introduction-to-programming-stm32-arm-cortex-m-32-bit-microcontrollers/

## Programmer

* http://www.emcu.eu/stm32-cube-programmer/
* ST-Link v2 https://www.youtube.com/watch?v=KgR3uM21y7o

## Setup Arduino-IDE

https://www.arduino.cc/en/Guide/Linux

## IDEs

* https://www.st.com/en/development-tools/stm32-ides.html

## CLion

* https://blog.jetbrains.com/clion/2016/06/clion-for-embedded-development/
* https://blog.jetbrains.com/clion/2017/12/clion-for-embedded-development-part-ii/
* https://github.com/nagelkl/clion_embedded
* https://github.com/michaelniedermayr/clion_stm32_openocd

## Board Infos

http://wiki.stm32duino.com/index.php?title=Main_Page
http://wiki.stm32duino.com/index.php?title=Main_Page

## Connect Board for serial upload

USB2Serial-Converter (FT232RL) --> STM32 (3v3-Mode!)
* GND --> GND 
* 3V3 --> 3V3 (neighbor of GND) to power the board via converter
* TX --> A10
* RX --> A9

* Power STM32 via microUSB
* Connect USB2Serial-Converter to PC

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

## Troubleshooting (Linux)

### Upload not possible

* uninstall modemmanager
* try to use USB2 port on your PC, avoid USB-Hub or USB3-port

