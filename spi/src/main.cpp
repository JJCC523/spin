/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Student                                          */
/*    Created:      Wed Nov 30 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// side                 motor         8               
// i                    motor         9               
// fly1                 motor         2               
// fly2                 motor         3               
// Optic1               optical       6               
// Optic2               optical       4               
// fl                   motor         1               
// fr                   motor         10              
// bl                   motor         11              
// br                   motor         20              
// inert                inertial      7               
// xrot                 rotation      5               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

//vex::digital_out numatics = vex::digital_out(Brain.ThreeWirePort.A);

// int piston() {
//   wait(.5,sec);
//   numatics = 1;
//   wait(.2,sec);
//   numatics = 0;

//   wait(.5,sec);
//   numatics = 1;
//   wait(.2,sec);
//   numatics = 0;


//   return 0;
// }


void driveforward(int deg) {
  xrot.resetPosition();
  while (xrot.position(degrees)<deg){
    fl.spin(forward,50,pct);
    fr.spin(forward,50,pct);
    bl.spin(forward,50,pct);
    br.spin(forward,50,pct);
  }
  fl.stop();
  fr.stop();
  bl.stop();
  br.stop();
}

void drivebackward(int deg) {
  xrot.resetPosition();
  while (xrot.position(degrees)>-deg){
    fl.spin(reverse,50,pct);
    fr.spin(reverse,50,pct);
    bl.spin(reverse,50,pct);
    br.spin(reverse,50,pct);
  }
  fl.stop();
  fr.stop();
  bl.stop();
  br.stop();
}
void tl(int deg) {
  
  while (inert.rotation(degrees) >deg){
    fl.spin(reverse,50,pct);
    fr.spin(forward,50,pct);
    bl.spin(reverse,50,pct);
    br.spin(forward,50,pct);
  }
  fl.stop();
  fr.stop();
  bl.stop();
  br.stop();
}

void tr(int deg) {
  
  while (inert.rotation(degrees) <deg){
    fl.spin(forward,50,pct);
    fr.spin(reverse,50,pct);
    bl.spin(forward,50,pct);
    br.spin(reverse,50,pct);
  }
  fl.stop();
  fr.stop();
  bl.stop();
  br.stop();
}


int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  
inert.calibrate();
while(inert.isCalibrating)
  

  // while(Optic1.color()!=red) {
  //   wait(10,msec);
  // }
  // i.stop();
}
