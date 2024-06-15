#include<iostream>
using namespace std;
int main(){
    int length;
    cout << "enter the length";
    cin >> length;
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<i+1;j++){
            if(i==j||j==0||i==length-1){
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