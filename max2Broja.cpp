#include <stdio.h>
int main() {
  int n, max1, max2, temp;
  if (scanf("%d%d", &max1, &max2) == 2) {//ako vneseme 2 maximum broja
  if (max2>max1){//ako max2 e pogolem od max1
  temp = max1;//togas max1 smesti go vo pomosna promenliva
  max1 = max2;
  max2 = temp;
  }
  while(scanf("%d", &n)) {//se dodeka vnesuvame broj
  if(n > max1){
  max2 = max1;
  max1 = n;
  } else if (n>max2) {
  max2 = n;
  }
  }
  printf("%d\n", max1);
  printf("%d\n", max2);
  } else {
  printf("Vnesete najmalku 2 broja");
  }
  return 0;
}

