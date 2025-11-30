// New Year and Hurry
#include <iostream>
using namespace std;


int main() {
    int n;
    cout<<"enter the number of problems: ";
    cin>>n;
   
   int k;
   cout<<"enter the time need to reach the party in min: ";
   cin>>k;
   
   int time=0;
   int solved=0;
   
    
    for(int i=1;i<=n;i++){
        time +=i*5;
        if(time+k <=240){
            solved++;
        }
        else{
            break;
        }
    }
  
   cout<<solved;
   
   
  
    return 0;
}