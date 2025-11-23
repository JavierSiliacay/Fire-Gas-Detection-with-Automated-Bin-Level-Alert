# 🔥 Smart Fire, Gas, and Bin Monitoring System

A smart multi-sensor system that detects fire, gas levels, and bin capacity in real time. It activates automatic safety responses during hazardous conditions and alerts when the bin is full. All readings are continuously monitored through the serial interface.

---

## 🚀 Features
- Real-time fire detection  
- Gas level monitoring and hazard alerting  
- Bin level detection using distance measurement  
- Automatic activation of a water pump through a relay  
- Visual warning indicator for bin-full status  
- Continuous serial monitoring for diagnostics  

---

## 🛠️ Hardware Requirements
- Microcontroller (with analog and digital I/O)  
- Flame sensor  
- Gas sensor  
- Ultrasonic distance sensor  
- Relay module (for controlling the water pump)  
- Water pump  
- LED indicator  
- Jumper wires and power supply  

*(Component names only — no brands or module specifics.)*

---

## 🔌 Wiring Overview
- Flame and gas sensors connect to analog input pins  
- Ultrasonic sensor connects to digital trigger/echo pins  
- Relay module connects to a digital output pin  
- Water pump is powered through the relay for safe on/off control  
- LED indicator connects to a digital output  
- All devices share a common ground with the microcontroller  

The relay isolates and safely switches the water pump based on detected fire or gas hazards.

---

## 📥 Installation
1. Clone or download this repository.  
2. Open the project folder in your development environment.  
3. Upload the program file to your microcontroller.  
4. Open the Serial Monitor to observe real-time readings.  
5. Test sensors and relay operation, adjusting thresholds if needed.  

---

## 📜 License
This project is open-source and available for modification and enhancement.
