#include<iostream>
using namespace std;
int main(){

    int length;
    cout << "enter length";
    cin >> length;

    for(int i=0;i<length;i++){
        for(int j=0;j<length-i-1;j++){
            cout << " ";
        }
        for(int k=0;k<i+1;k++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=0;i<length;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int k=0;k<length-i;k++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}