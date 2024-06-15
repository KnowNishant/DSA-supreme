#include<iostream>
using namespace std;
int main(){
    int length;
    cout << "enter length: ";
    cin >> length;
    int i,j;
    for(i=0;i<length;i++){
        for(j=0;j<(2*i)+1;j++){
            if(j%2!=0 ){
                cout << "* ";
            }
            else{
                cout <<i+1<<" ";
            }
        }
        cout << endl;
    }
    for(i=0;i<length-1;i++){
        for(j=0;j<(2*(length-1)-(2*i)-1);j++){
            if(j%2!=0 ){
                cout << "* ";
            }
            else{
                cout <<(length)-(i)-1<<" ";
            }
        }
        cout << endl;
    }
    return 0;
}