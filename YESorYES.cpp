// YES or YES?
#include <iostream>
#include <string>
using namespace std;

int main() {
    int test_cases;
    cout<<"enter the number of test cases: ";
    cin>>test_cases;
    
    string s;

    for(int i=0; i<test_cases ;i++){
        cout<<"enter yes in any case for test"<<(i+1)<<" : " ;
        cin>>s;
    

    for(int j=0;j<3;j++){
        s[j]=tolower(s[j]);
    }

    if(s=="yes"){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    }


    return 0;

}

