#include<iostream>
using namespace std;
int pass(int a[],int size){
    for(int i=0;i<5;i++){
        cout << a[i];
    }
}
int main(){
    int a[5];
    cout << "enter elements: ";
    int size=5;
    for(int i=0;i<5;i++){
        cin >> a[i];
    }
    pass(a,size);
    return 0;
}