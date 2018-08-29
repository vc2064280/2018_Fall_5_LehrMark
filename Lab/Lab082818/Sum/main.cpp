/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on August 28, 2018, 11:27 AM
 * Purpose:  Add 2 numbers
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants  Physics/Math/Conversions/Array Dimension

//Function Prototypes

//Execution begins with main
int main(int argc, char** argv) {
    //Declare Variables
    short op1,op2,sum;
    
    //Initialize Variables
    op1=20000;
    op2=25000;
    
    //Map or process the Variables to their outputs
    sum=op1+op2;
    
    //Display or return the output
    cout<<sum<<" = "<<op1<<" + "<<op2<<endl;

    return 0;
}