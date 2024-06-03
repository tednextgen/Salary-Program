#include <iostream>
#include <iomanip>
using namespace std;
int main(){
   double pay;
   double hour;
   double gross;
   
   cin >> pay;
   cin >> hour;
   
   if(hour > 40){
      gross = (pay * 40) + ((hour-40) *(pay * 1.5));
   }else{
      gross = hour * pay;
   }
   cout << "Enter the hourly rate of pay: $Enter the number of hours worked, rounded to a whole number of hours:" << endl;
   cout << "Hours worked = " << hour << endl;
   cout << "Hourly pay rate = $" << fixed << setprecision(2) << pay << endl;
   cout << "Gross pay = $" << fixed << setprecision(2) << gross << endl;
   return 0;
}
