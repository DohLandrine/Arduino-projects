# Remote Controled Leds

### Objectives
- Build a system that will turn on Leds, when a button is pressed on the IR remote.

## Components needed
1. <b>Arduino UNO</b>.
2. <b>IR Receiver</b>: An IR (infrared) receiver is a device that detects and decodes infrared light signals.
3. <b>IR Remote</b>: a wireless handheld device that uses infrared light signals to control electronic equipment.
4. <b>LEDs</b>.
5. <b>Resistors (220 ohms)</b>.
6. <b>Breadboard and Jumper wires</b>.

## Wiring
1. IR receiver to Arduino
    - Connect the GND to GND.
    - Connect the VCC to 5v.
    - Connect the Data pin to Digital pin 2.
2. LEDs to Arduino.
    - Connect all the negative terminals to a 220 ohm resistor, which is connecter to GND.
    - Connect each LED anode (+ve terminal) to a digital pin (3,4,5,..).

## Before coding
    - Intall the IRremote library by shirriff.

































