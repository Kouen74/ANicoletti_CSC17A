/* 
 * File:   newpop.cpp
 * Author: Andrew Nicoletti 
 * Created on March 12, 2018 10:46AM
 * Purpose:  Review
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int pop(int,float,float,int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int startp,years;
    float birth, death;
    //Input or initialize values Here
    cout<<"Population"<<endl;
    cout<<"__________"<<endl;
    cout<<"Input the starting size of a population."<<endl;
    cin>>startp;
    while (startp<2){
        cout<<"Input a starting size population of more than 2."<<endl;
        cin>>startp;
    }
    cout<<"Input the annual birth rate."<<endl;
    cin>>birth;
    while (birth<0){
        cout<<"Input a positive rate of birth."<<endl;
        cin>>birth;
    }
    cout<<"Input the annual death rate."<<endl;
    cin>>death;
    while (death<0){
        cout<<"Input a positive rate of death."<<endl;
        cin>>death;
    }
    cout<<"Input the number of years to display."<<endl;
    cin>>years;
    while (years<1){
        cout<<"Input at least (1) number of years."<<endl;
        cin>>years;
    }
    //Process/Calculations Here
    pop(startp,birth,death,years);
    //Output Located Here
    

    //Exit
    return 0;
}

int pop(int spop,float brate, float drate, int years){
    int newpop=spop;
    for (int count=0; count<years; count++){
        cout<<"The current population for year "<<count<<" is "<<newpop<<endl;
        newpop = spop + (spop*(brate/100.0)) - (spop*(drate/100.0));
        spop=newpop;
        
    }
}