# Air Quality Monitoring Dashboard (Arduino IoT Device)

This repository contains the Arduino-based IoT device for a real-time air quality monitoring dashboard. It collects data from multiple environmental sensors and sends the data for visualization and analysis in a web-based dashboard (to be developed in the future).

## Features

- **Multi-Sensor Integration:** 
  - **MQ-7:** Carbon monoxide detection.
  - **MQ-8:** Hydrogen gas detection.
  - **AM2302 (DHT22):** Temperature and humidity monitoring.
  - **Raindrops Detection Sensor:** Detects rainfall intensity.
- **IoT Ready:** Sends sensor data to a remote server for further analysis and visualization.
- **PlatformIO:** Developed using PlatformIO in Visual Studio Code for efficient development and cross-platform compatibility.

---

## Project Structure

```
.
├── src
│   ├── main.cpp          # Main Arduino sketch
├── include               # Project header files.
├── lib                   # Custom libraries
├── platformio.ini        # PlatformIO project configuration file
├── README.md             # Project documentation
```

---

## Getting Started

### Prerequisites

- **Hardware:**
  - Arduino-compatible microcontroller (e.g., Arduino Uno, Mega, ESP32, etc.)
  - Sensors:
    - MQ-7 Carbon Monoxide Sensor
    - MQ-8 Hydrogen Sensor
    - AM2302 DHT22 Temperature & Humidity Sensor
    - Raindrops Detection Sensor
  - Breadboard, jumper wires, and power supply

- **Software:**
  - [PlatformIO](https://platformio.org/) (installed in Visual Studio Code)
  - Arduino drivers for your microcontroller

### Installation

1. Clone this repository:
   ```bash
   git clone https://github.com/nmasnanjana/AirQualityDashboard-Arduino
   cd air-quality-arduino
   ```

2. Open the project in Visual Studio Code with PlatformIO installed.

3. Connect your Arduino-compatible device to your computer.

4. Modify `src/config.h` to set your sensor pins and any specific parameters.

5. Upload the code to your microcontroller:
   ```bash
   pio run --target upload
   ```

6. Open the serial monitor in PlatformIO to verify the sensor readings.

---

## Future Enhancements

- Develop a web-based dashboard for real-time visualization of sensor data.
- Add additional sensors for more environmental parameters (e.g., PM2.5, PM10).
- Implement MQTT or HTTP for data transmission to the cloud.
- Integrate alert notifications for critical air quality levels.

---

## License

This project is licensed under the GNU GENERAL PUBLIC LICENSE. See the [LICENSE](LICENSE) file for details.

---

## Acknowledgments

- PlatformIO for simplifying the development process.
- Open-source libraries and contributors who make projects like this possible.

---

## Contact

For questions or suggestions, please reach out to:
- **Name:** Anjana Narasinghe
- **Email:** nmasnanjana.123@gmail.com

---

Thank you for exploring this project! Stay tuned for the web dashboard implementation. 🚀
