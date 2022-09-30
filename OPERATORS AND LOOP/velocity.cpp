#include <iostream>
#include <Cmath>
using namespace std;
int calculate_velocity( int u, int a,int s){
    float v;
       v= sqrt(u*u-2*a*s);
       return v ;
}
int main ()
{
    float u,a,s ;
    cout << "Enter intial velocity :- " << endl;
    cin >> u ;

    cout << "Enter acceleration :- " << endl;
    cin >> a ;

    cout << "Enter distance covered :- " << endl;
    cin >> s ;
    // cout<<"Enter u,a,s" << endl ;
    // cin>>u>>a>>s ;
    
    cout<<"Velocity : " <<" ";
  cout << calculate_velocity( u ,a , s )  << endl ;
    return 0;
}