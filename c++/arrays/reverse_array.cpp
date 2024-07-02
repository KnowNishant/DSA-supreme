#include<iostream>
using namespace std;
void reverse(int a[],int size){
    int i=0,j=size-1;
    int temp;
   while(i<=j){
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
   }
}
int main(){
    int a[100];
    int size;
    cout << "enter the size -> ";
    cin >> size;
    cout << " enter the elements -> ";
    for(int i=0;i<size;i++){
        cin >> a[i];

    }
    reverse(a,size);
     for(int i=0;i<size;i++){
        cout << a[i];
    }
    return 0;
}