//Soldier and Bananas:
#include <iostream>
using namespace std;

int main() {
    int k;
    cout<<"please enter the price of the banana: ";
    cin>>k;
    
    int n;
    cout<<"please enter the dollars: ";
    cin>>n;
    
    int w;
    cout<<"please enter the numbers of bananas: ";
    cin>>w;

        int total=(k*(w*(w+1)))/2;
        cout<<total<<endl;
        
        int borrow=total-n;
        cout<<borrow<<endl;

 return 0;       
}