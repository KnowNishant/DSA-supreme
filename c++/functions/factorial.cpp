#include<iostream>
using namespace std;
int factorial(int n){}
int main()
{
    int n,z=1;
    cout << "enter a number : " ;
    cin >> n;
   
    for(int i=1;i<=n;i++){
         z=z*i;
        
    }
    cout << "factorial is "<< z << endl;
    return 0;
}