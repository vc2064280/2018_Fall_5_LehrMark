/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Oct 25th, 2018, 10:30 AM
 * Purpose:  e^x Sequence
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int nTerms;//Number of terms in the sequence
    float etox=1;//First Term in the sequence
    float x=1;//x is the power of e^x
    float vTerm=1;//Value of successive terms
    
    //Input or initialize values Here
    nTerms=10;//Calculate the first 5 terms in the sequence
    for(int term=1;term<=nTerms;term++){
        vTerm*=x/term;
        etox+=vTerm;
    }
    
    //Output the results
    cout<<"e^"<<x<<" = "<<exp(x)<<" ~= "<<etox<<endl;
 
    //Exit
    return 0;
}
