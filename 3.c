/**************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

***************************/

#include <stdio.h>

int main()
{    int m ,n,k,f,j,i;
scanf("%d %d",&m ,&n);
    int a[50],b[50],c[50];
    for (i=0 ; i<m ; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0 ; i<n ; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("First set is.......................................................\n");
     for (i=0 ; i<m ; i++)
    {
        printf("%d ",a[i]);
    }
     printf("\nSecond set is.......................................................\n");
    for (i=0 ; i<n;i++)
        

    {
        printf("%d ",b[i]);
    }
    k=0;
    for(i=0 ; i<m ; i++)
    {f=0;
        for(j=0 ; j<n ; j++)
        {
            if(a[i]==b[j])
            {
                f=0;
                break;
            }
            else
            f=1;
        }
        if(f==1)
        {
            c[k]=a[i];
            k++;
        }
    }
    for(i=0 ; i<n ; i++)
    {f=0;
        for(j=0 ; j<m ; j++)
        {
            if(b[i]==a[j])
            {
                f=0;
                break;
            }
            else
            f=1;
        }
        if(f==1)
        {
            c[k]=b[i];
            k++;
        }
    }
    
    
    printf(" \n Symmetric Difference is,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n");
    for(i=0 ; i<k ;i++)
    {
        printf("%d ",c[i]);
    }
    

    return 0;
}