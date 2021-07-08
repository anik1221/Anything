#include<stdio.h>
int main()
{
    int a,b,c,i,y=0,x=0,d=0,j,z=0;
    scanf("%d %d",&a,&b);
    if(a<b){
        c=a;
        d=b;
    }
    else{
        c=b;
        d=a;
    }
    for(i=0;i<=c;i++){
        for(j=0;j<=c;j++){

            x=(i*i)+(j);

            if(x==d){
                y=(j*j)+i;
                if(y==c){

                    z++;

                    break;
                }
            }
        }
    }
    printf("%d\n",z);
    return 0;
}
