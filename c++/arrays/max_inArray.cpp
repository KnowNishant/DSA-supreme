#include<iostream>
using namespace std;
void max(int a[],int size){
    int max =a[0];
    for(int i=0;i<size;i++){
        if(max < a[i]){
            max=a[i];
        }
    }
    cout << "max element is -> " << max;
}
int main(){
    int a[100];
    int size;
    cout << "enter the size of the array: ";
    cin >> size;
    cout << "enter the elements of the array";
    for(int i=0;i<size;i++){
        cin >> a[i];
    }
    max(a,size);
    
    return 0;
}