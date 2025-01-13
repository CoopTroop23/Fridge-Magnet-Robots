# Fridge-Magnet-Robots

## Overview
Refridgerator Magnet Robots are remote controlled robots that move around on the side of a fridge. I made this idea a reality last spring and I wanted to share my findings.
![IMG_0293](https://github.com/user-attachments/assets/a680f437-6bfd-4f0e-873a-997280277a35)

## Design iterations
There are several ideas and iterations I went through to get to the result. Originally, I had the idea to place magnets on the bottom of the chassis of the robot to allow for maximum surface area of the magnets. This design proved to be difficult to build because slight imperfections in the flatness of the robot lead to it getting high centered and the wheels not contacting the fridge. If better tolerances and machining were used, this design might work but it needs a lot of improvements.
![image](https://github.com/user-attachments/assets/afc17502-60e0-4671-ab09-f64547d2372b)

The next design I attempted to make were magnetic wheels. By placing magnets on the wheels, I took advantage of having a rolling contact joint between the wheel and the fridge. This means that assuming the wheel is in pure rotation, the magnets at the end of the wheel will instantaneously be static once they are in contact with the fridge. This improves the design because it allows the magnets to be closer to the fridge (giving them more force) while also reducing friction and the risk of getting high centered.
![image](https://github.com/user-attachments/assets/6b90b6a1-280d-4130-945f-6b2bcfad6be8)

## Hardware
The robots use the following materials:
* small hobby gearmotors
* N-Channel mosfets
* arduino nano
* IR reciever
* 9v battery and connector
* 3mm disk magnets
* 3D printed parts

All 3D printing and CAD files can be foud on my [Tinkercad](https://www.tinkercad.com/things/8u3FN7kBX82-fridge-magnet-robot-v5) page.

## Assembly
### Wheels
To assemble the wheels, begin by laying our the magnets one by one. Press fit the magnets into the wheel and use some hot glue to secure it in place. When assembling, I alternated each magnet's pole from the one adjacent to it. The thinking here is the nearby magnets will pull on each other putting the wheel in compression instead of relying on adhesives to lock the magnets in place. I am not sure how much this effect actually mattered. Once the magnets are in place, the entire wheel can be covered in a thin layer of hot glue to make a grippy tread.
### Chassis
The two 3D printed chassis parts are glued together (refer to CAD) and the motors are fixed to the frame using bamboo skewers and hot glue. The only reason why I chose this method of securing the motors is because at the time, I did not have screws or bolts to build this robot. The CAD file can be easily modified to include these features.

## Software
The main software challenges for this project was reverse engineering an old infrared remote to work with these robots. I used a remote from an old fan to control the robot. To find the codes that the remote was sending to the reciever, I used the arduino [IRremote](https://github.com/Arduino-IRremote/Arduino-IRremote) library and read the codes by using the RecieveDemo sketch. I used three buttons for movement: turn left, turn right, and move forward. Whenever the arduino recieves the input from the remote, it moves the motors appropriately to move in the desired dirction.

## Future Updates
Some things I would like to improve about this robot is to make it stick to the fridge better. The robot works great on my fridge but when testing on other metal surfaces like doors and my friend's fridge, it kept on sliding down. I could improve this by getting stronger magnets, reducing the weight, or giving the tread of the wheels more grip.

Another thing I would like to add to this robot are sensors. I would like to control the velocity of the motors that way the robot can move in a straight line instead of drifting off to one side. It also may be cool to add an accelerometer to be able to detect what direction the robot is facing so the robot can compesate for speed changes due to gravity when going up or down the fridge.

I could also add more control to this robot by allowing the motors to spin in reverse. However, I like the limited motion that the robot has as it gives the driver more of a challenge.

![IMG_0292](https://github.com/user-attachments/assets/6c27759f-840b-47d7-8e4c-281340fbae92)
