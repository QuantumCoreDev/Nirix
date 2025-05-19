# "Nirix" - Smart Irrigation System  

"Nirix" is an automatic, solar-powered smart irrigation system designed to help farmers efficiently manage water supply based on real-time soil moisture data. Built using an Arduino UNO, LCD with I2C interface, a soil moisture sensor, and a relay-controlled motor.

---

### 👨‍💻 Made with passion by:  
**Pushkar Dadasaheb Kharad**  
Age: 14 Years  

---

### 🌾 Why Nirix?  
"Nirix" is built for the hardworking farmers of India to help them avoid over-irrigation or under-irrigation due to night-time electricity schedules. It allows peace of mind and better yields by automating irrigation with smart control.

> "Water smartly, grow wisely." – Nirix

---

## 🔥 Features

- Automatically turns **ON** the water pump when soil is dry
- Turns **OFF** when soil is sufficiently wet
- Shows live **Moisture %** on LCD in Marathi
- Uses **solar energy** for sustainability
- 24/7 cooling with **12V DC fan**

---

## 🧰 Components Used

- Arduino UNO  
- I2C 16x2 LCD Display  
- Soil Moisture Sensor  
- 1-Channel Relay Module  
- Breadboard + Jumper Wires  
- 12V Lead-Acid Battery (Solar Charged)  
- 12V DC Cooling Fan (runs 24/7)  
- AC Water Pump (2-wire)

---

## 🔌 Circuit Connections

### ✅ Power Supply (From Arduino UNO)

| Arduino Pin | Connects To                    |
|-------------|--------------------------------|
| 5V          | Breadboard Positive Rail (Red) |
| GND         | Breadboard Negative Rail (Blue)|

### ✅ Soil Moisture Sensor

| Sensor Pin | Connects To                      |
|------------|----------------------------------|
| VCC        | Breadboard Positive Rail         |
| GND        | Breadboard Negative Rail         |
| A0         | A0 on Arduino UNO                |

### ✅ I2C LCD 16x2 Display

| I2C Pin | Connects To        |
|---------|--------------------|
| VCC     | Breadboard + Rail  |
| GND     | Breadboard - Rail  |
| SDA     | A4 on Arduino UNO  |
| SCL     | A5 on Arduino UNO  |

### ✅ Relay Module (To Control AC Motor)

| Relay Pin | Connects To                  |
|-----------|------------------------------|
| VCC       | Breadboard Positive Rail     |
| GND       | Breadboard Negative Rail     |
| IN        | Digital Pin 8 on Arduino     |

### ✅ AC Motor (2-wire)

- Cut one wire of the AC motor  
- Connect:
  - One end to **COM** of relay
  - Other end to **NO (Normally Open)** of relay  
- The **Neutral** wire goes directly from plug to motor
