#include <iostream>
#include <vector>
#include <list>
using namespace std;
list <int> solve( vector <int> ip) {

   list <int> op( ip.begin(), ip.end() );
   return op;
}
int main() {
   vector <int> ip( { 15, 20, 65, 30, 24, 33, 12, 29, 36, 58, 96, 88, 30, 71 } );
   list <int> op = solve( ip );
   cout<< "The input vector is: ";
   for( int i : ip ) {
      cout<< i << " ";
   }
   cout << "The output list is: ";
   for( int j : op ) {
      cout << j << " ";
   }
   return 0;
}
