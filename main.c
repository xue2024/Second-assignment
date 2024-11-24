//请在下方输入你的代码：
#include "stdio.h"
int main()
{
  int i,j;
for(i=1;i<=9;i++)
  {
  for(j=i;j<=i;j++)
    printf("%d*%d=%-4d",j,i,i*j);
    printf("\n");
  
  }
  
for(int i=9;i>0;i--)
  {
    for(int j=i;j>0;j--)
      {
         printf("%d*%d=%4d",j,i,i*j);
        
      }
       printf("\n")


    return 0;
  }






  
  return 0;
}




