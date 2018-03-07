/* 
 * File:   Rain or Shine.cpp
 * Author: Andrew Nicoletti
 * Created on 3/7/2018 11:59 AM
 * Purpose:  Review
 */

//System Libraries Here
#include <iostream>
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    int months = 3, days = 31, countm = 0, countd = 0;
    char weather[months][days];
    //Input or initialize values Here
    
    ifstream inputFile;
    inputFile.open("RainOrShine.txt");
    //Process/Calculations Here
    
    while (countm < months && countd < days)
    {
        cin>>weather[countm][countd];
        if (countd!=30)countd++;
        if (countd==30){countd=0; countm++;}
    }
    //Output Located Here
    
    

    //Exit
    return 0;
}

