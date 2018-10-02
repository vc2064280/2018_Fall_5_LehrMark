/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Sept 18th, 2018, 12:10 PM
 * Purpose:  String Cat
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
    string sMadLib;
    string in1,in2,in3,in4;
    
    //Input or initialize values Here
    cout<<"This Program acts like a Madlib"<<endl;
    cout<<"What is your name?"<<endl;
    getline(cin,in1);
    cout<<"What is your favorite color?"<<endl;
    getline(cin,in2);
    cout<<"What is your favorite food?"<<endl;
    getline(cin,in3);
    cout<<"What is your favorite animal?"<<endl;
    getline(cin,in4);
    
    //Process/Calculations Here
    sMadLib=in1+" ate the "+in2+" "+in4;
    sMadLib+="\nafter the "+in4;
    sMadLib+=" ate his "+in3+".";
    
    //Output Located Here
    cout<<sMadLib<<endl;

    //Exit
    return 0;
}