# Phone-Controlled Robot Arm

My phone-controlled robot arm is a robot arm on top of wheels. The robot arm and the motor wheels are controlled by a single Android app, and the robot arm and the motor wheels are controlled via Bluetooth. 


| **Engineer** | **School** | **Area of Interest** | **Grade** |
|:--:|:--:|:--:|:--:|
| Liz L | Monta Vista High School | Electrical Engineering | Incoming Sophomore

<!--- **Replace the BlueStamp logo below with an image of yourself and your completed project. Follow the guide [here](https://tomcam.github.io/least-github-pages/adding-images-github-pages-site.html) if you need help.**

![Headstone Image](logo.svg) -->
  
# Final Milestone

<iframe width="560" height="315" src="https://www.youtube.com/embed/vlAkarspFro" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

I have attached wheels and DC motors to my robot chassis. I've done this so that way my robot arm can move along the ground. My final milestone is the second-most difficult milestone, after the third milestone. I connected the motors to a battery of four AA batteries to make sure the motors had the same RPM, or else my robot car would not go straight. I taped many layers of duct tape onto the shaft of the motors and took a video from similar angles of each motor before combining the videos using video editing software to compare the rotating speeds of the motors. After I found the right pair of motors, I used double-sided tape to attach two DC motors to my robot chassis, then attached the wheels to the DC motor. I wired the motors to the motor driver in order to test the motors and check that all the pins on the motor drivers worked (forward and backward for each motor). Obviously, my robot chassis can't balance on two wheels, so I found a swerve ball that I could place in the front of my robot chassis. However, there was a difference in the height of the swerving ball and the wheels of the motor. Therefore I designed a block on Onshape that extended an inch or two off from the robot chassis that had holes to place the motor driver and swerve wheel. Then I wired the motors to the motor driver and watched some Youtube videos on how to connect the motor driver to the Arduino Nano. My initial set-up was just the battery connecting to the motor driver, as well as four jumper wires from the four pins (that controlled the left and right motor forward and backward motion) to pins A2, A1, 10, 11. I then wrote the code for the robot arm. 

This did not work for three reasons. The first reason was my research was inaccurate. I had heard from someone that analog pins can be used as digital pins. This does not apply to Nanos, which was the Arduino I was using. I couldn't use pins A2 and A1, so I switched to pins 2 and 3 on the Cokoino shield. Also, I still had a separate battery plugged into the Nano. The circuits were separate and weren't communicating. I needed them to communicate. So I got rid of the battery for the Nano and wired a ground wire from the ground hole and a power wire from the 5V hole to the Nano. After running the code, my left motor was constantly running forward as soon as I ran it. After lots of checking, I realized I wrote my Bluetooth module as being connected to (2,1) for (RX, TX), but it was actually (0,1). So when I ran the code, the 2 pin was putting on high and causing the wheels to run. 

For your final milestone, explain the outcome of your project. Key details to include are:
- What you've accomplished since your previous milestone
- What your biggest challenges and triumphs were at BSE
- A summary of key topics you learned about
- What you hope to learn in the future after everything you've learned at BSE 



# Second Milestone

<iframe width="560" height="315" src="https://www.youtube.com/embed/KjaYvXZ5siI" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

 My second milestone was wiring up my controller to the robot arm. My controller consists  of a piece of acrylic and two joystick modules. The joystick modules are made of two potentiometers at a 90-degree angle. The two potentiometers are connected by a short spring.  The joysticks can move along the axes x, y, and z, although the z-axis will not be used as the robot only needs the axes x and y. The joystick outputs 2.5 volts while it is at its resting position. However, as the joystick is moved along the x and y axis, it outputs anywhere from 0 to 5 volts, depending on the direction the joystick is moved. There are five pins on each joystick module, GND, +5V, VRx, VRy, and SW. Every pin except for SW is connected to the Shield. GND stands for ground, and that wire is the ground wire. +5V means plus 5 volts, so that pin connects to the power supply to provide power. VRx outputs a voltage depending on a joystick's position along the x-axis. VRy outputs a voltage depending on a joystick's position along the y-axis. SW refers to a button on the joystick module that is not used for the robot arm. The instructions specify that two 18650 batteries should be used to power the robot arm, however, 18650 arms can be dangerous to work with, so I have been using 5 AA batteries and that has been working perfectly. I didn't face any major challenges while working on this milestone. I did make a few mistakes, but they were all due to my carelessness. 

# First Milestone

<iframe width="560" height="315" src="https://www.youtube.com/embed/maOioz1Hl5E" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

My intensive project is the Phone-Controlled Robot Arm. The robot arm will initially be controlled by a wired controller and eventually be controlled by an Android phone. Most of the robot is made of acrylic. The robot is composed of acrylic pieces, four servos, a variety of screws and nuts, and the Arduino Nano and the Arduino Shield. The Nano acts as the "brain" of the robot arm, as that's where the code will be located. The Shield is an attachment of the Arduino, increasing the capabilities and functions of the Nano. A servo is a rotary actuator (a device that produces rotary motion and is capable of converting that motion into linear motion). Servos are composed of a motor, position sensor, and control circuit. The position sensor would sense the output shafts' position before sending that information to the control circuit. A control circuit is a type of circuit that controls other devices. The control circuit would compare where the output shaft is and where the output shaft needs to be (where the user directed it) and adjust the power going to the motor accordingly. The position sensor is constantly sending information about the location of the output shaft to the control circuit, so this process is always continuing. Each servo has three wires - a red, brown, and yellow wire. The red wire is responsible for the power supply and brings power to the servo. The brown wire is the ground wire. The ground wire completes the circuit and is connected to the control circuit. The yellow wire is the signal wire and brings signals from the control circuit to the servo. The two largest challenges I faced while working on my first milestone were testing the servos and trying to make a straight arm. Before assembling the robot, I tested the parts to make sure everything was working. Testing the servos was a huge pain because nothing was working. In order to test the servos, I needed to install a driver for the Arduino IDE. However, the wifi network blocked the website that I needed to access in order to download the driver because it was owned by a Chinese company. After some time, I found the driver on an unblocked website and installed it, but Arduino IDE wasn't recognizing it. After uninstalling and reinstalling the driver, the problem was solved and I could upload the code to the Nano. However, Only one servo worked and would follow the instructions of the code. Then I noticed there was a strange smell, and suspected the person nearby had soldered something incorrectly. Then I noticed there was smoke coming from my batteries and quickly unplugged the batteries (they were too hot to take from the battery holder). After changing the batteries and re-soldering some wires, it worked.

In order for the robot arm to work properly, I have to install it perpendicular to the ground. It must go straight up. However, for some reason, the arms would just not go straight. I spent an hour or two screwing and unscrewing a single servo because for some reason, whenever I tightened the screw, it would always snap just left or just right of where I needed it to be. My next milestone will be attaching a controller to the robot arm so I can move it. 


# Starter Project - Exploding Star Color Organ
 <iframe width="560" height="315" src="https://www.youtube.com/embed/ri9x1cUY_Ss" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

 My starter project is the Exploding Star Color Organ. A set of 25 LED lights light up in a specific pattern when sound is present. The microphone attached picks up sound and sends the signal to three transistors, which amplify the signal until it's strong enough to pass through two integrated circuits, IC 1 and IC 2. IC 1 has two pins and IC 2 has sixteen pins. Pin 3 on IC 1 sends clock pulses to IC 2, and the signal is received by pin 14. Pin 14 distributes the signal to other pins, and those pins correspond with four transistors, which correspond with six LEDs. The board also has eleven resistors over the board, which slow down/regulate the electrical current. There are four electrolytic capacitors, which store electrical energy and release it when necessary. Electrolytic capacitors use electrolytes as their dielectric material, the material in between the positively charged and negatively charged plates. There are also two potentiometers, which are like manual resistors. One controls the LEDs' sensitivity to sound, and the other controls the brightness of the LEDs. The Exploding Star Color Organ is my second starter project. My first starter project was the TV-B-Gone. I wired up the circuit correctly and soldered the joints well, but the TV-B-Gone didn't work. The board was extremely hot and stopped working after a few minutes. Despite my efforts to re-solder any potential weak solder joints, the TV-B-Gone never worked again (probably due to overheating). By working on the TV-B-Gone, I became much more proficient in soldering and was able to finish the Exploding Star Color Organ much quicker. 

<!--- # Schematics 
Here's where you'll put images of your schematics. [Tinkercad](https://www.tinkercad.com/blog/official-guide-to-tinkercad-circuits) and [Fritzing](https://fritzing.org/learning/) are both great resoruces to create professional schematic diagrams, though BSE recommends Tinkercad becuase it can be done easily and for free in the browser. 

# Code
Here's where you'll put your code. The syntax below places it into a block of code. Follow the guide [here]([url](https://www.markdownguide.org/extended-syntax/)) to learn how to customize it to your project needs. 

```c++
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello World!");
}

void loop() {
  // put your main code here, to run repeatedly:

}
``` -->

# Bill of Materials


| **Part** | **Note** | **Price** | **Link** |
|:--:|:--:|:--:|:--:|
| Cokoino Robot Arm | This is the robot arm kit. | $49.99 | <a href="[https://www.amazon.com/Arduino-A000066-ARDUINO-UNO-R3/dp/B008GRTSV6/](https://www.amazon.com/LK-COKOINO-Compliment-Engineering-Technology/dp/B081FG1JQ1/ref=sr_1_21_sspa?crid=8TVCEASDB6RE&keywords=cokoino+robot+arm&qid=1689696025&sprefix=cokoino+robot+arm%2Caps%2C153&sr=8-21-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9tdGY&psc=1)"> Link </a> |
| L298N Motor Driver| Used for controlling the motors and wheels | $6.39 | <a href="[https://www.amazon.com/Arduino-A000066-ARDUINO-UNO-R3/dp/B008GRTSV6/](https://www.amazon.com/Controller-H-Bridge-Stepper-Mega2560-Duemilanove/dp/B01CC8XI60/ref=sr_1_6?crid=27HQ179I5Y8WI&keywords=motor+driver+l298n&qid=1689696173&sprefix=motor+drvier+l298n%2Caps%2C201&sr=8-6)"> Link </a> |
| DC Motors + Wheels | Used for moving the robot arm | $7.29 | <a href="[https://www.amazon.com/Arduino-A000066-ARDUINO-UNO-R3/dp/B008GRTSV6/](https://www.amazon.com/HiLetgo-Smart-Robot-Plastic-6527MM/dp/B01HTC5C86/ref=sr_1_7?crid=J9WJLE7B541L&keywords=yellow+dc+motors&qid=1689708020&sprefix=yellow+dc+moto%2Caps%2C178&sr=8-7)"> Link </a> |
| HC-06 | This is the Bluetooth module | $9.49 | <a href="[(https://www.amazon.com/HiLetgo-Wireless-Bluetooth-Transceiver-Support/dp/B01CKW4FSI/ref=sr_1_1_sspa?crid=2MI01I6T2EQ9&keywords=HC06&qid=1689711467&sprefix=hc06%2Caps%2C210&sr=8-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1)"> Link </a>| 
| Swivel ball | This is the wheel in the front | $9.49 | <a href="[(https://www.amazon.com/DGQ-Transfers-Furniture-Trolley-Mounted/dp/B07HC3Z56Z/ref=sr_1_11?crid=5RK61M6M9KJI&keywords=swivel+wheel+ball&qid=1689711864&sprefix=swivel+wheel+bal%2Caps%2C155&sr=8-11))"> Link </a>| 
| Jumper Wires | These wires connect the robot | $6.98 | <a href="[([https://www.amazon.com/Elegoo-EL-CP-004-Multicolored-Breadboard-arduino/dp/B01EV70C78/ref=sr_1_1_sspa?crid=HMI2F7V5GGF7&keywords=jumper%2Bwires%2Bmale%2Bfemale%2Band%2Bmale%2Bto%2Bfemale&qid=1689712024&sprefix=jumper%2Bwires%2Bmale%2Bfemale%2Band%2Bmale%2Bto%2Bfemla%2Caps%2C175&sr=8-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&th=1)))"> Link </a>| 



# Other Resources/Examples
One of the best parts about Github is that you can view how other people set up their own work. Here are some past BSE portfolios that are awesome examples. You can view how they set up their portfolio, and you can view their index.md files to understand how they implemented different portfolio components.
- [Example 1](https://trashytuber.github.io/YimingJiaBlueStamp/)
- [Example 2](https://sviatil0.github.io/Sviatoslav_BSE/)
- [Example 3](https://arneshkumar.github.io/arneshbluestamp/)

To watch the BSE tutorial on how to create a portfolio, click here. 
