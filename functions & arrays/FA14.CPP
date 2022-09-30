
//~~~~~~~~~~~~~~~``````````````UNIQUE NUMBER``````````~~~~~~~~~~~~~~

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << " Enter the size  of the Array : " << " "  ;
    cin >> n;
    int input[100];
    for( int i = 0 ; i < n ; i++ ){
        cout << "Enter the element of input [" << i << "]" << endl;  
        cin >> input[i] ; 
    }
    cout << " UNIQUE NUMBER:" << " " ;

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
      cout << "{" << input[i] <<"}" << " "; 
  }
}
return 0 ;
}

