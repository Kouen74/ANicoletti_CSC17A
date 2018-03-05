/* 
 * File:   Population.cpp
 * Author: Andrew Nicoletti
 * Created on Mar 5, 2018, 11:33 AM
 * Purpose:  Review
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
    int pop, days, newpop, count;
    float popinc;
    
    //Input or initialize values Here
    days=0;
    popinc=0;
    pop=0;
    do
    {
    cout<<"Enter starting number of organisms? (must be more than 1)"<<endl;
    cin>>pop;
    } while (pop<2);
    
    do
    {
    cout<<"Enter average daily population increase (percentage)"<<endl;
    cin>>popinc;
    } while (popinc<=0);
    
    do
    {
        cout<<"Enter number of days (must be more than 1)"<<endl;
        cin>>days;
    } while (days<1);
    newpop=pop;
    //Process/Calculations Here
    for (count=1;count<days+1;count++) {
        newpop=((newpop*(popinc/100))+newpop);
        cout<<"Day  "<<count<<" pop: "<<newpop<<endl;
    }
    
    //Output Located Here
    

    //Exit
    return 0;
}

