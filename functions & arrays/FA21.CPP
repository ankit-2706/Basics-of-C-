#include<iostream>
using namespace std;
int length (char input[]){
    int count = 0;
    for ( int  i = 0; input[i] != '\0'; i++)
    {
        count ++;
    } 
}
int main(){
   char input[100] ;
   char a;
   cout <<"Enter the string:" << endl;
   cin >> a;
   cout << " length of the string:" << length(input) << endl;
    return 0;
}