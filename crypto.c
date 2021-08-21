#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "ciphers.c"
#include "base64.c"
#include "morse.c"
int main(int argc,char **argv)
{
  srand(time(0));
  char s1[100],s2[100];
  int n,d,data;
  int type=0;
  //printf("%s",argv[1]);
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
  else if((strcmp(argv[1],"b64e"))==0)
  {
	  strcpy(s1,argv[2]);
	  type=5;
  }
  else if((strcmp(argv[1],"b64d"))==0)
  {
	  strcpy(s1,argv[2]);
	  type=6;
  }
  else if((strcmp(argv[1],"Emorse"))==0)
  {
	  strcpy(s1,argv[2]);
	  type=7;
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
	 case 5:
		driver_e(s1);
		break;
	case 6:
		driver_d(s1);
		break;
	case 7:
		toMorse(s1);
		break;
    default:
	printf("\nUsage:crypto <cipher> <text> <additional_info>\n");
    printf("1\trot\tpositive_number\n");
    printf("2\trevrot\tnegative_number\n");
    printf("3\tving\ttext(UPPERCASE ONLY)\tkey\n");
    printf("4\trevving\ttext(UPPERCASE ONLY)\tkey\n");
	printf("5\tb64e\tText\n");
	printf("6\tb64d\tEncrypted_text\n");
	printf("7\tEmorse\ttext\n");
    exit(1);
  }
  return 0;
}
