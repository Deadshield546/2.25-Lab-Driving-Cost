#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {
   double mileage, cost; // datatype double is used to get floating point number
   cin >> mileage >> cost; // cin is used to accept input
    
   double gas_20 = (20 / mileage) * cost; // to calculate gas cost for 20 miles
   double gas_75 = (75 / mileage) * cost; // to calculate gas cost for 75 miles
   double gas_500 = (500 / mileage) * cost; // to calculate gas cost for 500 miles
   
   // 'fixed' and 'setprecision(2)' sets the decimal value to two decimal places.
   
   cout << fixed << setprecision(2); // cout is used to display output
   cout << gas_20 << " " << gas_75 << " " << gas_500 << endl;

   return 0;
}
