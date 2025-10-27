#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string sum;
    string s="";
    string n;
    cout<<"enter the numbers of the sum(1,2,3): ";
    cin>> sum;
   
   for(int i=0;i<sum.length();i++){
       if(sum[i]!='+'){
           s+=sum[i];
           sort(s.begin(),s.end());
       }
   }
    
    
 
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<"+" ;
    }
    
    for(int i=0;i<s.length();i++){
        cout<<s[i] ;
        if(i!=s.length()-1){
            cout<<"+";
        }
        

    }

   
        return 0;
   }