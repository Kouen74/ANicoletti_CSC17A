/* 
 * File:   main.cpp
 * Author: Andrew Nicoletti
 * Created on March 19, 2018 11:26AM
 * Purpose: Array Allocator
 * 
 * Write a function that dynamically allocates an array of integers.
 * The function should accept an integer argument indicating the number of
 * elements to allocate. The function should return a pointer to the array.
 * 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int *ptrary(int);
void display(int, int*);


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int num;
    int *showary = nullptr, *points = nullptr;
    //Input or initialize values Here
    cout<<"Input the number of elements to allocate."<<endl;
    cin>>num;
    //Process/Calculations Here
    points=ptrary(num);
    display(num,points);
    //Output Located Here

    
    delete [] points;
    //Exit
    return 0;
}

int *ptrary(int index){
    
    int *point = nullptr;
    point = new int[index];
    for (int count=0; count<index; count++)
    {
        point[count]=count;
    }
    return point;
}

void display(int index, int *point){
    cout<<"Displaying the elements in the arrays"<<endl;
    for (int count = 0; count<index; count++){
        cout<<point[count]<<" "<<endl;
    }
}
