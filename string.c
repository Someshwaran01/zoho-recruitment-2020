#include<stdio.h>
int main()
{
  // variable
  char str[20];
  int len,i=1;

  // take input
  printf("Enter a string: ");
  scanf("%[^\n]",str);

  // count number of characters
  for (len = 0; str[len]!='\0'; len++);

  // for first half
  /*for(int i=0; i<len; i++)
  {
    for(int j=0; j<=i; j++)
    {
      printf("%c", str[j]);
    }

    printf("\n"); // new line
  }*/

  // for second half
  for(int i=1; i<len; i++)
  {
    for(int j=i; j<len; j++)
    {
      printf("%c", str[j]);
    }

    printf("\n"); // new line
  }
  for(int j=1;j<str[i]+1;j++)
  {
      if(j<i)
      {
          printf("%c", str[++j]);
         
      }
  }
 
  return 0;
}
