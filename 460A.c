#include<stdio.h>
int main()
{
   int a,b,s,x,y=0,d=0;
   scanf("%d %d",&a,&b);
   s=a;
   x=1;
   while(x!=0){
    x=a/b;
    d=a%b;
    y=y+x;
    a=x+d;


   }
   if((s+y)%b==0){
   printf("%d\n",s+y+1);
   }
   else{
   printf("%d\n",s+y);
   }
   return 0;
}

