#include<iostream>
using namespace std;
int main(){

    int length;
    cout << "enter the length: ";
    cin >> length;
    for(int i=0;i<length;i++){
        for(int j=length;j>i;j--){
            if(i==j-1||i==0||j==length){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}