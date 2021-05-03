/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on April 8, 2021, 12:00 AM
 * Purpose: The Relationship between Arrays and Pointers 
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
    
    //Uses pointer notation with the array's name 
    //to display the contents in an array
    cout<<"Here are the numbers you entered"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<*(array+i)<<" ";
    }
    cout<<endl;
    
    //Uses subscript notation with a pointer variable
    //to display contents in an array
    pntr=array;//Assign the address of the array to pntr
    cout<<"Here are the numbers you entered"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<pntr[i]<<" ";//See Note 2) 
    }
    
    cout<<endl;
 
    //Use the address of each element in the array and use the pointer
    //to display contents in an array
    cout<<"Here are the numbers you entered"<<endl;
    for(int i=0;i<SIZE;i++){
        //Get the address of an array element 
        pntr =&array[i];//See Note 1)
        
        //Display the contents of the element
        cout<<*pntr<<" ";
    }
    cout<<endl;
    
    
    return 0;;
    
}

/* Note: 
 *     1)
 *       Array names are pointer constants -> you can't make them point to 
 *       anything but the array they represent 
 *       
 *     2)
 *       & operator is not needed because the array name by itself 
 *       is the address of the array
 * 
 */