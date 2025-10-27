//Bear and Big Brother:

#include <iostream>
using namespace std;

int main() {
    int lw;
    cout<<"please enter Limak weigh: ";
    cin>>lw;
    
    int bw;
    cout<<"please enter Bob weigh: ";
    cin>>bw;
    
    int year=0;
    
    while(bw>=lw){
        lw*=3;
        bw*=2;
        year++;
        
    }
        cout<< year;

        return 0;
}