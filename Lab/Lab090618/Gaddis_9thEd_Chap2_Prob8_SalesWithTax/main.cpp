/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on September 6th, 2018, 12:35 PM
 * Purpose:  Sales and Tax
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const unsigned char PERCENT=100;//Represents percentage conversion

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const unsigned char TAX=7;//Represents a tax of 7%
    float sale1,sale2,sale3,sale4,sale5;//Sale items in dollars
    float salesTx,totPrch;//Sales tax and total Purchased
    float sumSls;//Sum of the sale items
    
    //Initialize the variables
    sale1=15.95;
    sale2=24.95;
    sale3=6.95;
    sale4=12.95;
    sale5=3.95;
    
    //Calculate the tax and purchase price for all items
    sumSls=sale1+sale2+sale3+sale4+sale5;
    salesTx=sumSls*TAX/PERCENT;
    int iTx=(salesTx+.005)*100;//Integer number of Pennies
    salesTx=iTx/100.0f;//Shift back to dollars
    totPrch=sumSls+salesTx;
    
    //Input or initialize values Here
    cout<<"Item 1 cost = $"<<sale1<<endl;
    cout<<"Item 2 cost = $"<<sale2<<endl;
    cout<<"Item 3 cost = $"<<sale3<<endl;
    cout<<"Item 4 cost = $"<<sale4<<endl;
    cout<<"Item 5 cost = $"<<sale5<<endl;
    cout<<"Sales Tax   = $"<<salesTx<<endl;
    cout<<"Purchase Amt= $"<<totPrch<<endl;

    //Exit
    return 0;
}