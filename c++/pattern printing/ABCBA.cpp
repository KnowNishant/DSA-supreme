#include<iostream>
using namespace std;
int main(){
int length;
cout << "enter length: ";
cin >> length;
int i,j;


for(i=0;i<length;i++){
    char ch ='A';
    for(j=0;j<i+1;j++){
        cout << ch<<" ";
       ch++;
    }
    ch--;
    while(ch>'A'){
        ch--;
        cout << ch <<" ";
    }
    cout <<endl;
}




    return 0;
}