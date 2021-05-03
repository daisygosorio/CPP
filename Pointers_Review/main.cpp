/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on March 16, 2021, 12:21 AM
 * Purpose: Pointers and Pointer Variables 
 * 
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    //Declare Variables 
    int length=10;
    
    //Use the & address operator to display the address of a variable
    cout<<"The address variable of length "<<&length<<endl;
    cout<<"The value of length is "<<length<<endl;

    //store the address of a variable in a pointer 
    int *ptr=nullptr;// Pointer variable can point to an int
    ptr=&length;// Store the address of x in ptr
    
    //Use a pointer to display the address of a variable 
    cout<<"The address variable of length "<<ptr<<endl;
    cout<<"The value of length is "<<length<<endl;
   
    return 0;;
    
}
/* Note: 
 *      pointer variables a.k.a pointer is a variable that only holds a 
 *      memory address
 *
 *      Def. of Pointer: int *ptr;//Integer Pointer  
 */
    

