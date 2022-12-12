#include "lib.h"
float max(float a[], int n){
  float b=1;
  for(int j=0;j<n;j++){
    if(a[j]>b){
      b=a[j];
    }
  }
  return b;
}
