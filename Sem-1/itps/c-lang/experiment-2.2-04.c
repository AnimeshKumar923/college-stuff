//program to perform various matrix operations Addition, Subtraction, Multiplication, Transpose using switch-case statement

#include<stdio.h>

int main()
{
   int m,n,a[20][20],b[20][20],i,j,sum[20][20],sub[20][20],opt,tr[20][20],opt1,ch,e,f;
      printf("Note : For Addition or Subtraction , no. of rows and columns should be same and for transpose of matrices , your first matrices entered should be the desired matrices .\n");
      printf("Enter the no. of rows: ");
      scanf("%d",&m);
      printf("Enter the no. of columns: ");
      scanf("%d",&n);
      printf("Enter the Data Elements of first matrices\n");
    for(i=0;i<m;i++)
     {
       for(j=0;j<n;j++)
        {
          scanf("%d",&a[i][j]);
        }
     } printf("Enter the no. of rows for second matrices: ");
      scanf("%d",&e);
      printf("Enter the no. of columns: ");
      scanf("%d",&f);
      printf("Enter the Data Elements of second matrices\n");
     for(i=0;i<e;i++)
     {
       for(j=0;j<f;j++)
        {
          scanf("%d",&b[i][j]);
        }
     }
    do
      {
      if(m==e&&n==f)
     {
           printf("Enter 1 for addtion or subtraction of matrices\n");
           if(n==e){printf("Enter 2 for multiplication of matrices\n");}
           printf("Enter 3 for transpose of first matrices\n");
     }
   else if(m!=n&&n==e)
     {
           printf("Enter 2 for multiplication of matrices\n");
           printf("Enter 3 for transpose of first matrices\n");
     }
else
{
printf("Enter 3 for transpose of first matrices\n");
}
   scanf("%d",&ch);
   switch(ch)
    {
        case 1 :
     for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
           sum[i][j]=a[i][j]+b[i][j];
           sub[i][j]=a[i][j]-b[i][j];
        }
      }
       printf("Enter 1 for Addition or 2 for Subtraction: ");
       scanf("%d",&opt);
       switch(opt)
    {
         case 1 :
       printf("The resultant matrices is :\n");
     for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
           printf("%3d",sum[i][j]);
        }
             printf("\n");
      }
      break;
         case 2 :
       printf("The resultant matrices is :\n");
     for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
           printf("%3d",sub[i][j]);
        }
           printf("\n");
      }
    }
      break;
       case 2 :
            printf("The resultant matrices is : \n");
            int k;
            for(i=0;i<m;i++)
            {
              for(j=0;j<f;j++)
              { sum[i][j]=0;
                for(k=0;k<m;k++)
                {
                  sum[i][j]+=a[i][k]*b[k][j];
                }
                printf("%d\t",sum[i][j]);
              }
              printf("\n");
            }
       break;
       case 3 :
           for(i=0;i<m;i++)
              {
                for(j=0;j<n;j++)
                {
                   tr[j][i]=a[i][j];
                }
              }
            printf("The resultant matrices is :\n");
             for(i=0;i<n;i++)
              {
                 for(j=0;j<m;j++)
               {
                    printf("%3d",tr[i][j]);
               }
                    printf("\n");
              }
      break;  }}
     while(ch>0);
     
     return 0;
}