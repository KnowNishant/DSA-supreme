#include<iostream>
using namespace std;
int main(){

    int length;
    cout << "enter the length: ";
    cin >> length;
    for(int i=0;i<length;i++){
        for(int j=length;j>i;j--){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}