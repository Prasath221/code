#include<stdio.h>
main()
{
  int testcase;
  scanf("%d",&testcase);
  while(testcase--)
  {
    int num;
    if(num>0)
      printf(" Num is Positive\n");
    else if(num==0)
      printf("Num is equal to zero"\n);
    else
      printf("Num is Negative\n");
  }
}
    
