#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor side = motor(PORT8, ratio18_1, true);
motor i = motor(PORT9, ratio6_1, false);
motor fly1 = motor(PORT2, ratio6_1, true);
motor fly2 = motor(PORT3, ratio6_1, true);
optical Optic1 = optical(PORT6);
optical Optic2 = optical(PORT4);
motor fl = motor(PORT1, ratio18_1, false);
motor fr = motor(PORT10, ratio18_1, true);
motor bl = motor(PORT11, ratio18_1, false);
motor br = motor(PORT20, ratio18_1, true);
inertial inert = inertial(PORT7);
rotation xrot = rotation(PORT5, false);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}