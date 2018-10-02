/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Sept 18th, 2018, 12:40 PM
 * Purpose:  Consumer Loan
 */

//System Libraries Here
#include <iostream>//I/O stream library
#include <iomanip> //Format Library
#include <cstring> //String Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float loanFV;//Loan Face Value in $'s
    float loanAmt;//Loan received in hand $'s
    float intRate;//Interest Rate/yr
    float mnPymt;//Monthly Payment $'s
    unsigned short nMonths;//Number of Months
    
    //Input or initialize values Here
    intRate=0.15f;//15 percent
    nMonths=18;//18 months
    cout<<"Consumer Loan"<<endl;
    cout<<"Input amount received in loan $'s"<<endl;
    cin>>loanAmt;
    
    //Process/Calculations Here
    loanFV=loanAmt/(1-intRate*nMonths/12);
    mnPymt=loanFV/nMonths;
    
    //Output Located Here
    cout<<"$"<<loanAmt<<" @ "<<intRate*100<<" % ";
    cout<<"for "<<nMonths<<" months = Face Value of $";
    cout<<loanFV;
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Monthly Payment = $"<<mnPymt<<endl;

    //Exit
    return 0;
}