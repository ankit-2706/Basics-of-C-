
//~~~~~~~~~~~~~~~``````````````INSERTION OF AN  ARRAY```````````~~~~~~~~~~~~~~

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n , m ;
    cout << " Enter the size  of the Array1 : " << " "  ; // taking size input of an array..
    cin >> n;
    cout << " Enter the size  of the Array2 : " << " "  ;
    cin >> m;
    int input1[100], input2[100] ;
    for( int i = 0 ; i < n ; i++ ){        // taking numbers of ana arary..
        cout << "Enter the element of input1[" << i << "]" << endl;  
        cin >> input1[i] ;
    } 
    for( int j = 0 ; j < m ; j++ ){
        cout << "Enter the element of input2[" << j << "]" << endl;  
        cin >> input2[j] ; 
    }
    cout << " COMMON NUMBERS :" << " " ;

 for ( int i =0 ; i < n ; i++ ){ // for array 1...
    for ( int j = 0 ; j < m ; j++) // for array 2...
{ 
    if (input1[i] == input2[j]){
        cout << input1[i] <<" " ;
        input2[j] = INT_MIN ; // supposing it to be smallest number so that next time 
        break ;               // jb isse compare ho to ye count me /or equal na aaye!
    }
 }
 }
 return 0 ;
    }