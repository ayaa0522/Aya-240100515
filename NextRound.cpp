//Next Round

#include <iostream>
using namespace std;

int main() {
    int n;
    int k;
    cout<<"enter the number of participants and the place: ";
    cin>>n>>k;
    
    int score[n];
    cout<<"enter the score of the participants: ";
    for(int i=0;i<n;i++){
        cin>>score[i];
    }
    int count=0;
 
    //   for (int i = 0; i < n; i++) {
    //     if (score[i] >= score[k - 1] && score[i] > 0) {
    //         count++;
    //     }
    // }
        cout<<count;
    return 0;
}