#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,j,k,l,s=0,x=0;
    scanf("%d",&a);
    for(i=4,j=a-4;i<=a-4,j>=4;i++,j--){
        s=0;
        x=0;

        for(k=2;k<=sqrt(i);k++){

            if(i%k==0){

                s=1;
                break;
            }
        }
        for(l=2;l<=sqrt(j);l++){

            if(j%l==0){
                x=1;
                break;
            }
        }
        if(s==1&&x==1){
            printf("%d %d\n",i,j);
            return 0;
        }
    }
    return 0;

}
