#include<iostream>
using namespace std;
int randomp( int*p)
{
    cout << p ;
  p = p + 2 ;
  cout << p;
}
int main(){
   int x[12] = { 1, 2, 4, 6} ;
int i = 10 ;
int*p = & i ;
cout << randomp(p) << endl ;
    return 0;
}