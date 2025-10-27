// Calculating Function

#include <iostream>
using namespace std;

int sum=0;

int calc(int num){
    for(int i=1;i<=num;i++){
        if (i%2==0){
            sum+=i;
           
            
            
        }
      else
        sum-=i;
     
       
    }
    
    return sum;
}

int main() {
    int n;
    cout<<"enter number: ";
    cin>>n;
    
    cout<< calc(n);
  
   

    return 0;
}