# Motion Detector for Paralyzed People

This project aims to assist individuals with paralysis by detecting minimal movements and providing corresponding alerts, thereby facilitating interaction with their environment through intuitive and user-friendly technology.

## Features

- **Movement Detection**: Utilizes sensors to detect slight movements in patients with paralysis.
- **Alert System**: Triggers alerts upon detecting movement, enabling communication or signaling for assistance.
- **User-Friendly Interface**: Designed to be intuitive, ensuring ease of use for both patients and caregivers.

## Project Structure

- **EMERGENCY MOMENT SENSOR FOR PARALYZED PEOPLE (2).pdf**: Detailed documentation of the project, including objectives, design, and implementation.
- **REPORT.docx**: Comprehensive report covering the project's development stages, challenges faced, and solutions implemented.
- **Recieverwithbuzzer_code.ino**: Arduino code for the receiver module equipped with a buzzer to alert caregivers.
- **transmitterwithbuzzer.ino**: Arduino code for the transmitter module that detects patient movements.

## Installation and Setup

1. **Clone the Repository**:

   ```bash
   git clone https://github.com/urugondavishnu/Motion-detector-for-paralyzed-people.git
2. Navigate to the Project Directory:
   ```bash
   cd Motion-detector-for-paralyzed-people
3. Hardware Setup:
   Connect the sensors to the Arduino transmitter module as per the schematics provided in the project report.
   Set up the receiver module with the buzzer to receive alerts.
4. Upload Code:
   Use the Arduino IDE to upload transmitterwithbuzzer.ino to the transmitter Arduino board.
   Upload Recieverwithbuzzer_code.ino to the receiver Arduino board.

## Usage
Once the hardware is set up and the code is uploaded, any minimal movement detected by the sensor will trigger the transmitter.
The receiver module will then activate the buzzer, alerting caregivers or family members.

## Contributing
Contributions are welcome! Please fork the repository and create a pull request with your changes.

## Contact
For questions or feedback, please contact [urugondavishnu](https://github.com/urugondavishnu).
