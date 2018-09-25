#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,l,n;

    printf("Enter the element:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            printf("%c",j+'a'-1);
      for(k=1;k<=(2*(n-i)-1);k++)
            {printf(" "); }
        for(l=i;l>=1;l--)
        {
            if(l==n)
                continue;
            printf("%c",l+'a'-1);
        }
        printf("\n");
    }




    getch();

}
