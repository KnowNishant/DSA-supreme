#include<iostream>
using namespace std;
void pairs(int a[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout << "(" <<a[i] << ","<<a[j] << ")";
        }
        cout << endl;
    }
}
int main(){
    int a[]={10,20,30,40};
    int size=4;
    pairs(a,size);
    return 0;
}