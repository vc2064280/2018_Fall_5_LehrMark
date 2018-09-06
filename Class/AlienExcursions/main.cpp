/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Sept 4th, 2018, 11:20 AM
 * Purpose:  CPP Template
 *           Time to Travel
 *           Nearest Neighbor
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
const float VC=6.706e8f;//Speed of light in miles/hr
const float VE=4.21e1f; //Escape Velocity from Earth out of Solar System km/sec
const float CNVKMM=1.6f;//Conversion km to miles
const char  CNVSMIN=60;//60 sec/min
const char  CNVMNHR=60;//60 min/hour
const char  CNVHRDY=24;//24 hours/day
const short CNVDYYR=365;//365 days/year

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float distnce, time;

    //Initial Variables
    cout<<"This program calculates the time it takes"<<endl;
    cout<<"to reach another solar system given the distance"<<endl;
    cout<<"in Light Years!"<<endl;
    cout<<"Input the distance in Light Years"<<endl;
    cin>>distnce;
    
    //Calculate the distance in miles
    distnce=distnce*VC*CNVHRDY*CNVDYYR;
    time=distnce/VE*CNVKMM/CNVSMIN/CNVMNHR/CNVHRDY/CNVDYYR;
    
    //Output the Distance and Time
    //if VE=VC*CNVKMM/CNVSMIN/CNVMNHR as a check
    //input == output
    cout<<"Distance = "<<distnce<<" miles"<<endl;
    cout<<"Time of Travel = "<<time<<" years"<<endl;
    
    //Exit program!
    return 0;
}