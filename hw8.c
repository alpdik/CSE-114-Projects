#include <stdio.h>

void print( char *p, char *q )
{
  for( ; p!=q+1; p++)
  {
    printf("%c", *p);
  }
}

int is_pal( char *p, char *q )
{
  for (;p < q;p++,q--)
  {
    if (*p != *q)
    {
      return 0;
    }

  }
  return 1;
}

int print_palindromes ( char *s )
{
  int len;
  for (len=0; s[len]!='\0'; len++);


  for (int i=0; i<len; i++)
  {
    for (int y=len; y>i;y--)
    {
      if (is_pal(s+i,s+y))
      {
        print(i+s,y+s);
        printf(" ");
        i=y;
      }

    }
  }
}

int foo(int *A,int len,int second,int max) // second=A[0] , max=A[1]
{
  if (len==0)
  {
    return second;
  }

  if (second>max)
  {
    return foo(A,len,max,second);
  }

  if (*A>=max)
  {
    return foo(A+1,len-1,max,*A);
  }
  else if (*A>second)
  {
    return foo(A+1,len-1,*A,max);
  }
  else
  {
    return foo(A+1,len-1,second,max);
  }
}

int main()
{
  print_palindromes("abcadedabcdefghhgfemncdfgfb");
  printf("\n");

  int A[10]={3,35,235,67,1,66,9,8,66,7};
  printf("%d\n",foo(A,10,A[0],A[1]));
  return 0;
}
