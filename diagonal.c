#include<stdio.h>
#include<conio.h>
void main()
{
  int a[3][3]={{1,2,3},{3,2,1},{2,1,3}}
  int i,j;
  clrscr();
  for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
    {
      if(i==j)
      {
        printf("%d",a[i][j]);
      
      }
      else
      {
        printf("  ")
      
      }
    }
  }
  getch();

}
