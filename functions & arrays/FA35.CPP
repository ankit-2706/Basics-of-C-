//```````SUM OF EACH ROW AND EACH COLUMN OF A MATRIX```````````

#include<iostream>
using namespace std;
int main(){
    
    int num[ 20 ][ 20 ] , i , n, j ,sum[ 10 ] = { 0 } ,sum1 [ 10 ]= { 0 } ;
    cout << " Enter the number of rows and columns : " ;
    cin >> n ;
    cout << "' Enter matrix elemnts..." << endl ;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            cout << " Enter the Number in place [" << i <<"] [" << j << "] :" ;
            cin >> num[i][j];
        }
       cout << endl;    
    }
    
     for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
         
           sum [ i] = sum [i]+ num [ i ] [ j];
           sum1 [ i] = sum1 [i]+ num [ j ] [ i];
        }
       cout << endl;    
    } 

    cout << " Matrix is ......" << endl ;

     for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
         
            cout <<  num[i][j] << " ";
        }
       cout <<  sum [ i] << " " << endl;    
    }
    
     for ( i = 0; i < n; i++)
    {
           cout <<  sum1[ i] << " " ;     
        }
       
    return 0;
}