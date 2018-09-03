/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on August 30th, 2018, 11:45 PM
 * Purpose:  Calculate the US DOD Budget
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const char  PERCENT=100;  //Percent conversion

//Function Prototypes

//Execution Begins Here
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
int main(int argc, char** argv) {
    //Declare Variables
    short   milBdgt,//Military Budget in $'s
            fedBdgt;//Federal Budget in $'s
    float   percMil;//Percentage of Mil/Fed's %
    
    //Initialize Variables
    //https://en.wikipedia.org/wiki/2018_United_States_federal_budget
    fedBdgt=4094;//4094 Billion
    //https://www.cnn.com/2018/03/28/politics/us-military-spending
    //   -items-intl/index.html
    milBdgt=700; //700 billion dollars
    
    //Process/Map inputs to outputs
    percMil=static_cast<float>(milBdgt)/fedBdgt*PERCENT;//Percentage Military Budget
    
    //Output data
    cout<<"The Federal Budget =  $"<<fedBdgt<<" Billion"<<endl;
    cout<<"The Military Budget = $"<<milBdgt<<" Billion"<<endl;
    cout<<"Percentage Military Budget = "<<percMil<<"%"<<endl;
    
    //Exit stage right!
    return 0;
}