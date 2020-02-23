#include<stdio.h>
void main()
{
    int n,a,i,total,nm;

    printf("Enter The No Of Groups\n");
    scanf("%d",&n);

    printf("Enter The a\n");
    scanf("%d",&a);

    for(i=1;i<=n;i++)
    {
        total=a*((n*(n+1))/2);
    }

    nm=total/30;

    if(total%30==0)
        printf("The Number Of Bus = : %d",nm);
    else
        printf("The Number Of Bus = : %d",nm+1);



}
