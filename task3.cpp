#include<iostream>
using namespace std;
float taxCalculator (char type, float price);
main()
{
 float price;
 char type;
 float totalPrice;
 
 float result;
 cout <<"ENTER THE PRICE OF THE VEHICLE= ";
 cin  >>price;
 cout <<"ENTER THE TYPE OF VEHICLE= ";
 cin  >>type;
 result= taxCalculator (type, price);
 cout <<"THE FINAL PRICE ON A VEHICLE OF TYPE " <<type<<" AFTER ADDING THE TAX " <<totalPrice;
}
float taxCalculator (char type, float price)
{
 float  totalPrice;
 float tax;
 string vehicle;
  if (type == 'M')
 {
  vehicle= "motorcycle";
  tax=( price * 6 )/ 100;
  totalPrice = price * tax;
  return totalPrice;
 }
 if (type == 'E')
 {
   vehicle= "electric";
   tax=( price * 8 )/ 100;
   totalPrice = price * tax;
   return totalPrice;
 }
 if (type == 'S')
 { 
   vehicle="sedan";
   tax=( price * 10)/ 100;
   totalPrice = price * tax;
   return totalPrice;
 }
 if (type == 'V')
 { 
   vehicle= "van";
   tax=( price * 12 )/ 100;
   totalPrice = price * tax;
   return totalPrice;
 }
 if (type == 'T')
 { 
   vehicle= "truck";
   tax=( price * 15 )/ 100;
   totalPrice = price * tax;
   return totalPrice;
 }
 return 0;
}