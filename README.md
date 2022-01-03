# **Automatic Watering System using Soil Moisture Sensor and RTC Timer with Arduino**
### *Technical Answers to Real-World Problems*  
> *Know the plant, Grow the plant!*

### Contents
1. [What is Automatic Watering System (AWS)?](#1-what-is-automatic-watering-system-aws)
2. [What is AWS using Soil moisture Sensor?](#2-what-is-aws-using-soil-moisture-sensor)
3. [What is AWS using Real Time Clock - DS3231?](#3-what-is-aws-using-real-time-clock---ds3231)
4. [How to build an AWS using Soil Moisture Sensor and RTC DS3231?](#4-how-to-build-an-aws-using-soil-moisture-sensor-and-rtc-ds3231)
   - [Requirements](#requirements)
   - [Module / Component Descriptions](#module--component-description)
   - [Architecture / Workflows](#architecture--workflows)
   - [Schematic Diagrams](#schematic-diagrams)
   - [Code and Upload](#code-and-upload)
5. [Where to get help?](#5-where-to-get-help)
6. [Contribution](#6-contribution)


### 1. What is Automatic Watering System (AWS)?
We all know that plants are very beneficial to all human beings in many aspects. Plants helps in keeping the environment healthy by cleaning air naturally and producing oxygen. Many people love to have plants in their backyard. But due to civilization and insufficiency of place many people used to grow plants in mould or dirt, pot, and placed on the windowsill. These plants are dependent on conventional breeding - watering, and provide the right amount of sun to sustain life and growth. In busy schedule of day-to-day life, many time people forget to water their plants and due to this plants suffers many disorders and ultimately died. In addition, the world's biggest problem in modem society is the shortage of water resources, agriculture is a demanding job to consume large amounts of water. It is very essential to utilize the water resources in proper way.  
> Plants in our backyard/indoor are to be taken care of even in our absence, this is what we achieved through our work. Our Solution approach is entirely to change watering Manually to watering Automatically.  

### 2. What is AWS using Soil moisture Sensor?  
Soil moisture sensor is a novel device which senses the moisture content in the soil, and with suitable mechanism allows water to be watered depending on the moisture content of the soil. This allows flow of water or stoppage of water to the plants by using an automated watering system.  
It helps you in watering at times when your plant is too dry and needs water. All the plants are not same, they need different amount of water. If it's too wet and doesn't need water, it helps you know that.  
**Soil moisture sensor & Arduino:** It measures the moisture content in soil and checks if the plant needs water or not, pump waters the plant accordingly.  

### 3. What is AWS using Real Time Clock - DS3231?  
Real Time Clock keep track of current time. The RTC maintains seconds, minutes, hours, day, date, month, and year information. The date at the end of the month is automatically adjusted for months with fewer than 31 days, including corrections for leap year. The clock operates in either the 24-hour or 12-hour format with an AM/PM indicator. Once the time is uploaded and it synchronizes to the real world time.  
It helps you in watering at times when your not in home/place for long time. You are gone but you can count on this to water on time as you needed, know when to water.  
**RTC DS3231 & Arduino:** RTC helps you in keeping track of the current time and water the plant exactly when you need it and pump waters the plant accordingly.  

### 4. How to build an AWS using Soil Moisture Sensor and RTC DS3231?  

#### Requirements
* Arduino UNO –  Microchip ATmega328P (Operating Voltage: 5 Volts, Input Voltage: 7 to 20 Volts, Digital I/O Pins: 14)
* Soil moisture sensor module– 3.3v - 5v, Operating Voltage (VDC) - 3.3 ~ 5, PCB Dimension - Approx.3cm x 1.5cm, Soil Probe Dimension - Approx. 6cm x 3cm, Cable Length (cm) – 20
* Submersible Pump - 180V-230V, 1.85 M, 18W and an attachable pipe of 32mm – 110mm with required length
* Relay – (1 or many channel), 5V DC, 100ma, Load - 250v 10a AC or 30v 10a dc
* Power supply – AC socket 220V
* RTC DS3231 - AT24C32 IIC Precision RTC (Operating voltage - 3.3 - 5 .5 V, Clock chip: High-precision clock chip DS3231, Clock Accuracy: 0 - 40 centigrade range, the accuracy 2ppm, the error was about 1 minute) with a lithium coin battery of 3v – 5v
* D type USB cable
* Breadboard & Jumper wires - Male-to-Female, Male-to-Male, Female-to-Female.
* Arduino IDE – 1.8.16 (recommended) - The open-source Arduino Software (IDE) makes it easy to write code and upload it to the board. This software can be used with any Arduino board.

#### Module / Component Description
* **Arduino UNO:**  
  Arduino Uno is a microcontroller board based on the ATmega328. It has 14 digital input / output pins (of which 6 can be used as PWM outputs), 6 analog inputs, 16 MHz ceramic resonator, USB connection, power jack, ICSP plug, and a reset button. It contains everything needed to support the microcontroller; simply use the USB cable or power it with a AC-to-DC adapter or battery is connected to a computer begins.
* **Relay:**  
  Relay is an electrically operated switch. Many relays for switching solenoid mechanism mechanically operated, but can also be used for other principles of operation. Relays are widely used in early computers to telephones and perform logical operations.  
  The Relay module is a switch that controlled by an electromagnet. It is used to control the on and off of the DC watering pump by opening or closing the electric path that passes to the watering pump. It is controlled by the code from the Arduino.
* **Soil Moisture Sensor:**  
  A moisture sensor is used to sense the level of moisture content present in the irrigation field. It has a level detection module in which we can set a reference value. This circuit can be used with analog probes that produce a voltage proportional to soil moisture. The moisture content of the soil is found by using the soil moisture sensor which produces an equivalent output voltage proportional to the conductivity between the two probes. The module has a built-in potentiometer for sensitivity adjustment of the digital output (DO).  
  You can set a threshold by using a potentiometer; So that when the moisture level exceeds the threshold value, the module will output LOW otherwise HIGH.  
* **Real Time Clock (RTC) - DS3231:**  
  The working in this RTC module is as follows, Firstly the condition of timer from when the watering has to happen is being given in loop through Arduino and the rtc is set to current time, when the relay is connected to an external power supply, the loop executes and checks if the current time of conditioned time. If the time matches, power supply is on and the watering happens and similarly the relay will be triggered off, if the loop checks for the stop time and matches and thus, watering does stops.  

#### Architecture / Workflows  
* **AWS using Soil moisture Sensor**
  ![Architecture for AWS using Soil moisture Sensor](https://github.com/Vaishnavi-Pothugunta/Automatic-Watering-System/blob/main/AWS-Images/AWS-arch-sensor.png)
  
* **AWS using Real Time Clock - DS3231**
  ![Architecture for AWS using Real Time Clock - DS3231](https://github.com/Vaishnavi-Pothugunta/Automatic-Watering-System/blob/main/AWS-Images/AWS-arch-timer.png)
 
#### Schematic Diagrams
* **AWS using Soil moisture Sensor**
  ![Schematic diagram for AWS using Soil moisture Sensor](https://github.com/Vaishnavi-Pothugunta/Automatic-Watering-System/blob/main/AWS-Images/AWS-con-sensor.png)
* **AWS using Real Time Clock - DS3231**
  ![Schematic diagram for AWS using Real Time Clock - DS3231](https://github.com/Vaishnavi-Pothugunta/Automatic-Watering-System/blob/main/AWS-Images/AWS-con-timer.png)

#### Code and Upload
* **Uploading time into RTC DS3231 for the first time (Only for AWS using Timer)**  

  1. Open Arduino IDE, go to `File` and select `Examples` in menu bar.
  2. Then select `DS3231`, choose `Arduino` and select `DS3231_Serial_Easy`.
  3. Now, Do changes in `Void Setup()`.
  4. You can see the following and change Day, Time, Date to your current ones.
   ```
   //The following lines can be uncommented to set the date and time
   rtc.setDOW(WEDNESDAY);     // Set Day-of-Week to SUNDAY
   rtc.setTime(12, 0, 0);     // Set the time to 12:00:00 (24hr format)
   rtc.setDate(1, 1, 2014);   // Set the date to January 1st, 2014
   ```
   5. Now upload it to Arduino which is connected to RTC alone. (No changes in connections, just connect RTC alone to Arduino)
   6. After Successful Upload, follow the below steps.

  ![Upload time for first time in DS3231](https://github.com/Vaishnavi-Pothugunta/Automatic-Watering-System/blob/main/AWS-Images/AWS-timer-example.png)

* **AWS using Soil moisture Sensor and Real Time Clock - DS3231**  

  1. Open Arduino IDE and open code files (.ino file) i.e., [AWS-sensor.ino](https://github.com/Vaishnavi-Pothugunta/Automatic-Watering-System/blob/main/AWS-Code/Automatic%20Watering%20System%20-%20Sensor.ino) or [AWS-timer.ino](https://github.com/Vaishnavi-Pothugunta/Automatic-Watering-System/blob/main/AWS-Code/Automatic%20Watering%20System%20-%20Timer.ino), whichever you wanted to build.
  2. Make sure you selected the `port` and `board type` from `Tools` menu before uploading.
  3. Now, Upload it to the Arduino UNO connecting to the pc using D-type cable.
  4. After Successfully uploading, Connect the Power supply to relay and the AWS starts working as per the written code.

* **AWS - Software part (ADDITIONAL)**
  1. Open Google colab / Jupyter notebook and open the code file [AWS-software.ipynb](https://github.com/Vaishnavi-Pothugunta/Automatic-Watering-System/blob/main/AWS-Code/TARP_SOFTWARE.ipynb) in that.
  2. This Software part is all about to check which is the best machine learning model to predict whether to water the plant or not.
  3. 4 ML models were trained and the best accuracy model is used to predict the manually collected values of temperature and moisture values.
  4. [Datasets](https://github.com/Vaishnavi-Pothugunta/Automatic-Watering-System/blob/main/AWS-Dataset.csv) are also added in repo.

### 5. Where to get help?  
Few video links were attached, which Demonstrates how this Automatic watering System works. 
  - [AWS using Sensor (Explained)](https://drive.google.com/file/d/10fOE0BtBTWe_BWOAbMEBUET6oRx-6mro/view?usp=sharing)
  - [AWS using Timer (Explained)](https://drive.google.com/file/d/1Tco9xD43NAFRuQMOlxpQKpyb7fU_gnpl/view?usp=sharing)
  - [AWS using Timer (Demo)](https://drive.google.com/file/d/17K4f0TS3x0JXuY7_YOmEyvH30YnfYwYq/view?usp=sharing)

### 6. Contribution
This is work done by a team of 5 students from Vellore Institute of Technology, Chennai
  - [P Vaishnavi](https://github.com/Vaishnavi-Pothugunta)
  - [N Sudheer Kumar](https://github.com/NelakurthiSudheer)
  - [M Bhumika](https://github.com/Bhumika-Manchikanti)
  - [Y Lakshmi Saicharitha](https://github.com/LakshmiSaicharitha-Yallarubailu)
  - [T Jayasri](https://github.com/jayasrireddy19)
