#include<iostream>
using namespace std;

bool is_sorted ( int a [ ], int size) {
    if ( size == 0 || size == 1 ){
    return true ;
    }

    if (a [ 0 ] > a [ 1 ] )
    
{
    return false ;
}
 ;
 bool isSmalleroutput = is_sorted( a + 1 , size- 1);
 return isSmalleroutput ;
 }
 
int main(){
    int n;
    cout << " Enter the size of  the array" << endl ;
    cin >> n ;
    int *a = new int [ n ] ;
    for ( int i = 0 ; i< n ; i++ ) {
    cout << " Enter the element in a [" << i << " ] :" << " " ;
         cin >> a[ i ] ; 
    }
  cout << " for SORTED ARRAY,display 1 else display 0"<< endl;
cout << is_sorted( a , n ) ;


return 0;



}