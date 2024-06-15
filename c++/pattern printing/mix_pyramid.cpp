#include<iostream>
using namespace std;
int main(){
    int i,j,length;
    cout << "enter the length: ";
    cin >> length;
    for(i=0;i<length;i++){
       for(j=0;j<length-i;j++){
        cout << "*";
       }
       for(j=0;j<(2*i)+1;j++){
        cout << " ";
       }
       for(j=0;j<length-i;j++){
        cout << "*";
       }
       cout << endl;
    }
     for(i=0;i<length;i++){
       for(j=0;j<i+1;j++){
        cout << "*";
       }
       for(j=0;j<(2*length)-(2*i)-1;j++){
        cout << " ";
       }
       for(j=0;j<i+1;j++){
        cout << "*";
       }
       cout << endl;
    }
    return 0;
}