#include<iostream>
using namespace std;

int main(){
    int i,j;
    int a[]={10,20,30,40};
    int size=4;
    // for(i=0;i<size;i++){
    //     for(j=i;j<size;j++){
    //         cout<<"(" << a[i] << ","<<a[j]<<") ";
    //     }
    //     cout << endl;
    // }

    //  for(i=0;i<size;i++){
    //     for(j=0;j<i;j++){
    //         cout<<"(" << a[i] << ","<<a[j]<<") ";
    //     }
    //     cout << endl;
    // }

    //  for(i=0;i<size;i++){
    //     for(j=0;j<=i;j++){
    //         cout<<"(" << a[i] << ","<<a[j]<<") ";
    //     }
    //     cout << endl;
    // }

     for(i=0;i<size;i++){
        for(j=size-1;j>=0;j--){
            cout<<"(" << a[i] << ","<<a[j]<<") ";
        }
        cout << endl;
    }
    return 0;
}