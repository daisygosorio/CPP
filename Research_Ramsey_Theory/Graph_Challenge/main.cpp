/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on June 28, 2021, 4:03 PM
 * Purpose: Determine if two graphs are isomorphic 
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;


int main(int argc, char** argv) {
    //Declare Variables
    int v=0;//holds the number of vertices
    int SIZE=4;
    int a[SIZE][SIZE];
    int perLine=4;
    int total=0;//total amount in rows 
    string string1=to_string(total);
    
    //Fill 2D-Array
    for (int i=0;i<4;i++){
        for (int j=0; j<4;j++){
            cout<<"a["<<(i+1)<<"]["<<(j+1)<<"] = ";
            cin>>a[i][j];
        }
    }
    
    
    //Print 2D-Array as Matrices 
    for (int i=0; i<4;i++){
        for (int j=0;j<4;j++){
            cout<<a[i][j]<<" | ";
        }
        cout<<endl;
    }
    
    //Checking individual rows sum
    for (int i=0; i<4;i++){
        for (int j=0;j<4;j++){
            total+=a[i][j];
        }
        cout<<total<<endl;
        cout<<endl;
        total=0;
    }
    
    //Checking individual columns sum
    for (int i=0; i<4;i++){
        for (int j=0;j<4;j++){
            total+=a[j][i];
        }
        cout<<total<<endl;
        cout<<endl;
        total=0;
    }
   
    //Store Target Graph as Array
    int t[4][4]={1, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1};
    
    
    //Print 2D-Array as Matrices for target graph
    for (int i=0; i<4;i++){
        for (int j=0;j<4;j++){
            cout<<t[i][j]<<" | ";
        }
        cout<<endl;
    }
    
    
    string string2;
    //Checking individual rows sum of target graph
    for (int i=0; i<4;i++){
        for (int j=0;j<4;j++){
            total+=t[i][j];
        }
        cout<<total<<endl;
        string2+=to_string(total);
        cout<<endl;
        total=0;
    }
    cout<<string2<<endl;
    
    
    //Checking individual columns sum of target graph 
    for (int i=0; i<4;i++){
        for (int j=0;j<4;j++){
            total+=t[j][i];
        }
        cout<<total<<endl;
        cout<<endl;
        total=0;
    }
    
    //Output 

    return 0;
}



