//Bit++

#include <iostream>
#include <string>
using namespace std;

int main() { 
    int num;
    cout<<"please enter  number(1-150): ";
    cin>>num;

    
    int x=0;
    if(num>=1&&num<=150){
        for(int i=0;i<num;i++){
             cout<<"please enter the statment((++X,X++) or (--X,X--)): ";
             string stat;
             cin>>stat;
             if(stat=="++X" or stat=="X++"){
                 x++;
             }
             if(stat=="--X" or stat=="X--"){
                 x--;
             }
        }
        cout<<"the final value of X is: "<<x; 
    }
    else{
        cout<<"please enter number between 1&150 or equal to them";
    }
   

    
}