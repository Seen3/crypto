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
