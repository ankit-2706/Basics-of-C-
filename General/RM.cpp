#include <iostream>
using namespace std;
int main (){
int order,no_deals;
cout << "|*-------------------------------------MENU------------------------------*|" << endl;
cout << endl;
cout << " (1) Chole Bhature                                 RS 120 only. " << endl;
cout << " (2) Paneer Kulche                                 RS 140 only. " << endl;  
cout << " (3) Pizzaa                                        RS 200 only. " << endl;
cout << " (4) Nawabi Rice                                   RS 100 only. " << endl;
cout << " (5) Coke                                          RS  60 only. " << endl;
cout << endl;

cout << "please select the order number : " ;
cin >> order;
cout << "Please enter the number of deals : " ;
cin >> no_deals;
cout << endl;

switch(order){
            
   case 1 :

cout << "Order : Chole Bhature." << endl;
cout << "Number of deals :" << no_deals << endl;
cout << "Price of each deal : RS 120 only." << endl;
cout << "Total price :" << "RS" << 120*no_deals << " " << "only" << endl;
cout << endl;
cout << "~--------------------THANK YOU FOR COMING-----------------------~" << endl;
break;

   case 2 :

cout << "Order : Paneer Khulche." << endl;
cout << "Number of deals :" << no_deals << endl;
cout << "Price of each deal : RS 140 only." << endl;
cout << "Total price :" << "RS" << 140*no_deals << " " << "only" << endl;
cout << endl;
cout << "~--------------------THANK YOU FOR COMING-----------------------~" << endl;
break;

case 3  :

cout << "Order :  Pizzaa." << endl;
cout << "Number of deals :" << no_deals << endl;
cout << "Price of each deal : RS 200 only." << endl;
cout << "Total price :" << "RS" << 200*no_deals << " " << "only" << endl;
cout << endl;
cout << "~--------------------THANK YOU FOR COMING-----------------------~" << endl;
break;

case 4 : 

cout << "Order : Nawabi rice." << endl;
cout << "Number of deals :" << no_deals << endl;
cout << "Price of each deal : RS 100 only." << endl;
cout << "Total price :" << "RS" << 100*no_deals << " " << "only" << endl;
cout << endl;
cout << "~--------------------THANK YOU FOR COMING-----------------------~" << endl;
break;

case 5 :

cout << "Order : Coke" << endl;
cout << "Number of deals :" << no_deals << endl;
cout << "Price of each deal : RS 60 only." << endl;
cout << "Total price :" << "RS" << 60*no_deals << " " << "only" << endl;
cout << endl;
cout << "~--------------------THANK YOU FOR COMING-----------------------~" << endl;
break;
}

return 0;

}













































