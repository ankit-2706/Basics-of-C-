//~~~~~~~~~~~~~~~~~~~~~~`````INSERTION SORT``````````~~~~~~~~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;

void insertionsort(  int input[] ,int n ){
for( int i = 1 ; i < n ; i++ ){
    int current = input[i] ;
    int j = i - 1 ;
    for(  ; j >=0 ; j-- ){
        if ( current < input[j])
        {
          input[ j + 1] = input[j] ;
        }
        else{
            break;
        }
    }
      input[ j + 1] = current ;
}
 cout << endl;
}
int main(){
    int input[100] , n;
    cout << "ENter the size of the Array:" <<" " ;
    cin >> n;
    for ( int i = 0; i < n ; i++ )
    {
       cout << "Enter the elements of input [" << i << "]" << " " ;
       cin >> input[i] ;
    }
    insertionsort( input , n);
    for( int i = 0 ; i < n ; i ++ ){
        cout << input[i] << " ";
    }
    return 0;
}