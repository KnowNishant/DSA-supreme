#include<iostream>
using namespace std;

// int simple_interest(int p,int r,int t){
//     int si=(p*r*t)/100;
//     return si;
// }

void primenot() {
    for(int i=1;i<=100;i++){
        if(i>1){
        for(int j=2;j<i;j++){
           
            if(i%j==0){
                
                break;
            }
         else{
                cout << i << endl;
            }
        }
       
        }
        
        }
        return ;
}


int main(){

    return 0;
}