#include<iostream>
using namespace std;
int main(){
  int a,b;
  cout << "enter the values of a and b : ";
  cin >> a >> b;
  a=a+b;
  b=a-b;
  a=a-b;
  cout << "a -> " <<a<<endl;
  cout << "b -> " << b<<endl;
  cout << "Numbers are swapped";
    return 0;
}