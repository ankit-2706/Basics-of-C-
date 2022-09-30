//~~~~~~~~~~~~~~~~~``````TRANSPOSE OF 3 * 3 ARRAY``````````~~~~~~~~~~~~~~~~~~


#include<iostream>
using namespace std;
int main(){
   
int x[ 3 ][ 3 ] ;
for( int i = 0 ; i < 3 ; i ++){
    for(  int j = 0 ; j < 3 ; j++){
        cout << " ENter the elements of x [" << i << "]" << "[" << j << "] :" << " " ;
        cin >> x[ i ][ j ] ;
    }
}
cout << endl ;
cout << "  The  marix is...." << endl;
for( int i = 0 ; i < 3 ; i ++){
      
    for( int j = 0 ; j < 3  ; j++){
        
      cout << x[ i ][ j ]  << " ";
    }
    cout << endl;
}
cout << " Transpose of a marix is...." << endl;
for( int i = 0 ; i < 3 ; i ++){
      
    for( int j = 0 ; j < 3  ; j++){
        
      cout << x[ j ][ i ]  << " ";
    }
    cout << endl;
}
    return 0;
}