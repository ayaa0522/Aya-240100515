// Is your horseshoe on the other hoof?

#include <iostream>
using namespace std;
#include <algorithm>



int main() {
    int n;
    cout<<"enter number of horseshoe: ";
    cin>>n;
    
 int arr[n];
 for(int i=0;i<n;i++){
     cout<<"enter the color of horseshoe by numbers"<<(i+1)<<": ";
     cin>>arr[i];
 }
 sort(arr,arr+n);
 
  for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
     
 }
 
 int count=0;
  for(int i=0;i<n;i++){
      if(arr[i]==arr[i-1]){
      count;}
      else count++;
  }
  cout<<count;
  cout<<n-count;
  
   

    return 0;
}