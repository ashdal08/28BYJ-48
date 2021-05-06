// ConstantSpeed.pde
// -*- mode: C++ -*-
//
// Shows how to run AccelStepper in the simplest,
// fixed speed mode with no accelerations
/// \author  Mike McCauley (mikem@airspayce.com)
// Copyright (C) 2009 Mike McCauley
// $Id: ConstantSpeed.pde,v 1.1 2011/01/05 01:51:01 mikem Exp mikem $

//I HAVE FURTHER EDITED IT FOR MY NEEDS

#include <AccelStepper.h>

/*

Assumed Pin Mappings

| ULN2003 Board | Motor Phase | Arduino Pin |
| ------------- | ----------- | ----------- |
| IN1           | Green       |           8 |
| IN2           | Brown       |           9 |
| IN3           | Yellow      |          10 |
| IN4           | Blue        |          11 |

*/



//AccelStepper stepper; // Defaults to AccelStepper::FULL4WIRE (4 pins) on 8, 9, 10, 11

//The first 4 means FULLSTEP, then the coil end pins Green, Brown, Yellow, Blue
AccelStepper stepper(4, 8, 10, 9, 11);  

void setup()
{  
   stepper.setMaxSpeed(1000);
   
   //On my 28BYJ-48 with a 64:1 gear ratio my max speed was about 650
   //Positive speeds are clockwise, Negative Speeds are counter-clockwise
   stepper.setSpeed(100);	 
}

void loop()
{  
   stepper.runSpeed();
}
