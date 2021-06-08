#include <stdio.h>
#include <string.h>
void rot(const char s1[],int n)
{
  int l1=strlen(s1);
  int ch;
  char c;
  int i;
  for(i=0;i<l1;i++)
  {
   ch=s1[i];
   //printf("%d ",ch);
   c=ch;
   //printf("%c ",c);
   if (ch>='a' && ch<='z')
   {
     c=ch+n;
     //printf("c=%d ch=%d n=%d\t",c,ch,n);
     if(c>'z' || c<0)
       c=c-'z'+'a'-1;
   }
   else if (ch>='A'&&ch<='Z') {
     c=ch+n;
     if(c>'Z')
      c=c-'Z'+'A'-1;
   }
   //printf("%d ",c);
   putc(c,stdout);
   //printf("\n");
   c=ch;
  }
}
void ving(const char text[],const char key[])
{
  int l=strlen(text);
  int i=0;
  char key2[l];
  for (i=0;i<l;i++)
  {
    //Work on this 
    key2[i]=key[i];

  }
}
