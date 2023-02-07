#include <stdio.h>
int main()
{ int x,revs,t,a;
revs=0;
a=1256;
t=a;
while(a>0)
{ x=a%10;
revs= revs*10+x;
a=a/10;
} if(revs==t)
{ printf("%d is a pelindrome number",t);
} else 
{ printf("%d is not a pelindrome number",t);
} 
}

