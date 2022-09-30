#include<iostream>
using namespace std;
int main(){
    int input[100] , n;
    cout << "ENter the size of the Array:" <<" ";
    cin >> n;
    for (int i = 0; i < n ; i++)
    {
        cout << "ENter the elements of Array input [" << i  << "] : " << " " << endl;
        cin  >> input[i] ;
    }
    for (int i = 0; i < n -1 ; i++)
    {
       
         int min = input[j] ,  minindex = i;
    for ( int j = i+1 ; j < n ; j++)
     
    {
       
        if ( input[j]< min)
        {
            min = input[j] ;
            minindex = j ;
        }
    }
    int temp = input[i] ;
    input[i] = input[minindex];
    input[minindex] = temp ;
    cout << temp ;
    }
    return 0;
}