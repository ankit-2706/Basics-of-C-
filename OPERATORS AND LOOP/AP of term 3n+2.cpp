#include<iostream>
using namespace std;

int main(){

    
    int n;
    cin >> n;
    
    int i=1,N=1;
    while(i<=n){
        int num = 3 * N + 2;
   if(num % 4 !=0){
       cout << num << " ";
       i++;
      
   }
    N++;
    
    
        
    }
}