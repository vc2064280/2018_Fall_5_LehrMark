/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 15th, 2018, 12:25 PM
 * Purpose:  Paint Calculation with reading from file
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <fstream> //File input stream Library
#include <cmath>    //ceiling function
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   pntCov, //Paint Coverage in ft^2/gallon
            fncLnth,//Fence length in feet
            fncHt,  //Fence height in feet
            totArea,//Total Area in ft^2
            numGals;//Number of gallons of paint
    ifstream in;    //Input file used for the data
    ofstream out;    //Input file used for the data

    //Initial Variables
    out.open("results.dat");
    in.open("paint.dat");
    in>>pntCov;
    in>>fncHt;
    in>>fncLnth;
    
    //Map/Process Inputs to Outputs
    totArea=4*fncHt*fncLnth;//Both sides painted twice;
    numGals=ceil(totArea/pntCov);

    //Display Outputs
    out<<"Paint coverage per gallon = "<<pntCov<<" ft^2"<<endl;
    out<<"Fence Height = "<<fncHt<<" ft"<<endl;
    out<<"Fence Length = "<<fncLnth<<" ft"<<endl;
    out<<"Total Area to Cover = "<<totArea<<" ft^2"<<endl;
    out<<"Number of Gallons Of Paint required = "<<numGals<<endl;
    
    //Close the files
    in.close();
    out.close();
    
    //Exit program!
    return 0;
}