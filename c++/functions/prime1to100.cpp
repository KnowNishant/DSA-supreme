#include<iostream>
using namespace std;

// bool isPrime(int n){
//     if(n>1){
//         for(int i=2;i<n;i++){
//             if(n%i==0){
//                 break;
//                 return false;
//             }
//         }
//     }
//     else {
//         return true;
//     }
// }
// int main(){
//     int n=100;
//     for(int i=2;i<=100;i++){
//         if(isPrime(i)) 
//           {
//             cout << i << " ";
//           }
//     }
// }

int isprime(int n){
     int a=0;
   
       
        for(int i=2;i<n;i++){
            if(n%i==0){
                a=1;
                
            }
        }
   
   return a;
}
int main(){
    int n=100;
    for(int i=2;i<=100;i++){
        int z=isprime(i);
        if(z==0){
            cout << i << " ";
        }
    }
}