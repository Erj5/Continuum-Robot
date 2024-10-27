# Design of Continuous Robot for exploration in the Faculty of Engineering
## Introduction
In the search for innovative solutions for exploration in complex and inaccessible terrain, the design of flexible and continuous robots represents a powerful alternative to traditional robotic structures, which are often limited by their rigidity and lack of adaptability. This project takes as inspiration the structure of the human spine, known for its combination of flexibility and stability, to develop a continuous exploration robot. The structure of the robot is made up of silicone nodes and rigid materials, manufactured using 3D printing, which allow the machine to articulate and adapt to various environments in an agile and efficient manner. Thanks to this hybrid architecture, the robot is capable of avoiding obstacles and modifying its shape, simulating the fluid movement of a spinal column, which is key to carrying out exploration tasks in places that are difficult to access.
## Methodology
### 1. Selection of electronic components and materials:
  * A circuit is implemented to control the continuous robot based on 6 servomotors, 3 joysticks, connection cables, an Arduino and fishing line.
  * To assemble all these materials, a body must be designed capable of incorporating all the components and withstanding the tension that the servomotors will generate in conjunction with the fishing line, which will serve to move the robot.
### 2. Design in Fusion 360:
  * In Fusion 360, a two-level support is created and modeled, which for level one will serve to mount 2 servomotors and the three joysticks, while in the second level it will serve to mount the remaining 4 servomotors.
  * 6 pulleys are created and designed that will be mounted on the 6 corresponding servomotors, through which a piece of fishing line will be wound on each pulley.
  * The rigid nodes of the robot are designed and created, with small "guide" type holes for the fishing line to pass along the continuous robot. Additionally, the final node is designed with the same specifications, but adding a grip that will hold the camera.
  * A mold is designed and created that will be used to make the flexible silicone nodes, which maintain the specifications of the rigid nodes.

| <img src="https://github.com/Erj5/Continuum-Robot/blob/main/Isometric.png" alt="3D view 1" width="250"/> | <img src="https://github.com/Erj5/Continuum-Robot/blob/main/front.png" alt="3D view 2" width="225"/> | <img src="https://github.com/Erj5/Continuum-Robot/blob/main/lateral.png" alt="3D view 3" width="300"/> |
|:---------------------------------------------:|:--------------------------------------:|:------------------------------------------------------:|
| 3D view 1                             | 3D view 2                         | 3D view 3                         |

### 3. 3D printing:
  * The final design was exported and prepared for printing using the Cura software.
  * The material chosen for printing was PLA (Polylactic Acid) due to its ease of use, low warping tendency, and eco-friendly nature. PLA is a biodegradable thermoplastic derived from renewable resources, such as corn starch or sugarcane, and is well-suited for applications that prioritize environmental sustainability and precision over extreme strength or heat resistance.
  * the parts that were printed for the support were assembled with M3 screws

## Challenges and Solutions
### Continuous robot nodes:
The image shown in point 2 of the methodology shows the support of the robot and a small session of it, which presents the first nodes that were implemented, which provided limited and sometimes rigid movement. This is why the incorporation of silicone nodes was implemented as a change, to give greater flexibility and range of motion to the robot.

| <img src="https://github.com/Erj5/Continuum-Robot/blob/main/nodo1.png" alt="Initial node" width="350"/> | <img src="https://github.com/Erj5/Continuum-Robot/blob/main/nodo2.png" alt="End node" width="350"/> |
|:---------------------------------------------:|:--------------------------------------:|
| Initial node                            | End node                        |

As seen in the previous image, a change was implemented in the rigid nodes, decreasing the number of guide channels through which the fish line will pass (which will give movement to the continuous robot in conjunction with the pulleys and servomotors).

| <img src="https://github.com/Erj5/Continuum-Robot/blob/main/polea.png" alt="Pulley" width="350"/> |
|:---------------------------------------------:|
| Pulley                            |

The next step to implement was the creation of the flexible nodes (silicone) for which a mold was created, based on TPU, capable of storing the liquid silicone and retaining it until it dries. The material chosen for printing was TPU (Thermoplastic Polyurethane) due to its flexibility, elasticity, and resistance to abrasion. TPU is known for its ability to produce parts that are both durable and resilient, making it ideal for applications that require impact resistance, shock absorption, and flexibility, such as gaskets, protective covers, and custom-fit components.

| <img src="https://github.com/Erj5/Continuum-Robot/blob/main/molde.png" alt="Mold" width="350"/> | <img src="https://github.com/Erj5/Continuum-Robot/blob/main/moldeA.png" alt="Mold A" width="400"/> | <img src="https://github.com/Erj5/Continuum-Robot/blob/main/moldeB.png" alt="Mold B" width="370"/> |
|:---------------------------------------------:|:---------------------------------------------:|:---------------------------------------------:|
| Mold                            | Mold A                           | Mold B                           |

Once all these modifications have been made, a grip for the camera is developed in Fusion 360, which maintains a scheme similar to the nodes previously shown.

| <img src="https://github.com/Erj5/Continuum-Robot/blob/main/grip.png" alt="Pulley" width="350"/> |
|:---------------------------------------------:|
| Grip                            |

## Results
The project resulted in the development of a functional and adaptable continuous exploration robot, suitable for navigating challenging terrain. The use of PLA provided a strong and stable structure, while the TPU molds allowed the creation of flexible silicone nodes that improve the mobility of the robot. Furthermore, the integration of Arduino-based electronics enabled precise control and responsiveness, making this robot an effective tool for exploratory tasks in complex environments.

## Conclusion
This project not only met the initial goals of designing a flexible and robust exploration robot, but also showed the effectiveness of advanced technologies, such as 3D printing and programmable electronics, in robotic innovation. The interdisciplinary approach, combining mechanical design, materials science and electronics, has demonstrated the potential for future projects in exploratory robotics and has opened new avenues for developing adaptive robotic systems for complex environments.
