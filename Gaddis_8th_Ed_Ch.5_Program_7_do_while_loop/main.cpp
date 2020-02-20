/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on February 20, 2020, 12:55 PM
 * Purpose: This program averages 3 test scores. It repeats as 
 *          many times as the user wishes
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
    int score1, score2, score3;  // To hold test score 1,2,3
    float average;               // To hold the average of test score 
    char again;                  // To hold Y or N input 
    
 
    //Initializing do-while loop
    do{
    //User inputs three test scores
        cout<<"Enter 3 scores and I will average them"<<endl;
        cin>>score1>>score2>>score3;
        
        //Calculating and displaying the average
        average=(score1+score2+score3)/3;
        cout<<"The average = "<<average<<endl;
        
        
       //Does the user want to average another set?
        cout<<"Does the user want to average another set ? (Y/N)"<<endl;
        cin>>again;
 
    }while (again == 'Y' || again == 'y');
    

    //Exit
    return 0;
}

