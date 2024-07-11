#include<iostream>
using namespace std;
void flip(int a[],int size){
    for(int i=0;i<size;i++){
        a[i]=!a[i];
    }
}
int main(){
    int a[]={0,1,0,1,1,0,0,1};
    int size=8;
    flip(a,size);
    for(int i=0;i<size;i++){
        cout << " "<<a[i];
    }
    return 0;
}