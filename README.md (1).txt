# Arduino Footsteps Power Generation Using Piezoelectric Sensors

## Project Overview
This project demonstrates the generation of electrical energy from human footsteps using piezoelectric sensors. When a person steps on a piezoelectric sensor, mechanical pressure is converted into an electrical signal.

An Arduino is used to monitor the generated signal, detect footsteps, count the steps, and display sensor/voltage information through the Serial Monitor.

## Objectives
- Convert mechanical energy from footsteps into electrical energy.
- Detect footsteps using piezoelectric sensors.
- Count detected footsteps using Arduino.
- Monitor the sensor output through the Serial Monitor.
- Explore a low-cost energy harvesting concept.

## Main Components
- Arduino Uno
- 6 piezoelectric sensors
- Bridge rectifier / rectifier circuit
- Connecting wires
- Resistors/capacitors as required for signal conditioning
- Breadboard or prototype board

## Working Principle
1. A person steps on the piezoelectric sensors.
2. Mechanical pressure produces an electrical signal.
3. The rectifier circuit converts the generated signal into a suitable DC output.
4. The conditioned signal is monitored by the Arduino through analog pin A0.
5. Arduino compares the sensor value with a threshold.
6. When a step is detected, the step counter is increased.
7. Sensor value and approximate input voltage are displayed in the Serial Monitor.

## Arduino Code
The main program is available in:
`footsteps_power_generation.ino`

## Important Safety Note
Do not connect an unconditioned piezoelectric output directly to an Arduino analog input. Piezo sensors can produce voltage spikes. Use suitable rectification, current/voltage limiting, and signal-conditioning circuitry so the Arduino input remains within its safe voltage range.

## Applications
- Footstep energy harvesting
- Low-power sensor systems
- Smart flooring
- Educational energy-harvesting prototypes
- Energy monitoring demonstrations

## Future Improvements
- Store harvested energy in a rechargeable battery or supercapacitor.
- Add an LCD/OLED display.
- Improve power conditioning and energy storage.
- Add IoT monitoring.
- Use multiple sensor zones for better step detection.
- Measure actual harvested energy using suitable voltage/current sensing.

## Project Type
Embedded Systems / Arduino / Energy Harvesting / IoT-oriented prototype
