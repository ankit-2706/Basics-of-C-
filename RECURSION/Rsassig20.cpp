//~~~~~~~~~~~~~~~~~~~`````````STAIRCASE PROBLEM```````~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;
int staircase( int n ){
if(n==0){               //BASE CASE..
    return 1;        
}
if( n==1){            // SMALL CALCULATIONS..
    return 1;
}
else if( n==2){
    return 2;
}
else if( n==3){
    return 4;
}
else{
 int x= staircase( n-1 );       //RECURSIVE CALLS..
 int y= staircase( n-2 );
 int z= staircase( n-3 );
 return x+y+z;
}
}

int main(){
    int n,output ;
    cout <<"Enter Number of stairs-->"<< endl;
    cin >> n;
    output = staircase( n );
    cout << output ;
    return 0;
} 