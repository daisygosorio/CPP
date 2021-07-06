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
    int a[4][4];//Inputed Graph 
    int t[4][4]={{1, 0, 0, 1 }, 
                 {1, 1, 0, 1 },
                 {0, 0, 1, 0 },
                 {1, 1, 0, 1 }};//Target Graph
    int k=0;//counter for Isomorphic
    int total=0;
    
    //Input Graph
    for (int i=0;i<4;i++){
        for (int j=0; j<4;j++){
            cout<<"a["<<(i+1)<<"]["<<(j+1)<<"] = ";
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<endl;
    
    
    //Print Input Graph as Matrix 
    cout<<"Inputed Graph"<<endl;
    cout<<endl;
    for (int i=0; i<4;i++){
        for (int j=0;j<4;j++){
            cout<<a[i][j]<<" | ";
        }
        cout<<endl;
    }
    
    //Sum an individual row - Inputed Graph
    string string4;
    for (int i=0; i<4;i++){
        for (int j=0;j<4;j++){
            total+=a[i][j];
        }
        string4+=to_string(total);//convert int -> string
        total=0;
    }
    cout<<"Sum of row : "<<string4<<endl;
    
    //Sum an individual columns - Inputed Graph 
    string string5;
    for (int i=0; i<4;i++){
        for (int j=0;j<4;j++){
            total+=a[j][i];
        }
        string5+=to_string(total);//convert int -> string 
        total=0;
    }
    cout<<"Sum of column : "<<string5<<endl;
    cout<<endl;//visual aspect needed
    cout<<endl;//visual aspect needed
   
    
    //Print Target Graph as Matrix
    cout<<"Key Graph"<<endl;
    cout<<endl;//visual aspect needed 
    for (int i=0; i<4;i++){
        for (int j=0;j<4;j++){
            cout<<t[i][j]<<" | ";
        }
        cout<<endl;
    }
    
    
    string string2;
    //Sum of individual rows - Target graph
    for (int i=0; i<4;i++){
        for (int j=0;j<4;j++){
            total+=t[i][j];
        }
        string2+=to_string(total);
        total=0;
    }
    cout<<"Sum of rows :"<<string2<<endl;
    
    
    
    string string3;
    //Sum of individual column - Target graph 
    for (int i=0; i<4;i++){
        for (int j=0;j<4;j++){
            total+=t[j][i];
        }
        string3+=to_string(total);
        total=0;
    }
    cout<<"Sum of columns :"<<string3<<endl;
    
    
    //Drawing Conclusions
    cout<<endl;
    cout<<"Conclusion: "<<endl;
    //Comparing Rows and Columns 
    if(string4.compare(string2)!=0){
        cout<<"Rows are not the same"<<endl;
        if(string5.compare(string3)!=0)
            cout<<"Columns are not the same"<<endl;
          else 
            cout<<"Columns are the same"<<endl;
    
    }
    else{
        cout<<"Rows are the same "<<endl;
        if(string5.compare(string3)!=0)
           cout<<"Columns are not the same"<<endl;
        else
            cout<<"Columns are the same"<<endl;
    
    }
    
    //Check if Isomorphic
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if (a[i][j]=!t[i][j])
                k++;//counter increments with every value that does not match
        }
    }
    
    if(k>0)
        cout<<"Graphs are not Isomorphic"<<endl;

    return 0;
}



