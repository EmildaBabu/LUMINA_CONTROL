# **Lumina_control**
This innovative project features an ESP8266-based Smart Lighting System, combining Potentiometer and LED lighting for automated and intelligent illumination.

## AIM
Design a smart lighting system using an ESP8266, with a potentiometer for manual on/off control and serial commands for automatic mode operation, allowing users to switch between these two distinct control methods.

## COMPONENTS
*  ESP8266 NodeMCU
*  Potentiometer

## CONNECTION
**Potentiometer ➞ NodeMCU**
* 1st pin  ➞ vcc
* 2nd pin ➞ A0(Analog pin)
* 3rd pin ➞ GND

<img src="https://github.com/EmildaBabu/LUMINA_CONTROL/blob/464ccdc1cb5b44c842b98ea35b701694c93a4906/connection.jpg?raw=true" alt="connection" width="300" height="200">

## PROCEDURE

Step 1: Connect the ESP8266 microcontroller to the Arduino IDE through the appropriate communication port.  

Step 2: Interface the ESP8266 with a potentiometer and display the analog resistance values on the Serial Monitor.  

Step 3: Update the program code to achieve the desired output readings on the Serial Monitor.  


## WORKING
//In Serial monitor

**SMART HOME** 
  
  a) Auto Mode  
  
  b) Manual Mode  
  
  c) exit  

Choose Your option....  


if 'a' is Typed  

**Auto Mode Activated**  
  
  DAY TIME - LED OFF // during the presence of light adjust the potentiometer, LED turned OFF  
  
  NIGHT TIME - LED ON // when no light! adjust the potentiometer, LED turned ON  


if 'c' is Typed  

SMART HOME  

a) Auto Mode  

b) Manual Mode  

c) exit  

Choose Your option......  

if 'b' is Typed  

**Manual Mode Activated**  

  Type -> a for LED ON  
  
  Type -> b for LED OFF  
  
  Type -> c gor exit  

SMART HOME  

a) Auto Mode  

b) Manual Mode  

c) exit  

Choose Your option......

## OUTPUT
<img src= "https://github.com/EmildaBabu/LUMINA_CONTROL/blob/8bd211e2899bc4415421f02195e20a4aaba78221/output.jpg?raw=true" alt="output" width="300" height="400">
