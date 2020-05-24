#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int x[20],count;

int main()
{
 int n,i,j;
 void queen(int row,int n);


 printf("\n\nEnter number of Queens:");
 scanf("%d",&n);
 queen(1,n);
 return 0;
}


void print(int n)
{
 int i,j;
 printf("\n\nSolution %d:\n\n",++count);

 //for(i=1;i<=n;++i)
  //printf("\t%d",i);

 for(i=1;i<=n;i++)
 {
 printf("\n\n");
  for(j=1;j<=n;j++)
  {
   if(x[i]==j)
    printf("\tQ");
   else
    printf("\t-");
  }
 }
}


int place(int row,int column)
{
 int i;
 for(i=1;i<=row-1;i++)
 {

  if(x[i]==column)
   return 0;
  else
  if(abs(x[i]-column)==abs(i-row))
    return 0;
 }

 return 1;
}


void queen(int row,int n)
{
 int i;
 for(i=1;i<=n;i++)
 {
  if(place(row,i))
  {
   x[row]=i;
   if(row==n)
    print(n);
   else
    queen(row+1,n);
  }
 }
}
