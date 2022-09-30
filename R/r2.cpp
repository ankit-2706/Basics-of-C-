
#include<iostream>
using namespace std;

int fib ( int n ){
    if ( n == 1)
    {
        return 0 ;
    }

    if ( n == 2)
    {
        return 1 ;
    }
    
    int smalloutput1 = fib( n - 1 ) ;
    int smalloutput2 =   fib( n - 2) ;
    int output =  fib( n - 1 ) +  fib( n - 2) ;
    return output ;
}


int main(){
    int n ;
    cout << "  Enter n"<< endl;
    cin >> n ;
    cout << n << " " << "fibonaci term is : " << fib( n ); 
    return 0;
}