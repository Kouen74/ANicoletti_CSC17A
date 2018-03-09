\
/* 
 * File:  BinaryStringSearch.cpp
 * Author: Andrew Nicoletti
 * Created on March 8, 2018, 07:05 PM
 * Purpose: Template
 */
 
#include <iostream>     // System Library
#include <string>
#include <sstream>

using namespace std;    // Standard I/O Namespace

string search(string[], int, string);


int main(int argc, char** argv) {
   
    // Declare Variables
    const int NUM_NAMES = 20;
    string lastname, result, names[NUM_NAMES] = {"Allison, Jeff", "Allen, Jim", "Collins, Bill", "Griffin, Jim", "Harrison, Rose", "Holland, Beth",
                                "James, Jean", "Javens, Renee", "Johnson, Jill",  "Looney, Joe", "Pike, Gordon", "Pore, Bob",
                                "Rose, Geri", "Rutherford, Greg", "Setzer, Cathey", "Smith, Bart", "Stamey, Marty", "Taylor, Terri",
                               "Weaver, Jim", "Wolfe, Bill" };            //insert your code to complete this program
    // Input Data
    cout<<"Input the last name of the employee"<<endl;
    getline(cin,lastname);
    // Process Data
    result = search(names, NUM_NAMES, lastname);
    // Output Data
    if (result==" ") cout<<"Name not found"<<endl; else { cout<<"Name found, "<<endl;
    }
    return 0;
}

string search(string array[], const int size, string name) {
    int first = 0,
            last = size - 1,
            middle;
         string   position = " ";
    bool found = false;
    
    while(!found && first <= last)
    {
        middle = (first+last)/2;
        if (array[middle]==name) 
        {
            found = true; 
            position = array[middle];
        }
        else if ( array[middle]> name) 
            last = middle-1;
    else first = middle+1;
    }
    return position;
    
};