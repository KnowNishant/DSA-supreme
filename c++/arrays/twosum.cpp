#include<iostream>
using namespace std;
int sumcheck(int a[],int size,int target){
    int b=0;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(target==(a[i]+a[j])){
                b=1;
            }
            
        }
    }
    return b;
}

int main(){
    int a[]={10,5,20,15,30};
    int size=5;
    int target =32;
    int z =sumcheck(a,size,target);
    if(z==1){
        cout << "target sum exists in the array ";
    }
    else 
    cout <<" target sum does not exist in the array";
    return 0;
}