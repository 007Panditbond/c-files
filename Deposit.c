#include<stdio.h>
#include<math.h>
main()
{
        int princ,rate ,b,time,amount;
        printf("princ time\n");
        scanf(" %d %d",&princ,&time);
        if(princ<2000 && time>2)
        {
        rate=5/100;
        }
        if(princ>2000 && princ<6000 && time>2)
        {
        rate=7/100;
        }
        b=pow((1+rate),time);
        amount=princ*b;
        printf("%d ",amount);

}
