# 👆 Touch Sensor 5-Level LED Controller

## 📌 Abstract

The Touch Sensor 5-Level LED Controller is an Arduino-based project that controls five LEDs using a single touch sensor.

Each touch is counted by the Arduino. With the first touch, the first LED turns ON. With the second touch, the second LED also turns ON, and this continues up to five touches. After the fifth touch, all five LEDs remain ON. The sixth touch resets the system and turns all LEDs OFF.

This project demonstrates digital input detection, touch sensing, event counting, and multiple LED control using an Arduino Uno.

---

## 🎯 Objectives

- Detect touch input using a touch sensor.
- Count individual touch events.
- Control five LEDs using a single touch sensor.
- Demonstrate sequential LED activation.
- Reset all LEDs after the fifth level.
- Develop a simple touch-based control system.

---

## 🧰 Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| TTP223 Touch Sensor | 1 |
| LED | 5 |
| 220 Ω Resistor | 5 |
| Breadboard | 1 |
| Jumper Wires | As required |

---

## 🔌 Circuit Connections

### 👆 TTP223 Touch Sensor → Arduino Uno

| Touch Sensor Pin | Arduino Uno |
|---|---|
| VCC | 5V |
| GND | GND |
| OUT | D2 |

### 💡 LEDs → Arduino Uno

Each LED must have a 220 Ω resistor in series.

| LED | Arduino Pin |
|---|---|
| LED 1 | D4 |
| LED 2 | D5 |
| LED 3 | D6 |
| LED 4 | D7 |
| LED 5 | D8 |

The cathode (-) of each LED is connected to **GND**.

### Circuit Overview

```text
              TTP223 TOUCH SENSOR
             ┌───────────────────┐
       5V ───┤ VCC               │
      GND ───┤ GND               │
       D2 ───┤ OUT               │
             └───────────────────┘

                  ARDUINO UNO

D4 ─── 220Ω ───► LED 1 ───► GND
D5 ─── 220Ω ───► LED 2 ───► GND
D6 ─── 220Ω ───► LED 3 ───► GND
D7 ─── 220Ω ───► LED 4 ───► GND
D8 ─── 220Ω ───► LED 5 ───► GND
