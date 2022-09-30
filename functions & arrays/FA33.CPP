//~~~~~~~~~~~~~~~~~~~~``````````DYNAMIC MEMEORY ALLOCATION```````````~~~~~~~~~~~~~~~~~

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout << " Enter the size of the array" <<" " ;
    cin >> n;
int* p = new int[ n ] ;
cout << "Enter the elements of the array" << endl;
      for (int i = 0; i < n ; i++)
      {
        cin >> p[ i ] ;
      }
      
    int max = INT_MIN; 
    for (int i = 0; i < n; i++)
    {
      if ( max < p[i]){
          max = p[ i];
      }
    }
    cout << " Largest element is :" << max << endl;  
       return 0;
}