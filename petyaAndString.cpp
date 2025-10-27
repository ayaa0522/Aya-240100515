//Petya and Strings:

#include <iostream>
using namespace std;

int main() {
    string word1;
    cout<<"please enter the first word: ";
    cin>>word1;
    
    string word2;
    cout<<"please enter the scond word: ";
    cin>>word2;
    
    
    if(word1.length()==word2.length()){
        if(word1>word2){
            cout<<"1";
        }
        else if(word1<word2){
            cout<<"-1";
        }
        else{
            cout<<"0";
        }
    }
    else{
        cout<<"please enter the same number of characters.";
    }
    
    return 0;
    }
