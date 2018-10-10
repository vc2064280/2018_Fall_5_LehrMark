/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on October 9th, 2018, 12:00 PM
 * Purpose:  Double Pay each Day
 *           casting pennies to dollars and cents
 *           No double data type used
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
    
    //How to do Dollars then Cents
    for(unsigned int day=1,pennies=1;day<=nDays;day++,pennies*=2){
        totPay+=pennies;
        //First output the dollars with a period
        cout<<"Day "<<setw(2)<<day<<" Pay = $"
                <<setw(8)<<pennies/CNVPDOL<<".";
        //Now take care of the cents
        if(pennies%CNVPDOL<10)cout<<"0"<<pennies%CNVPDOL<<endl;
        else cout<<pennies%CNVPDOL<<endl;
    }
    
    //Again dollars with a division and cents with a mod operator
    cout<<"Total Pay  = $"<<totPay/CNVPDOL<<".";
    if(totPay%CNVPDOL<10)cout<<"0"<<totPay%CNVPDOL<<endl;
        else cout<<totPay%CNVPDOL<<endl;

    //Exit
    return 0;
}