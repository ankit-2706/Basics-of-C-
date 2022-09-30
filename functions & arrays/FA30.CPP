//~~~~~~~~~~~~~~~~~~````SUM OF ROW AND COLUMN````````~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;
int main(){
    
int x[ 3 ][ 4] , SumR = 0 , SumC = 0, i , j ;
for( i = 0 ; i < 3 ; i ++){
    for( j = 0 ; j < 4; j++){
        cout << " ENter the elements of Array x [" << i << "]" << "[" << j << "]" << " " ;
        cin >> x[ i ][ j ] ;
    }
}
cout << " THe matrix is ....." << endl;
for( i = 0 ; i < 3 ; i ++){
    for( j = 0 ; j < 4 ; j++){
         cout << x[ i ][ j ] << " " ;
          
         }
     cout << endl; 
    SumR = SumR + x[ i ][ j ] ;
    SumC = SumC + x[ j ][ i ] ;
    }
   cout << endl;
    cout << "Sum of row elements are:" << SumR << endl;
    cout << "Sum of column elements are:" << SumC << endl ;
    return 0;
}


























































































