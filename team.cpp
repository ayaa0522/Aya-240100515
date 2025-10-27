//Team problem 
#include <iostream>
using namespace std;


int main() {

    int problem;
    cout<<"enter the numbers of problems: ";
    cin>>problem;
    
        int count = 0;

        for (int i = 0; i<problem; i++){
            cout<<"enter the 3 numbers to solve the question"<<(i+1)<<": ";
            int p ;
            int t;
            int v;
            cin>>p;
            cin>>t;
            cin>>v;

            int solve=p+t+v;
     
            if (solve >= 2) {
                count++;


            }
    }
    cout<<"the number of questions will be answered is: " <<count;
}