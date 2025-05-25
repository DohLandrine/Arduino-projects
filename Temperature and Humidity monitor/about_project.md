# Temperature and Humidity monitor

### Objective:
- Display real-time temperature and humidity readings from the DHT11 sensor on the 1602 LCD screen.


### Components Needed:
1. <b>Arduino UNO (ATMEGA328P)</b>

2. DHT11(_Digital Humidity and Temperature_) Module 
    - A basic, ultra low cost digital and humidity sensor.
    - It uses a capacitive humidity sensor and a thermistor to measure the surrounding air and spits out a digital signal on the data pin.

3. 1602 LCD(Liquid Crystal Display) Module

4. Breadboard + Jumper Wires


### Wiring
- <b>DHT11 to Arduino</b>
    - Connect the VCC(might be labeled '+') of DHT11 to 5v of Arduino.
    - Connect GND (might be labeled '-') to GND.
    - Connect Data(might be labeled 'out') of DHT11 to D2 of Arduino.

- <b>LCD module to Arduino</b>
    - Connect GND to GND.
    - Connect VCC to 5V of Arduino (Use the breadboard).
    - Connect SDA of LCD module to A4 of Arduino.
    - Connect SCL of LCD module to A5 of Arduino.

### Before coding.
    - Go to Sketch > Include Library > Manage Libraries.
    - Search and install:
    - DHT sensor library by Adafruit.
    - Adafruit Unified Sensor.
    - LiquidCrystal_I2C.
