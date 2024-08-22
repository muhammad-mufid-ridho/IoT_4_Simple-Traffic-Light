# RGB LED Traffic Light Simulation with Yellow Color Display

## Project Description

This project demonstrates the control of an RGB LED using an Arduino to simulate a simple traffic light system. The LED lights up in red, green, and yellow by combining red and green. The code uses basic digital and analog writes to manage the LED colors, showcasing the ability to produce a yellow light by mixing red and green.

## Components Used
- **Arduino Board**: Uno or any compatible board
- **RGB LED**
- **Resistors**: Appropriate resistors for each color channel
- **Breadboard and jumper wires**

## Wiring
![Wiring](./IoT_5_Traffic%20Light.png)


## Wiring Diagram
- **Red LED (R)**: Connected to digital pin 8 through a resistor.
- **Green LED (G)**: Connected to digital pin 9 through a resistor.
- **Blue LED (B)**: Connected to digital pin 10 through a resistor.

## Code Explanation

The Arduino sketch sets up the pins connected to the RGB LED as output pins. It then cycles through lighting up the red, green, and yellow colors (yellow being a mix of red and green). The color changes are managed through `digitalWrite` and `analogWrite` functions.


## How It Works
1. **Red Light**: The red channel of the LED lights up for 3 seconds.
2. **Yellow Light**: Both red and green channels are fully lit, producing yellow for 1 second.
3. **Green Light**: The green channel lights up for 2 seconds.

This cycle repeats continuously, demonstrating a basic traffic light operation.

## Usage
To use this code:
1. Connect the RGB LED to the Arduino as specified.
2. Upload the code to your Arduino board using the Arduino IDE.
3. Observe the LED change colors in a sequence mimicking a traffic light.

## Future Enhancements
- Add a button to manually cycle through the lights.
- Implement PWM control to adjust the brightness of the LEDs.
- Expand the project with multiple LEDs to simulate an intersection.

## License
This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.

---

Feel free to customize this further based on your preferences before uploading to GitHub!