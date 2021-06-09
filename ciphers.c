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
void ving(const char text[],const char key[],int dec)
{
  int l=strlen(text);
  int i=0,j=0;
  char key2[l];
  char encrypted[l];
  for(i=0;i<l;i++)
  {
    key2[i]=key[j];
    //printf("%s\n",key2);
    if (j>=strlen(key)-1)
    {
      j=j-strlen(key);
    }
    j++;
  }
  //printf("%s\n",key2);
  for (i=0;i<l;i++)
  {
    char x;
    if (!dec)
    {
    x=(text[i]+key2[i])%26;
    //printf("text[i]=%d key2[i]=%d sum=%d mod=%d \t%d %c\n",text[i],key2[i],(key2[i]+text[i])>127?-128+(key2[i]+text[i]):key2[i]+text[i],((key2[i]+text[i])>127?-128+(key2[i]+text[i]):key2[i]+text[i])%26,x,x);
    x+='A';
    }
    else
    {
      x=(text[i]-key2[i]+26)%26;
      x+='A';
    }
    //printf("text [i]=%c %d key=%c %d x=%d %c\n",text[i],text[i],key2[i],key2[i],x,x);
    encrypted[i]=x;
  }
  encrypted[i]='\0';
  printf("%s\n",encrypted);
}
