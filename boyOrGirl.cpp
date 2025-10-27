//Boy or Girl:

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string name;
    cout<<"please enter your name: ";
    cin>>name;
    string repeated=" ";
    

    int count =0;
    for(int i=0;i<name.length();i++){
        if(name[i]==name[i-1]){
            count++;
            repeated+=name[i];
        }
    }
    cout<<repeated<<endl;
    cout<<count<<endl;
    
    int dif=name.length()-count;
    cout<<dif<<endl;
    if(dif%2!=0){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }

   

    return 0;
}