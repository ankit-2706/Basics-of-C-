
//~~~~~~~~~~~~~~~``````TTRIPLET SUM`````````````~~~~~~~~~~~~~~

#include<iostream>
#include<climits>
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
    int sum;
    cout << "Enter the value of sum :" << endl;
    cin >> sum ;
    cout << " TRIPLET with sum " <<" " << sum  << " " <<":";
    for ( int k = 1 ; k < n ; k++){
    for ( int j = 0 ; j < n ; j++){
         
    for ( int i =0 ; i < n ; i++) // for aceessing each elements...
{ 
    if (input[i] + input[  j+ 1] + input[ k+ 1] == sum){
        cout << "{" << input[i] <<" " << input[ j + 1]  << " " << input[ k+1 ] << "}" << " ";
        input[ j + 1] = INT_MIN ;
        input[ k + 1] =INT_MIN ;   
        break;
}
}
    }
}
return 0 ;
}
