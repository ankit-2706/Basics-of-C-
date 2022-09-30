//~~~~~~~~~~~~~~```````introduction to character array``````````~~~~~~~~~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;
int main(){
    char input[100];
    cout << "Enter the string" << endl;
    cin >> input ;        // cin basically breaks when "space,tab or numeric" is introduce in btw string.
    cout << input << endl;
    return 0;
}