//Anton and Danik

#include <iostream>
using namespace std;

int main() {
    int game_numbers;
    cout<<"please enter the number of games: ";
    cin>> game_numbers;
    
    string letters;
    cout<<"enter the letter of the winner: ";
    cin>> letters;
    
    int a_count=0;
    int d_count=0;
    for(int i=0;i<game_numbers;i++){
        if (letters[i]=='A'){
            a_count++;
        }
        if(letters[i]=='D') { 
            d_count++;
            
        }
    }
         if(a_count>d_count){
             cout<<"Anton";
         }
         else if (a_count<d_count){
             cout<<"Danik";
         }
         else{cout<<"Friendship";}
        
    

   

    return 0;
    }