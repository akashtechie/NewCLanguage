#include <stdio.h>
main()
{
  int i,j;
  for(i=0;i<3;i++)
  {
    for(j=0;j<(3-i);j++)
    {printf("*   ");
   } 
    printf("\n");
   } 
  for(i=0;i<3;i++)
  {
    for(j=0;j<(i+1);j++)
    {printf("*  ");
   } 
    printf("\n");
   } 
}