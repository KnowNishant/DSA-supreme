#include<iostream>
using namespace std;
int main(){

    int length;
    cout << "enter the length: ";
    cin >> length;
    for(int i=0;i<length;i++){
        for(int j=0;j<length-i;j++){
            cout << " "<< j+1;
        }
        cout << endl;
    }
    
    return 0;
}