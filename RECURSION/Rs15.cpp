//~~~~~~~~~~~~~~~~~`````````````REMOVE CONSECUTIVE DUPLICATES`````````~~~~~~~~~~~~~~

#include<iostream>
using namespace std;
void removeCD( char s[]){
    if(s[0]=='\0'){         //BASE CASE 
        return;
    }
        removeCD( s+1);        //RECURSIVE CALL
        if( s[0]==s[1]){        //SMALL CALCULATION

    
        int i=1;
        for(; s[i]!='\0' ; i++){
            s[ i-1]=s[i];
    }
            s[ i-1]= s[i];
    
    }
}
    

int main(){
     char str[100];
    cout << "Enter your string"<< endl;
    cin >> str;
    removeCD(str);
    cout << str<< endl;
    return 0;
}