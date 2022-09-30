#include <iostream>
using namespace  std ;

double findArea(double radius){
double Area= 3.14*radius*radius;
return Area;

}
int main(){

double radius;
cout << "Enter radius of circle" << endl;
cin >> radius;
double c= findArea(radius);
cout << c;
return 0;


}
