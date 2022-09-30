//~~~~~~~~~~~~~~~~~``````SUM OF UTM & LTM  4 * 4 MATRIX``````````~~~~~~~~~~~~~~~~~~


#include<iostream>
using namespace std;
int main(){
   
int x[ 4 ][ 4 ] , sum1 = 0 , sum2 = 0 ;
for( int i = 0 ; i < 4 ; i ++){
    for(  int j = 0 ; j < 4 ; j++){
        cout << " ENter the Matrix element  x [" << i << "]" << "[" << j << "]" << " " ;
        cin >> x[ i ][ j ] ;
    }
}
cout << " The matrix is ...." << endl; 
for( int i = 0 ; i < 4 ; i ++){
    for( int j = 0 ; j < 4  ; j++){
        cout << x[ i ][ j ] << " " ;
      
    }
    cout << endl ;
}
for( int i = 0 ; i < 4 ; i ++){
    for( int j = 0 ; j < 4  ; j++){
      if ( i < j)
      {
        sum1 = sum1 + x[ i ][ j ] ;
      }
      if ( i > j)
      {
          sum2 = sum2 + x[ i ][ j ] ;
      }
    }
}
cout << endl ;
cout << " Sum of elements of UTM is: " <<" " << sum1 << endl;
cout << " Sum of elements of LTM is: " <<" " << sum2 << endl;
    return 0;
}