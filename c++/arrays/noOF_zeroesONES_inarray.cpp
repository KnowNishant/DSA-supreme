#include<iostream>
using namespace std;
int check(int a[],int size){
    int count =0;
    for(int i=0;i<size;i++){
        if(1&a[i]==1){
            count++;
        }
    }
    return count ;
}
int main(){ 
    int a[7]={0,1,1,1,0,0,1};
    int size=7;
    int store =check(a,size);
    cout << "No of zeores -> "<<(size-store) << endl;
    cout << "No of ones -> "<< store;
    return 0;
}