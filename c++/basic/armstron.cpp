#include<iostream>
#include<math.h>
using namespace std;
int digits(int n ){
    int count=0;
    while(n>0){
        n=n/10;
        count ++;
    }
    return count;
}
int main(){
    int n;
    cout << "enter a number : "; 
    cin >> n;       //input
    int z= digits(n);
    // armstrong
    int store=n;
    int sum =0;
    while(n>0){
        int ld= n%10;
        sum=sum+round(pow(ld,z));
        n=n/10;
    }
    
    if(sum==store){
        cout << store <<" is armstrong";
    }
    else{
        cout << store << " not armstrong";
    }
    return 0;
}