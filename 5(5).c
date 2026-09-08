#include<stdio.h>
#include<math.h>
void main(){
int a,b,c,d,r1,r2;
//clrscr();
printf("\n\n\nenter the number a,b,c");
scanf("%d %d %d",&a,&b,&c);
d=b*b-4*a*c;
r1=((-b+sqrt(d))/(2*a));
r2-(-b-sqrt(d))/(2*a);
if(d<0)
printf("\nrl and r2 are imaginary %d %d",r1,r2);
else if(d==0)
printf("\nrl and r2 are equal %d %d",r1,r2);
else
printf("\nr1 and 12 are unequal %d %d",r1,r2);
}
