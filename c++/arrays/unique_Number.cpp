#include<iostream>
using namespace std;
int finduniueNumber(int a[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^a[i];
    }
    return ans;
}
int main(){
    int a[]={2,5,6,7,8,8,2,6,5};
    int size=9;
    int num=finduniueNumber(a,size);
    cout << "the unique number is -> " << num;
    return 0;
}