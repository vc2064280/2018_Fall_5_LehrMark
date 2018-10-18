/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on October 18th, 2018, 10:30 AM
 * Purpose:  Sum of 2 Randomly generated die
 */

//System Libraries Here
#include <iostream>  //Input/Output Library
#include <ctime>     //Time Library
#include <cstdlib>   //Random number Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random seed here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables and Initialize
    unsigned int win=0,lose=0;
    unsigned int nGames=3600000;
    
    //Play the number of games required
    for(int game=1;game<=nGames;game++){
        //Declare the dice and sum the results
        unsigned char die1=rand()%6+1;
        unsigned char die2=rand()%6+1;
        unsigned char sum=die1+die2;
        //Record the initial Wins and Losses
        //Decide if you need to Roll Again
        if(sum==7||sum==11)win++;
        else if(sum==2||sum==3||sum==12)lose++;
        else{
            bool rollAgn=true;
            //Roll the dice as many times as necessary
            do{
                die1=rand()%6+1;
                die2=rand()%6+1;
                unsigned char sum2=die1+die2;
                //If you roll a 7 before your original sum, you lose
                if(sum2==7){
                    lose++;
                    rollAgn=false;
                //If you roll your original sum, you win.
                }else if(sum2==sum){
                    win++;
                    rollAgn=false;
                }
            }while(rollAgn);
        }
    }
    //Output the Results
    cout<<"Total Number of Games = "<<nGames<<endl;
    cout<<"Total Wins = "<<win<<" Percentage win = "
            <<100.0f*win/nGames<<"%"<<endl;
    cout<<"Total Lose = "<<lose<<" Percentage Lose = "
            <<100.0f*lose/nGames<<"%"<<endl;
    cout<<"Total Number of Games = "<<win+lose<<endl;
    
    //Exit
    return 0;
}