# The GSM-R Project
*I am probably going to go mad by the end of this project.*

The GSM-R project is a way for me to convert an ex Class 507 (507010) GSM-R DCP & Telephone into working pieces of hardware to be used on my Computer.


## GSM-R Project Overview
This repository contains:
* Arduino Code for Noritake CU20045SCPB-T23A
* [A folder of reference pictures](https://github.com/SilverDevelopment/GSMR-Project/tree/master/References)
* Software planned for this project which can manage the GSM-R DCP including resetting it and handling its functionality.
* More to come in the future!

## Planned Functionality of the GSM-R
* Start up procedure. [As seen here](https://github.com/SilverDevelopment/GSMR-Project/blob/master/References/Sequences/StartUp.png)
* Simple registration system (with option to blacklist certain registration details e.g "1Z69 420") [*See registration failed*](https://github.com/SilverDevelopment/GSMR-Project/blob/master/References/Photos/0W00-Registration-Failed.jpg)
* Simple deregistration
* Option to use the software or the physical keypad to control the GSM-R screen.
* A dynamic message system. Used to show messages such as an emergency broadcast or [joke messages](https://github.com/SilverDevelopment/GSMR-Project/blob/master/References/Jokes/Dominos.jpg).
* A *phone book* that contains numbers that would be specific to the train company that operates the train, instead replaced by 10 or so slots of phone numbers that could be imputted in the control software and displayed on the GSM-R.
* Simple brightness and volume controls
* Other features such as the test and menu button.
* Turning "off" the GSM-R by holding the register button. Starts the start up procedure to turn it back on. (This entire feature is cosmetic and doesn't actually shut down the GSM-R)

## The Control Software & The Plans For It
The software *is planned to* be written in Python and will be a simple GUI application. It will be designed to:
* Manage the GSM-R DCP
* Display the GSM-R screen on the computer
* Input commands to the GSM-R DCP
* Input phone numbers into the phone book
* Input messages to be displayed on the GSM-R screen
* Control the brightness and volume of the GSM-R screen
* Turn the GSM-R on and off
* Reset the GSM-R to its default state
* View the current state of the GSM-R
* Change the settings on how the GSM-R Operates

## Requirements
* An arduino
* A lot of time
* A GSM-R


## Credits
* Armstrong Powerhouse for a few of the screen reference images.
* RSSB & Network Rail for safety information and functionality reference images and sounds.