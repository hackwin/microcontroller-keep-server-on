# About
* Use any microcontroller to keep an ATX PC turned on
* Similar to the BIOS feature to turn on when power is restored
* However, this will also turn the PC back on if it gets manually turned off by mistake (non-power outtage)

# Wiring
* Connect a light dependent resistor (LDR) as an analog input with a pull-down (10k) resistor
* Point the PC LED at the LDR.  If the LED is 5v and you want to use a regular LED, use a voltage divider to make 3v (1K|2K ohm will work).
* Connect the digital output signal to the relay module in normally opened (NO) position

# How it works
* The light dependent resistor (LDR) detects light from the PC's power LED
* If the light is off, a microcontroller detects it, and triggers a relay to connect the power switch pins on the motherboard
* The relay releases after 2 seconds and the computer should boot up
* The microcontroller is powered either a USB port that is powerecd when the PC is off, or a separate power supply