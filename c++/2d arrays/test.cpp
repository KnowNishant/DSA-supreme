#include<iostream>
using namespace std;
bool pairf(int a[],int size,int x){  
    for(int i=0;i<size;i++){
        if(a[i]==x){
            return true;
        }
    }
    return false;
    
}

int main(){
    int x;
    cin >> x;
    int a[6];
    int size=6;
    for(int i=0;i<6;i++){
        cin >> a[i];
    }
    bool z=pairf(a,size,x);
    return 0;
}