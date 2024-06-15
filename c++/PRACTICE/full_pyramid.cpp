#include<iostream>
using namespace std;
int main(){
int length;
cout << "enter the length: ";
cin >> length;
int i,j;
for(i=0;i<length;i++)
    for(j=0;j<length-i-1;j++){
        cout << " ";
    }
    for(j=0;j<i+1;j++){
        cout << "* ";
    }
    cout << endl;
    //changes
    //cout
    //try commiting

}

return 0;
}