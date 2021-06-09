#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ciphers.c"
int main(int argc,char **argv)
{
  char s1[100],s2[100];
  int n;
  int type=0;
  if (argc!=4)
  {
    printf("\nUsage:crypto <cipher> <text> <additional_info>\n");
    printf("1\trot\tpositive_number\n");
    printf("2\trevrot\tnegative_number\n");
    printf("3\tving\ttext(UPPERCASE ONLY)\tkey\n");
    printf("4\trevving\ttext(UPPERCASE ONLY)\tkey");
    exit(1);
  }
  if ((strcmp(argv[1],"rot"))==0)
  {
    strcpy(s1,argv[2]);
    n=atoi(argv[3]);
    while(n>=26)
    {
      n-=26;
    }
    type=1;
  }
  else if ((strcmp(argv[1],"revrot"))==0)
  {
    strcpy(s1,argv[2]);
    n=atoi(argv[3]);
    while(n<=-26)
    {
      n+=26;
    }
    type=2;
    n=26+n;
  }
  else if((strcmp(argv[1],"ving"))==0)
  {
    strcpy(s1,argv[2]);
    strcpy(s2,argv[3]);
    type=3;
  }
  else if((strcmp(argv[1],"revving"))==0)
  {
    strcpy(s1,argv[2]);
    strcpy(s2,argv[3]);
    type=4;
  }
  switch (type) {
    case 1:
      rot(s1,n);
      break;
    case 2:
      rot(s1,n);
      break;
    case 3:
      ving(s1,s2,0);
      break;
    case 4:
      ving(s1,s2,1);
      break;
    default:
      printf("\nCase not implemented\n");
  }
  return 0;
}
