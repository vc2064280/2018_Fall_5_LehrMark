/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on September 6th, 2018, 12:15 PM
 * Purpose:  Calculate the distance dropped in free fall
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float GRAVITY=32.174;//Gravity on earth = 32.174ft/sec^2

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float time,     //Time in seconds
          distnce;  //Distance in feet
    
    //Input or initialize values Here
    cout<<"This program determines distance dropped"<<endl;
    cout<<"in Free-Fall"<<endl;
    cout<<"Input time of drop"<<endl;
    cin>>time;
    
    //Process/Calculations Here
    distnce=GRAVITY*time*time/2;
    
    //Output Located Here
    cout<<"Time in free fall = "<<time<<" secs"<<endl;
    cout<<"The distance fallen = "<<distnce<<" ft"<<endl;

    //Exit
    return 0;
}
