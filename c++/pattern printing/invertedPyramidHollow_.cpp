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
        for(j=0;j<length-i;j++){
            if(i==0||j==0||j==length-i-1 ){
                cout << "* ";
            }
            else{
                cout <<"  ";
            }
        }
        cout << endl;
    }

    return 0;
}