//~~~~~~~~~~~~~~~~~~```````````POWER``````````````~~~~~~~~~~~~~~

#include<iostream>
#include<Cmath>
using namespace std;
float power(float x, float n){
    if(n==0){                                //BASE CASE
        return 1;
}
   
float smalloutput = pow( x , n-1 );          //ASSUMED
float output = x*smalloutput;              //INDUCTION STEP
return output ;
}

int main(){
float x,n;
cout << "Enter base number"<< endl;
cin >> x;
cout << "Enter power number"<< endl;
cin >> n;
cout << power(x,n);
    return 0;
}