#include <stdio.h>

int main() {
   int array[10] = { 0, 2, 4, 6, 8, 1, 3, 5, 7, 9};
   int even[10], odd[10];
   int loop, e, d;
   
   e = d = 0;
   
   for(loop = 0; loop < 10; loop++) {
      if(array[loop]%2 == 0) {
         even[e] = array[loop];
         e++;
      } else {
         odd[d] = array[loop];
         d++;
      }
   }

   printf(" Original : ");
   
   for(loop = 0; loop < 10; loop++)
      printf("%d ", array[loop]);

      printf("\n");
      printf("After splitting from middle");
       
   printf("\n Array 1 : ");
   
   for(loop = 0; loop < e

; loop++)
      printf(" %d", even[loop]);   

   printf("\n Array 2 : ");
   
   for(loop = 0; loop < d; loop++)
      printf(" %d", odd[loop]);   

    printf("\n");  

   return 0;
}