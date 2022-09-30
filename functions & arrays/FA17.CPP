
//~~~~~~~~~~~~~~~``````````PAIR SUM IN AN ARRAY``````````~~~~~~~~~~~~~~

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << " Enter the size  of the Array : " << " "  ;
    cin >> n;
    cout << endl ;
    int input[100];
    for( int i = 0 ; i < n ; i++ ){
        cout << "Enter the element of input [" << i << "] :" << " ";  
        cin >> input[i] ; 
    }
    cout << endl ;
    int sum;
    cout << "Enter the value of sum : " << endl ;
    cin >> sum ;
    cout << " Pairs with sum " <<" " << sum  << " " <<":" << " " << endl ;

cout << endl ;
    for ( int j = 0 ; j < n ; j++){
         
    for ( int i =0 ; i < n ; i++)
{ 
    if (input[i] + input[  j+ 1] == sum){
        cout << "{" << input[i] <<" " << input[ j + 1] << "}" << " ";
    }
}
}
return 0 ;
}
