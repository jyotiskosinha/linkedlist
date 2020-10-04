#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main(void)
{ 
 double val,ans;
 printf("Enter value:");
 scanf("%lf", &val);
 if(val>=0 && val<=1){
 		ans= sin(val);
    printf("sin(%.2lf)= %.2lf \n\n",val,ans );
 }
   
 else{
 	printf("value out of range:(0,1)");
 }
 
return 0;
}
