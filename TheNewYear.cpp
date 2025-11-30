//The New Year: Meeting Friends

#include <iostream>
using namespace std;

int main() {

    int x1;
    cout<<"enter the point: ";
    cin>>x1;

    int x2;
    cout<<"enter the point: ";
    cin>>x2;

    int x3;
    cout<<"enter the point: ";
    cin>>x3;
    
    int min;
   if(x1<x2 && x1<x3){
       min=x1;
   }
   else if (x2<x1 && x2<x3){
       min=x2;
   }
   else{
       min=x3;
   }
   cout<<min<<"endl";

   int max;
   if(x1>x2 && x1>x3){
       max=x1;
   }
   else if (x2>x1 && x2>x3){
       max=x2;
   }
   else{
       max=x3;
   }
   cout<<max<<"endl";


   int distance=max-min;
   cout<<distance;
    
    


    return 0;

}