#include <iostream>
#include "lib.h"
using namespace std;
int main () {
   int n=0;
   cin>>n;
   float ar[n];
   for (int i=0; i<n; i++){
       cin>>ar[i];
   }
 cout<< max (ar , n)<<endl;
    return 0;
}
