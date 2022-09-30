//~~~~~~~~~~~~~~~~~~~```````REPLACE CHARACTER````````~~~~~~~~~~~~~~

#include<iostream>
using namespace std;
void  replacecharacter( char s[], char c, char d){
    if ( s[0]=='\0'){
        return ;
    }
    if( s[0]=='c'){
        s[0]='d';
    }
    replacecharacter( s+1 , c,d);

}
int main(){
    char str[100],c,d;
    cout << "Enter your string"<< endl;
    cin >> str;
    cout << "Enter 2 characters"<< endl;
    cin >> c >> d;
 replacecharacter(str, c,d);
    cout << str<< endl;
    return 0;
}