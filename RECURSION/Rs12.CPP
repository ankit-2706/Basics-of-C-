//~~~~~~~~~~~~~~~~~~~```````LENGTH OF A STRING````````~~~~~~~~~~~

#include<iostream>
using namespace std;
int length( char s[]){
    if( s[0]=='\0'){  //BASE CASE
        return 0;
    }
    int smallerlength= length( s+1);   //RECURSIVE CALL
    return 1+ smallerlength ;         // SMALL CALCUALTION
}

int main(){
    char str[100];
    cout << "Enter your string"<< endl;
    cin >> str;
    int l= length(str);
    cout << l<< endl;
    return 0;
}