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
    
    int months = 3, days = 31, countm = 0, countd = 0,
            junrain,julrain, augrain, julsun, junsun, augsun, julcloud, juncloud, augcloud;
    char weather[months][days];
    //Input or initialize values Here
    
    ifstream inputFile;
    inputFile.open("RainOrShine.txt");
    //Process/Calculations Here
    
    while (countm < months && countd < days)
    {
        inputFile>>weather[countm][countd];
        if (countd!=30)countd++;
        if (countd==30){countd=0; countm++;}
        if (countm==0&&'R')junrain++;
        if (countm==0&&'C')juncloud++;
        if (countm==0&&'S')junsun++;
        if (countm==1&&'R')julrain++;
        if (countm==1&&'C')julcloud++;
        if (countm==1&&'S')julsun++;
        if (countm==2&&'R')augrain++;
        if (countm==2&&'C')augcloud++;
        if (countm==2&&'S')augsun++;
        
    }
    
    inputFile.close();
    //Output Located Here
    
    cout<<" The amount of Rain/Cloud/Sun for June:  "<<junrain<<'/'<<juncloud<<'/'<<junsun<<endl;
    cout<<" The amount of Rain/Cloud/Sun for July:  "<<julrain<<'/'<<julcloud<<'/'<<julsun<<endl;
    cout<<" The amount of Rain/Cloud/Sun for Aug:   "<<augrain<<'/'<<augcloud<<'/'<<augsun<<endl;
    cout<<" Total amount of Rain                    "<<(junrain)+(julrain)+(augrain)<<endl;
    cout<<" Total amount of Cloud                   "<<(juncloud)+(julcloud)+(augcloud)<<endl;
    cout<<" Total amount of Sun                     "<<(junsun)+(julsun)+(augsun)<<endl;

    if (junrain>julrain && junrain>augrain)cout<<"June has the highest amount of rain of "<<junrain<<" days."<<endl;
    if (julrain>junrain && julrain>augrain)cout<<"July has the highest amount of rain of "<<julrain<<" days."<<endl;
    if (augrain>junrain && augrain>julrain)cout<<"August has the highest amount of rain of "<<augrain<<" days."<<endl;
    //Exit
    return 0;
}
