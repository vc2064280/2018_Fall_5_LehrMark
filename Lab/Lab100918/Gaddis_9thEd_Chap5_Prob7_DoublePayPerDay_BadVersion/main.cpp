/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on October 9th, 2018, 12:00 PM
 * Purpose:  Double Pay each Day
 *           using a statically cast double for output
 */

//System Libraries Here
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const unsigned char CNVPDOL=100;//Number of pennies in a dollar

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned int totPay;  //Total Pay
    unsigned char nDays;  //Number of days
    
    //Input or initialize values Here
    nDays=30;//30 days in this month
    totPay=0;//Initialize total pay to a dollar
    cout<<"This is a Pay Day problem"<<endl;
    cout<<"Your pay is doubled each day "<<endl;
    cout<<"starting with a penny"<<endl;
    
    //Process/Calculations Here
    cout<<fixed<<setprecision(2)<<showpoint;
    for(unsigned int day=1,pennies=1;day<=nDays;day++,pennies*=2){
        totPay+=pennies;  //Sum each payday
        //Cast pennies to doubles since 10 Significant Digits > 7 SD float
        cout<<"Day "<<setw(2)<<day<<" Pay = $"
                <<setw(11)<<static_cast<double>(pennies)/CNVPDOL<<endl;
    }
    
    //Total pay is the sum of each pay day
    cout<<"Total Pay  = $"<<static_cast<double>(totPay)/CNVPDOL<<endl;

    //Exit
    return 0;
}