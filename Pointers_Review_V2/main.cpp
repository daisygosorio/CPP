/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on March 16, 2021, 12:21 AM
 * Purpose: Initialize Pointers 
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    // Initialize Pointer Method #1
    int myValue;
    int *pntr=&myValue;
    
    // Initialize Pointer Method #2
    int myValue,*pntr=&myValue;//This is legal, See Note
    
    // Initialize Pointer Method #3
    int SIZE=10;
    int array[SIZE];
    int *pntr=array;//pointer is pointing to the beginning address of array
   
    // Initialize Pointer Method #4
    int array[SIZE], *pntr=array;//This is legal, See Note
    
    return 0;;
    
}

/* Note:
 *      Pointers may be defined in the statement as other variables of the
 *      same type
 */