//~~~~~~~~~~~~~~~~~``````PRINTING 2D ARRAY``````````~~~~~~~~~~~~~~~~~~


#include<iostream>
using namespace std;
int main(){
   
int x[ 3 ][ 4 ] ;
for( int i = 0 ; i < 3 ; i ++){
    for(  int j = 0 ; j < 4 ; j++){
        cout << " ENter the elements of x [" << i << "]" << "[" << j << "]" << " " ;
        cin >> x[ i ][ j ] ;
    }
}
cout <<" The matrix is..." << endl;
for( int i = 0 ; i < 3 ; i ++){
      
    for( int j = 0 ; j < 4  ; j++){
      cout << x[ i ][  j ]  << " ";
    }
    cout << endl;
}
    return 0;
}