#include<stdio.h>
int main()
{

  char str[20];
  int len,i=1;

  printf("Enter a string: ");
  scanf("%[^\n]",str);

  
  for (len = 0; str[len]!='\0'; len++);

  /
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
