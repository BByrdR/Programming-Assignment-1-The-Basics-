#include <iostream>
using namespace std;

int main(){

  const double Reg_Hours=40.0;
  int dependent,hours;
  double socsectax, fedinctax, stainctax, unidue, insdep;
  double grosspay, netpay, withhold;


  cout<<"Enter hours worked in a week"<<endl;
  cin>>hours;
  cout<<"Number of dependents"<<endl;
  cin>>dependent;


  if (hours > Reg_Hours)
   grosspay = 16.78 * Reg_Hours + (1.5)*(16.78)*(hours - Reg_Hours);
   else
   grosspay = 16.78 * hours;


   socsectax = .06 * grosspay;
   fedinctax = .14 * grosspay;
   stainctax = .05 * grosspay;

   if (dependent >=3.)
   insdep = 35;
   else
   insdep = 0;


   unidue = 10;
   withhold = socsectax + fedinctax + stainctax + insdep + unidue;
   netpay = grosspay - withhold;


   cout<<"gross pay = "<< grosspay<<endl;
   cout<<"Socail Security Tax = "<< socsectax<<endl;
   cout<<"Federal Income Tax = "<< stainctax<<endl;
   cout<<"State income Tax = " << withhold<<endl;
   cout<<"Total withholdings = "<< withhold<<endl;
   cout<<"Net take home pay = "<< netpay<<endl;

   return 0;
}
