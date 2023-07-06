# Phone Controlled Robot Arm
<!---helllo this text with a brief description (2-3 sentences) of your project. This description should draw the reader in and make them interested in what you've built. You can include what the biggest challenges, takeaways, and triumphs from completing the project were. As you complete your portfolio, remember your audience is less familiar than you are with all that your project entails!

You should comment out all portions of your portfolio that you have not completed yet, as well as any instructions: -->


| **Engineer** | **School** | **Area of Interest** | **Grade** |
|:--:|:--:|:--:|:--:|
| Liz L | Monta Vista High School | Electrical Engineering | Incoming Sophomore

<!--- **Replace the BlueStamp logo below with an image of yourself and your completed project. Follow the guide [here](https://tomcam.github.io/least-github-pages/adding-images-github-pages-site.html) if you need help.**

![Headstone Image](logo.svg)
  
# Final Milestone

**Don't forget to replace the text below with the embedding for your milestone video. Go to Youtube, click Share -> Embed, and copy and paste the code to replace what's below.**

<iframe width="560" height="315" src="https://www.youtube.com/embed/F7M7imOVGug" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

For your final milestone, explain the outcome of your project. Key details to include are:
- What you've accomplished since your previous milestone
- What your biggest challenges and triumphs were at BSE
- A summary of key topics you learned about
- What you hope to learn in the future after everything you've learned at BSE --> 



# Second Milestone

**Don't forget to replace the text below with the embedding for your milestone video. Go to Youtube, click Share -> Embed, and copy and paste the code to replace what's below.**

<iframe width="560" height="315" src="https://www.youtube.com/embed/y3VAmNlER5Y" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

For your second milestone, explain what you've worked on since your previous milestone. You can highlight:
- Technical details of what you've accomplished and how they contribute to the final goal
- What has been surprising about the project so far
- Previous challenges you faced that you overcame
- What needs to be completed before your final milestone 

# First Milestone

<iframe width="560" height="315" src="https://www.youtube.com/embed/maOioz1Hl5E" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

My intensive project is the Phone-Controlled Robot Arm. The robot arm will initially be controlled by a wired controller and eventually be controlled by an Android phone. Most of the robot is made of acrylic. The robot is composed of acrylic pieces, four servos, a variety of screws and nuts, and the Arduino Nano and the Arduino Shield. The Nano acts as the "brain" of the robot arm, as that's where the code will be located. The Shield is an attachment of the Arduino, increasing the capabilities and functions of the Nano. A servo is a rotary actuator (a device that produces rotary motion and is capable of converting that motion into linear motion). Servos are composed of a motor, position sensor, and control circuit. The position sensor would sense the output shafts' position before sending that information to the control circuit. A control circuit is a type of circuit that controls other devices. The control circuit would compare where the output shaft is and where the output shaft needs to be (where the user directed it) and adjust the power going to the motor accordingly. The position sensor is constantly sending information about the location of the output shaft to the control circuit, so this process is always continuing. Each servo has three wires - a red, brown, and yellow wire. The red wire is responsible for the power supply and brings power to the servo. The brown wire is the ground wire. The ground wire completes the circuit and is connected to the control circuit. The yellow wire is the signal wire and brings signals from the control circuit to the servo. The two largest challenges I faced while working on my first milestone were testing the servos and trying to make a straight arm. Before assembling the robot, I tested the parts to make sure everything was working. Testing the servos was a huge pain because nothing was working. In order to test the servos, I needed to install a driver for the Arduino IDE. However, the wifi network blocked the website that I needed to access in order to download the driver because it was owned by a Chinese company. After some time, I found the driver on an unblocked website and installed it, but Arduino IDE wasn't recognizing it. After uninstalling and reinstalling the driver, the problem was solved and I could upload the code to the Nano. However, Only one servo worked and would follow the instructions of the code. Then I noticed there was a strange smell, and suspected the person nearby had soldered something incorrectly. Then I noticed there was smoke coming from my batteries and quickly unplugged the batteries (they were too hot to take from the battery holder). After changing the batteries and re-soldering some wires, it worked.

In order for the robot arm to work properly, I have to install it perpendicular to the ground. It must go straight up. However, for some reason, the arms would just not go straight. I spent an hour or two screwing and unscrewing a single servo because for some reason, whenever I tightened the screw, it would always snap just left or just right of where I needed it to be. My next milestone will be attaching a controller to the robot arm so I can move it. 


# Starter Project - Exploding Star Color Organ
 <iframe width="560" height="315" src="https://www.youtube.com/embed/ri9x1cUY_Ss" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>]

 My starter project is the Exploding Star Color Organ. A set of 25 LED lights light up in a specific pattern when sound is present. The microphone attached picks up sound and sends the signal to three transistors, which amplify the signal until it's strong enough to pass through two integrated circuits, IC 1 and IC 2. IC 1 has two pins and IC 2 has sixteen pins. Pin 3 on IC 1 sends clock pulses to IC 2, and the signal is received by pin 14. Pin 14 distributes the signal to other pins, and those pins correspond with four transistors, which correspond with six LEDs. The board also has eleven resistors over the board, which slow down/regulate the electrical current. THere are four electrolytic capacitors, which store electrical energy and release it when neccessaries. Electrolytic capacitors use electrolytes as their dieletric material, the material inbetween the postively charged and negatively charged plates. There are also two pentiometers, which are like manual resistors. One controls the LEDs' sensitivity to sound, and the other controls the brightness of the LEDs. The Exploding Star Color Organ is my second starter project. My first starter proejctw as the TV-B-Gone. I wired up the circuit correctly and soldered the joints well, but the TV-B-Gone didn't work. The board was extremely hot, and stopped working after a few minutes. Despite my efforts to re-solder any potential weak solder joints, the TV-B-Gone never worked again (probably due to overheating). By working on the TV-B-Gone, I became much more proficient in soldering and was able to finish the Exploding Star Color Organ much quicker. 

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
```

# Bill of Materials
Here's where you'll list the parts in your project. To add more rows, just copy and paste the example rows below.
Don't forget to place the link of where to buy each component inside the quotation marks in the corresponding row after href =. Follow the guide [here]([url](https://www.markdownguide.org/extended-syntax/)) to learn how to customize this to your project needs. 

| **Part** | **Note** | **Price** | **Link** |
|:--:|:--:|:--:|:--:|
| Item Name | What the item is used for | $Price | <a href="https://www.amazon.com/Arduino-A000066-ARDUINO-UNO-R3/dp/B008GRTSV6/"> Link </a> |
| Item Name | What the item is used for | $Price | <a href="https://www.amazon.com/Arduino-A000066-ARDUINO-UNO-R3/dp/B008GRTSV6/"> Link </a> |
| Item Name | What the item is used for | $Price | <a href="https://www.amazon.com/Arduino-A000066-ARDUINO-UNO-R3/dp/B008GRTSV6/"> Link </a> |

# Other Resources/Examples
One of the best parts about Github is that you can view how other people set up their own work. Here are some past BSE portfolios that are awesome examples. You can view how they set up their portfolio, and you can view their index.md files to understand how they implemented different portfolio components.
- [Example 1](https://trashytuber.github.io/YimingJiaBlueStamp/)
- [Example 2](https://sviatil0.github.io/Sviatoslav_BSE/)
- [Example 3](https://arneshkumar.github.io/arneshbluestamp/)

To watch the BSE tutorial on how to create a portfolio, click here. -->
