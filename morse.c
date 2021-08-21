void toMorse(char *str)
{
	char ch;
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		ch=str[i];
		switch(ch)
		{
			case 'a':
			case 'A':
				fputs(".- ",stdout);
				break;
			case 'b':
			case 'B':
				fputs("-... ",stdout);
				break;
			case 'c':
			case 'C':
				fputs("-.-. ",stdout);
				break;
			case 'd':
			case 'D':
				fputs("-.. ",stdout);
				break;
			case 'e':
			case 'E':
				fputs(". ",stdout);
				break;
			case 'f':
			case 'F':
				fputs("..-. ",stdout);
				break;
			case 'g':
			case 'G':
				fputs("--. ",stdout);
				break;
			case 'h':
			case 'H':
				fputs(".... ",stdout);
				break;
			case 'i':
			case 'I':
				fputs(".. ",stdout);
				break;
			case 'j':
			case 'J':
				fputs(".--- ",stdout);
				break;
			case 'k':
			case 'K':
				fputs("-.- ",stdout);
				break;
			case 'l':
			case 'L':
				fputs(".-.. ",stdout);
				break;
			case 'm':
			case 'M':
				fputs("-- ",stdout);
				break;
			case 'n':
			case 'N':
				fputs("-. ",stdout);
				break;
			case 'o':
			case 'O':
				fputs("--- ",stdout);
				break;
			case 'p':
			case 'P':
				fputs(".--. ",stdout);
				break;
			case 'q':
			case 'Q':
				fputs("--.- ",stdout);
				break;
			case 'r':
			case 'R':
				fputs(".-. ",stdout);
				break;
			case 's':
			case 'S':
				fputs("... ",stdout);
				break;
			case 't':
			case 'T':
				fputs("- ",stdout);
				break;
			case 'u':
			case 'U':
				fputs("..- ",stdout);
				break;
			case 'v':
			case 'V':
				fputs("...- ",stdout);
				break;
			case 'w':
			case 'W':
				fputs(".-- ",stdout);
				break;
			case 'x':
			case 'X':
				fputs("-..- ",stdout);
				break;
			case 'y':
			case 'Y':
				fputs("-.-- ",stdout);
				break;
			case 'z':
			case 'Z':
				fputs("--.. ",stdout);
				break;
			case '0':
				fputs("----- ",stdout);
				break;
			case '1':
				fputs(".---- ",stdout);
				break;
			case '2':
				fputs("..--- ",stdout);
				break;
			case '3':
				fputs("...-- ",stdout);
				break;
			case '4':
				fputs("....- ",stdout);
				break;
			case '5':
				fputs("..... ",stdout);
				break;
			case '6':
				fputs("-.... ",stdout);
				break;
			case '7':
				fputs("--... ",stdout);
				break;
			case '8':
				fputs("---.. ",stdout);
				break;
			case '9':
				fputs("----. ",stdout);
				break;
			case '.':
				fputs(".-.-.- ",stdout);
				break;
			case ',':
				fputs("--..-- ",stdout);
				break;
			case '?':
				fputs("..--.. ",stdout);
				break;
			case '\'':
				fputs(".----. ",stdout);
				break;
			case '!':
				fputs("-.-.-- ",stdout);
				break;
			case '/':
				fputs("-..-. ",stdout);
				break;
			case '(':
				fputs("-.--. ",stdout);
				break;
			case ')':
				fputs("-.--.- ",stdout);
				break;
			case '&':
				fputs(".-... ",stdout);
				break;
			case ':':
				fputs("---... ",stdout);
				break;
			case ';':
				fputs("-.-.-. ",stdout);
				break;
			case '=':
				fputs("-...- ",stdout);
				break;
			case '+':
				fputs(".-.-. ",stdout);
				break;
			case '-':
				fputs("-....- ",stdout);
				break;
			case '_':
				fputs("..--.- ",stdout);
				break;
			case '"':
				fputs(".-..-. ",stdout);
				break;
			case '$':
				fputs("...-..- ",stdout);
				break;
			case '@':
				fputs(".--.-. ",stdout);
				break;
		}
	}
}
char MorseChar(char *st)
{
	if((strcmp(st,".-")==0))
	{
		return 'A';
	}
	else if((strcmp(st,"-..."))==0)
	{
		return 'B';
	}
	else if((strcmp(st,"-.-."))==0)
	{
		return 'C';
	}
	else if((strcmp(st,"-.."))==0)
	{
		return 'D';
	}
	else if((strcmp(st,"."))==0)
	{
		return 'E';
	}
	else if((strcmp(st,"..-."))==0)
	{
		return 'F';
	}
	else if((strcmp(st,"--."))==0)
	{
		return 'G';
	}
	else if((strcmp(st,"...."))==0)
	{
		return 'H';
	}
	else if((strcmp(st,".."))==0)
	{
		return 'I';
	}
	else if((strcmp(st,".---"))==0)
	{
		return 'J';
	}
	else if((strcmp(st,"-.-"))==0)
	{
		return 'K';
	}
	else if((strcmp(st,".-.."))==0)
	{
		return 'L';
	}
	else if((strcmp(st,"--"))==0)
	{
		return 'M';
	}
	else if((strcmp(st,"-."))==0)
	{
		return 'N';
	}
	else if((strcmp(st,"---"))==0)
	{
		return 'O';
	}
	else if((strcmp(st,".--."))==0)
	{
		return 'P';
	}
	else if((strcmp(st,"--.-"))==0)
	{
		return 'Q';
	}
	else if((strcmp(st,".-."))==0)
	{
		return 'R';
	}
	else if((strcmp(st,"..."))==0)
	{
		return 'S';
	}
	else if((strcmp(st,"-"))==0)
	{
		return 'T';
	}
	else if((strcmp(st,"..-"))==0)
	{
		return 'U';
	}
	else if((strcmp(st,"...-"))==0)
	{
		return 'V';
	}
	else if((strcmp(st,".--"))==0)
	{
		return 'W';
	}
	else if((strcmp(st,"-..-"))==0)
	{
		return 'X';
	}
	else if((strcmp(st,"-.--"))==0)
	{
		return 'Y';
	}
	else if((strcmp(st,"--.."))==0)
	{
		return 'Z';
	}
	else if((strcmp(st,"-----"))==0)
	{
		return '0';
	}
	else if((strcmp(st,".----"))==0)
	{
		return '1';
	}
	else if((strcmp(st,"..---"))==0)
	{
		return '2';
	}
	else if((strcmp(st,"...--"))==0)
	{
		return '3';
	}
	else if((strcmp(st,"....-"))==0)
	{
		return '4';
	}
	else if((strcmp(st,"....."))==0)
	{
		return '5';
	}
	else if((strcmp(st,"-...."))==0)
	{
		return '6';
	}
	else if((strcmp(st,"--..."))==0)
	{
		return '7';
	}
	else if((strcmp(st,"---.."))==0)
	{
		return '8';
	}
	else if((strcmp(st,"----."))==0)
	{
		return '9';
	}
	else if((strcmp(st,".-.-.-"))==0)
	{
		return '.';
	}
	else if((strcmp(st,"--..--"))==0)
	{
		return ',';
	}
	else if((strcmp(st,"..--.."))==0)
	{
		return '?';
	}
	else if((strcmp(st,".----."))==0)
	{
		return '\'';
	}
	else if((strcmp(st,"-.-.--"))==0)
	{
		return '!';
	}
	else if((strcmp(st,"-..-."))==0)
	{
		return '/';
	}
	else if((strcmp(st,"-.--."))==0)
	{
		return '(';
	}
	else if((strcmp(st,"-.--.-"))==0)
	{
		return ')';
	}
	else if((strcmp(st,".-..."))==0)
	{
		return '&';
	}
	else if((strcmp(st,"---.."))==0)
	{
		return ':';
	}
	else if((strcmp(st,"-.-.-."))==0)
	{
		return ';';
	}
	else if((strcmp(st,"-...-"))==0)
	{
		return '=';
	}
	else if((strcmp(st,".-.-."))==0)
	{
		return '+';
	}
	else if((strcmp(st,"-....-"))==0)
	{
		return '-';
	}
	else if((strcmp(st,"..--.-"))==0)
	{
		return '_';
	}
	else if((strcmp(st,".-..-."))==0)
	{
		return '"';
	}
	else if((strcmp(st,"..-..-"))==0)
	{
		return '$';
	}
	else if((strcmp(st,".--.-."))==0)
	{
		return '@';
	}
	return '~';
}
void fromMorse(char *str)
{
	char *word=strtok(str," ");	
	while((word!=NULL))
	{
		//printf("%s\n",word);
		printf("%c",MorseChar(word));
		word=strtok(NULL, " ");
		//printf("After=%s\n",word);
	}
}
