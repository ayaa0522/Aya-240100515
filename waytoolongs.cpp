//Way Too Long Words

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number of words: ";
    cin >> num;
     

    for (int i = 0; i < num; i++) {
        string word;
        cout<<"please enter word: ";
        cin >> word;
  
        
        if (word.length() > 10) {
            cout << word[0] << word.length() - 2 << word[word.length() - 1]<<endl ;
        } else {
            cout << word <<endl ;
        }
    }
        
        return 0;
        
}