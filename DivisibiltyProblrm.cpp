// Divisibility Problem
#include <iostream>
using namespace std;

int main() {
  
  int n;
  cout<<"the number of test cases.: ";
  cin>>n;
  int a,b;
  int result=0;
  
  

  for(int i=0;i<n;i++){
    cout<<"enter two integers a and b for round"<<(i+1)<<": "<<endl;
    cin>>a>>b;
    if(a%b==0){
        cout<<0<<endl;
    }
    else cout<<(b-(a%b))<<endl;
  
  }

 
    return 0;
}