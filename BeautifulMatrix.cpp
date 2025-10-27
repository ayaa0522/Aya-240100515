//Beautiful Matrix (problem)
#include <iostream>
using namespace std;

int main() {
    int matrix[5][5];
    cout<<"enter the numbers of the array: \n";
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];
        }
    }
    //specify where the one , i want to move it to 3rd r and c
    
     int move_steps=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           if(matrix[i][j]==1){
              cout << "The element 1 is at row " << i + 1 
                     << " and column " << j + 1 << endl;
               
              
             int move_steps= (3-(i+1))+ (3-(j+1));
           }
           }
    }
    cout<<"the number of steps are: "<< move_steps;
    }