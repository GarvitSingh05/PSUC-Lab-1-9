#include<stdio.h>

int main(){
   int choice;
   printf("Enter\n1 to find area of Triangle\n2 for finding area of Circle\n3 for finding area of Rectangle\n");

   scanf("%d",&choice);

   switch(choice) {
      case 1: {
         int base, height;
         float area;
         
         printf ("Enter base and height of the triangle\n");
         scanf ("%d%d",&base, &height);
         
         area = (base * height) / 2;
         
         printf ("Area of Triangle is %.3f\n",area);
         
         break;
      }
      case 2: {
         float radius,area;
         
         printf ("Enter Radius of Circle\n");
         scanf ("%f",&radius);
         
         area = 3.14159*radius*radius;
         
         printf ("Area of Circle %.3f\n",area);
         
         break;
      }
      case 3: {
         float length,breadth,area;
         
         printf ("Enter Length and Breadth of Rectangle\n");
         scanf ("%f %f",&length,&breadth);
         
         area = length*breadth;
         
         printf ("Area of Rectangle is %.3f\n",area);
         
         break;
      }
      
      default:{
         printf("Wrong input\n");
         break;  
      }
   }
}     