/* 
 * File:   Test Scores #1.cpp
 * Author: Andrew Nicoletti 
 * Created on March 14, 2018
 * Purpose:  Homework
 * 
 * Modify Problem 2 above so the lowest test score is dropped. This score should
 * not be included in the calculation average.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void sort(int */*[]*/,int);
void average(int */*[]*/,int);
//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE = 100;
    int tests, scores[SIZE], *testptr = scores;
    //Input or initialize values Here
    cout<<"Input the number of test scores."<<endl;
    cin>>tests;
    cout<<"Input the scores then press enter for each test."<<endl;
    for(int count=0;count<tests;count++){
        cin>>testptr[count];
    }
    //Process/Calculations Here
    cout<<"The first entered test score is "<<*testptr<<", same as "<<testptr[0]<<endl;
    sort(/***/testptr,tests);
    cout<<"The first and last test score in descending order are "<<*testptr<<" (same as "<<testptr[0]<<") and "<<testptr[tests-1]<<endl;
    average(/***/testptr,tests);
    //Output Located Here
    
    //delete [] scores;
    testptr = NULL;
    //Exit
    return 0;
}

void sort(int *array/*[]*/,int size){
    bool swap;
    int temp;
    do
    {
        swap = false;
        for (int count = 0; count < (size - 1); count++)
        {
            if (array[count] <  array[count+1])
            {
            temp = array[count];
            array[count] = array[count+1];
            array[count+1] = temp;
            swap = true;
            }   
        } 
    } while (swap);   
}   

void average(int *array/*[]*/, int score){
    int avg;
    avg = 0;
    for (int count = 0; count < score-1; count++){
        avg += array[count];
    }
    avg = (avg/(score-1));
    cout<<"The average score of the tests is "<<avg<<endl;
}