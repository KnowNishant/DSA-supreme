#include<iostream>
using namespace std;
int main()
{
    int length;
    cout << "enter the length: ";
    cin >> length;
    int i,j;
    for(i=0;i<length;i++){
        for(j=0;j<i+1;j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;

}