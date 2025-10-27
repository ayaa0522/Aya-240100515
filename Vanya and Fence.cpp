//Vanya and Fence
#include<iostream>
using namespace std;



int main() {
    int friends_number;
    cout<<"please enter the number of friends: ";
    cin>>friends_number;
    
    int fence_height;
    cout<<"enter the height of fence: ";
    cin>>fence_height;
    
    int friends_height[ friends_number];
    
    for(int i=0;i<friends_number;i++){
        cout<<"enter the height of person "<<(i+1)<<": ";
        cin>>friends_height[i];
        
    }
    
    
     for(int i=0;i<friends_number;i++){
    cout<<friends_height[i]<<" ";}
    cout<<endl;
    
    int width=0;

    
    for(int i=0;i<friends_number;i++){
        if(friends_height[i]>fence_height){
            width+=2;
        }
        else width+=1;
    }

    cout<<width;
    
    
    
    
 return 0;
}