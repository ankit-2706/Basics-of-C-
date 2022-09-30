
//~~~~~~~~~~~~~~~``````````````DUPLICATE NUMBER``````````~~~~~~~~~~~~~~

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
    cout << " DUPLICATE NUMBER:" << " " ;

 for ( int i =0 ; i < n ; i++)
     
    for ( int j = i+1 ; j < n ; j++)
{ 
    if (input[i] == input[j]){
        cout << input[i] <<" " ;
    }
}
return 0 ;
}
