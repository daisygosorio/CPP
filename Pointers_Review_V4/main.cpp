/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on April 8, 2021, 12:00 AM
 * Purpose: Pointer Arithmetic 
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    //Declare Variables
    int SIZE=5;
    int array[SIZE];
    int *pntr;// Pointer to a int
    
    //Inputs
    //Use pointer notation to process an array's contents
    cout<<"Enter "<<SIZE<<" numbers: "<<endl;
    for (int i=0;i<SIZE;i++){
        cin>>*(array+i);   
    }
    
    //Output Begins Here 
    pntr=array;//pointer points to array
    
    //Use a pointer to display the contents of an array by incrementing pointer
    cout<<"Here are the numbers you entered"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<*pntr<<" ";
        pntr++;
    }
    cout<<endl;
    
    //Decrement pointer to display the contents of an array backwards
    cout<<"Here are the numbers backwards"<<endl;
    for(int i=0;i<SIZE;i++){
        pntr--;
        cout<<*pntr<<" ";
    }
    cout<<endl;
   
    
    return 0;;
    
}

/* Note: 
 *      you cannot multiply or divide a pointer 
 * 
 */