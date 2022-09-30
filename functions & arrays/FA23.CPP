//~~~~~~~~~~~~~~~~~~~~~~`````BUBBLE SORT``````````~~~~~~~~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;

void bubblesort(  int input[] ,int n ){
    for( int i = 1 ; i < n ; i++ ){     // "i" is for no. of rounds..
for( int j = 0 ; j <= n - i ; j++ ){    // "j" is for comparision 
    if ( input[ j ] > input[ j +1 ] )
    {    int temp = input[ j ];
         input[ j ] = input[ j+ 1 ] ;  //SWAPING..
         input[ j + 1] = temp ;
    }
}
    }
}
int main(){
    int input[100] , n;
    cout << "ENter the size of the Array:" <<" " ;
    cin >> n;
    for ( int i = 0; i < n ; i++ )
    {
       cout << "Enter the elements of input [" << i << "]" << " " ;
       cin >> input[i] ;
    }
    cout <<" SORTED ARRAY:" << " " ;
    bubblesort( input , n);
    for( int i = 0 ; i < n ; i ++ ){
        cout << input[i] << " ";
    }
    return 0;
}