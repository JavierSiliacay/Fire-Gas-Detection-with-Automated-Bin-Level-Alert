# 🔥 Smart Fire, Gas, and Bin Monitoring System

A smart multi-sensor system that detects fire, gas levels, and bin capacity in real time. It activates automatic safety responses during hazardous conditions and alerts when the bin is full. All readings are continuously monitored through the serial interface.

---

## 🚀 Features
- Real-time fire detection
- Gas level monitoring and hazard alerting
- Bin level detection using distance measurement
- Automatic activation of safety mechanisms
- Visual warning indicator for bin-full status
- Continuous serial monitoring for diagnostics

---

## 🛠️ Hardware Requirements
- Microcontroller (compatible with analog and digital I/O)
- Flame sensor  
- Gas sensor  
- Ultrasonic distance sensor  
- Water pump or safety actuator  
- LED indicator  
- Required jumper wires and power source  

*(Component names only — no brands or module specifics.)*

---

## 🔌 Wiring Overview
- Flame and gas sensors connected to analog input pins  
- Distance sensor connected to trigger/echo digital pins  
- Safety mechanism (e.g., pump/actuator) connected to a digital output  
- LED indicator connected to a digital output  
- All components share a common ground with the microcontroller  

This setup allows simultaneous monitoring and response to multiple environmental conditions.

---

## 📥 Installation
1. Clone or download this repository.  
2. Open the project folder in your preferred IDE.  
3. Upload the main program file to your microcontroller.  
4. Open the Serial Monitor to view real-time sensor readings.  
5. Test each sensor to ensure proper operation and adjust thresholds if needed.

---

## 📜 License
This project is open-source and available for modification and enhancement.
