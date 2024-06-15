#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "enter first number: ";
    cin >> a;
    cout << "enter second number: ";
    cin >> b;
    char sign;
    cout << "pease select a operator * + / - % " ;
    cin >> sign;
    
    switch(sign){
        case '+':
        cout <<a+b;
            break;
        case '-':
        cout <<a-b;
            break;
        case '*':
        cout <<a*b;
            break;
        case '/':
        cout <<a/b;
            break;
        case '%':
        cout <<a%b;
            break;
        default :
        cout << "invalid selection";
            break;
    }
    return 0;
}