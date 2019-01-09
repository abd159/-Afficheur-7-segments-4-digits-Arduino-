 // Include library found at 
// https://docs.google.com/file/d/0Bwrp4uluZCpNdE9oWTY0M3BncTA/edit 
#include "SevSeg.h"

//Create an instance of the object.
SevSeg sevseg;

void setup() {
  // Set up pins
  // Arguments : 
  // First 0 is for common cathode
  // Following 0 to 11 numbers are for Arduino pins
  // connected to display in the following order
  // 1,2,3,4,A,B,C,D,E,F,G,DP
  sevseg.Begin(0,0,1,2,3,4,5,6,7,8,9,10,11);
}

void loop() {   
  // Prepare number to display, and dot position 
  // (0 to 3, other number means no dot)  

 for (int i=1000; i <= 9999; i++){
      
      
  sevseg.NewNum(i,0);
  // Display number
  sevseg.PrintOutput();  
  // To maintain display with this wiring, 
  // we are forced to loop over those commands rapidly
   delay(5);
 }
 
}
 
