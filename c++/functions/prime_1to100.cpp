#include<iostream>
using namespace std;

int primeor(int x){
    int a=0;
    for(int i=2;i<x;i++){
        if(x%i==0){
            a=1;
        }
    }
    return a;
    
}

int main(){
    int n;
    cout << "enter the value of n : ";
    cin >> n;

    for(int i =2;i<=n;i++){
        int z=primeor(i);
        if(z==0){
            cout << " " << i;
        }
    }

    return 0;
}