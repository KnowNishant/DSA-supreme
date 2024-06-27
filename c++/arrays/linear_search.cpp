#include<iostream>
using namespace std;
int Lsearch(int a[],int size,int target){
    int b=0;
    for(int i=0;i<size;i++){
        if(a[i]==target){
            b=1;
            return b;
            break;
        }
      
    }
}
int main(){
    int a[100];
    int size;
    int target;
    cout << "enter the size of the array: ";
    cin >> size;
    cout << "eneter the elements of array: ";
    for(int i=0;i<size;i++){
        cin >> a[i];
        }
    cout << "enter the target element";
    cin >> target;
   int check= Lsearch(a,size,target);
   if(check==1){
    cout << "element found";
    }
    else 
    cout << "not found";
    return 0;
}