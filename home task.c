#include<stdio.h>
#include<conio.h>
main()
{
    int A[3][3]={{91,2,3},{-1,23,4},{2,3,6}},B[3][3]={{2,45,67},{-98,4,56},{23,12,11}},C[3][3];
    int a,b,c;
    for(c=1;c<=2;c++)
    {
        printf("\n");
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            if(c==1)
                printf("%d ",A[a][b]);
            else
                printf("%d ",B[a][b]);
        }
        printf("\n");
    }
    }
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
                C[a][b]=A[a][b]+B[a][b];
        }
        printf("\n");
    }
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
                printf("%d ",C[a][b]);

        }
        printf("\n");
    }
    getch();
}
