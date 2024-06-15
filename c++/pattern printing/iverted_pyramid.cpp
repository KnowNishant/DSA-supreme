#include<iostream>
using namespace std;
int i,j,k;
int main(){

    int length;
    cout << "enter the length";
    cin >> length;
    for(i=0;i<length;i++){
        for(j=0;j<i;j++){
            cout << " ";
        }
        for(k=0;k<length-i;k++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}