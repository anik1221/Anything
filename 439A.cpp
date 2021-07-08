
#include<stdio.h>
int main()
{
    int i,s=0,b,c,x=0,y=0,z=0,v=0;
    int a[10020];
    scanf("%d %d",&b,&c);
    for(i=0;i<b;i++){
            scanf("%d",&a[i]);
        s=s+a[i];
    }
    if(s>c){
        printf("-1\n");
    }
    else if(b>1&&s==c){
        printf("-1\n");
    }
    else{
        x=(b-1)*10;
        y=x+s;
        z=c-y;
        if(y>c){
            printf("-1\n");
        }
        else{
                v=z/5;
            printf("%d\n",(b-1)*2+v);
        }


    }
    return 0;

}

