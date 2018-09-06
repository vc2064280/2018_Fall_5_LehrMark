/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on September 6th, 2018, 11:57 AM
 * Purpose:  The Great Land Grab
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const unsigned short CNVACFT=43560;//Conversion from acres=43560feet^2

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float areaFt2,//Area in ft2
          areaAc; //Area in acres
    
    //Input or initialize values Here
    cout<<"This program converts ft^2 to acres"<<endl;
    cout<<"Input ft^2"<<endl;
    cin>>areaFt2;
    
    //Process/Calculations Here
    areaAc=areaFt2/CNVACFT;
    
    //Output Located Here
    cout<<areaFt2<<" ft^2 = "<<areaAc<<" acres"<<endl;

    //Exit
    return 0;
}
