//~~~~~~~~~~~~~~~``````````````UNIQUE NUMBER``````````~~~~~~~~~~~~~~

#include<iostream>
using namespace std;
int findunique( int input[] , int n ){

 for ( int i =0 ; i < n ; i++){
     int j = 0;
    for ( ; j < n ; j++)
{ 
    if ( i != j && input[i] == input[j])
    {
        break;
  }
}
  if ( j == n)
  {
      
      return input[i] ;
  }
  
}
}
int main(){
    int n;
    cout << " Enter the size  of the Array : " << " "  ;
    cin >> n;
    int input[100];
    for( int i = 0 ; i < n ; i++ ){
        cout << "Enter the element of input [" << i << "]" << endl;  
        cin >> input[i] ; 
    }
    cout << findunique( input , n ) ;
    return 0;
}
