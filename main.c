#include <stdio.h>
#include <stdlib.h>

int main()

{

double a,b;

printf("enter a:");

scanf("%f",&a);

printf("enter b:"); scanf("%lf",&b);

// Swapping

//a=(initial a=intial_b)

a=a-b;

//b=(initial a-initial b)+initial b-initial a

b=a+b;

//a=initial _a-(initial _a-initial _b)=initial _b a=b-a;

printf("after swapping a=!f\n", a); printf("after swapping b=!f\n",b);

return 0;

}
