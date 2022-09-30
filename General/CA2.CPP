//~~~~~~~~~~~~~~~~~~~~``````Cin.getline``````````~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;
int main(){
    
char input[100];
    cout << "Enter the string" << endl;
    cin.getline(input , 100) ;    //cin.getline is a function...
                                  //this function does not break in btw the string..
    cout << input << endl;         // breaks only when line ends,or when switched to next line..
    return 0;
}