#include <iostream>
#include<string>
using namespace std;

int main() {
    
    string s,t;
    cout<<"enter the 2 words: "<<endl;
    cin>>s>>t;
    char t1[t.length()];
    
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";
    }
    
    for(int i=0;i<t.length();i++){
        cout<<t[i]<<" ";
    }
    
   
    for(int i=0,j=t.length()-1;i<t.length();i++,j--){
        t1[j]=t[i];
    }
    
   
     for(int i=0;i<t.length();i++){
        cout<<t1[i]<<" ";
    }
    
    bool is_traselated=true;
    
    if(s.length()==t.length()){
        for(int i=0;i<t.length();i++){
            if(s[i]==t1[i]){
                is_traselated=true;
            }
            else is_traselated=false;
        }
        
    }
    if(is_traselated){
        cout<<"Yes";
    }
    else cout<<"No";

    return 0;
}
/*-----------------------------------------------------------------------------------------*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



int main() {
    string word1;
    cout<<"please enter word1: ";
    cin>>word1;
    
    string word2;
    cout<<"please enter word2: ";
    cin>>word2;
    
   reverse(word2.begin(),word2.end());
    if(word1==word2){
        cout<<"Yes";
    }
    else cout<<"No";
    
    
 return 0;
}


















   
        
     
