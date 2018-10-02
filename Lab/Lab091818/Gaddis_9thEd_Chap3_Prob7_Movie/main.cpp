/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on September 18th, 2018, 12:10 PM
 * Purpose:  Movie Take
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
    const int SIZE=26;
    char cMovie[SIZE];
    string sMovie;
    unsigned short nAdult,nChild;//Number of Adult and Child Tickets
    float   pAdult,//Price of the Adult ticket in $'s
            pChild,//Price of the Child ticket in $'s
            ptkDist,//Distributer Percentage
            ptkBus, //Theater Percentage
            tkDist, //$'s from Ticket Sales for Distributor
            tkBus,  //$'s from Ticket Sales for Theater
            totTk;  //$'s Total Ticket Sales
    
    
    //Input or initialize values Here
    pAdult=10.0f;//$10's
    pChild=6.0f; //$6's
    ptkDist=0.8f;//80% of sales to the distributor
    ptkBus=0.2f; //20% of sales to the theater
    cout<<"This Program calculates the take"<<endl;
    cout<<"a Theater derives for showing a movie"<<endl;
    cout<<"Input the name of the movie"<<endl;
    //cin.getline(cMovie,SIZE);
    getline(cin,sMovie);
    cout<<"Input number of Adult Tickets sold"<<endl;
    cin>>nAdult;
    cout<<"Input number of Child Tickets sold"<<endl;
    cin>>nChild;
    
    //Process/Calculations Here
    totTk  = nAdult * pAdult + nChild * pChild;
    tkDist = totTk * ptkDist;
    tkBus  = totTk * ptkBus;
    
    //Output Located Here
    //cout<<cMovie<<endl;
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Amount received and to be Distributed"<<endl;
    cout<<"Movie title = "<<sMovie<<endl;
    cout<<"Total Take           = $"<<setw(8)<<totTk<<endl;
    cout<<"Distributor receives = $"<<setw(8)<<tkDist<<endl;
    cout<<"Theater receives     = $"<<setw(8)<<tkBus<<endl;
    

    //Exit
    return 0;
}

