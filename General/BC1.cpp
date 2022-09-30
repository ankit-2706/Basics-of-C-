#include<iostream>
#include<conio.h>
using namespace std;
int main(){
     
     int n1,n2;
     cout << "Input 1st Number :" << endl;
     cin >> n1;
     cout << "Input 2nd Number :" << endl;
     cin >> n2;

    char op;
    cout << "Input an  operator: (+, -, *, /, %)" << endl;
    cin >> op;

    switch(op){
    case '+' :

    cout << n1+n2 << endl;
    break;

    case '-' :

    cout << n1-n2 << endl;
    break;

    case '*' :

    cout << n1*n2 << endl;
    break;

    case '/' :

    cout << n1/n2 << endl;
    break;

    case '%' :

    cout << n1 % n2 << endl;
    break;

    default:
    cout<<"Invalid Operator!";


    }
     
      getch();
    return 0;
}