/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on October 4th, 2018, 10:25 AM
 * Purpose:  Menu Template
 */


//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;//Option 0 to 9 input as a character not a numeric value
    
    //Input or initialize values Here
    cout<<"This program illustrates a Menu"<<endl;
    cout<<"Choose the problem you wish to solve"<<endl;
    cout<<"0 -> Gaddis_9thEd_Chap4_Prob10_JustATest"<<endl;
    cout<<"1 -> Gaddis_9thEd_Chap4_Prob11_JustATest"<<endl;
    cout<<"2 -> Gaddis_9thEd_Chap4_Prob12_JustATest"<<endl;
    cin>>choice;
    
    //Process/Calculations Here
    switch(choice){
        case '0':
            cout<<"Put solution to Prob 10 here"<<endl;
            break;
        case '1':
            cout<<"Put solution to Prob 11 here"<<endl;
            break;
        case '2':
            cout<<"Put solution to Prob 12 here"<<endl;
            break;
        default:
            cout<<"Having trouble following instructions?"<<endl;
    }
    
    //Exit Stage Right
    return 0;
}

