char b64[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
void decoder_b64(unsigned char input[], char *str2)
{
	unsigned char output[4];
	output[0]=input[0]<<2|input[1]>>4;
	output[1]=input[1]<<4|input[2]>>2;
	output[2]=input[2]<<6|input[3]>>3;
	output[3]='\0';
	strncat(str2,output,sizeof(output));
}
void d_b64(char *st,char *st2)
{
	int i=0,ph=0,c;
	unsigned char inp[4];
	char *p;
	st2[0]='\0';
	while(st[i])
	{
		c=(int)st[i];
		if (c=='=')
		{
			decoder_b64(inp,st2);
			break;
		}
		p=strchr(b64,c);
		if(p)
		{
			inp[ph]=p-b64;
			ph=(ph+1)%4;
			if(ph==0)
			{
				decoder_b64(inp,st2);
				inp[0]=inp[1]=inp[2]=inp[3]=0;
			}
		}
		i++;
	}
}
void encoder_b64(unsigned char inp[],char b64str[],int len)
{
	unsigned char out[5];
	out[0]=b64[inp[0]>>2];
	out[1]=b64[((inp[0]&0x03)<<4)|((inp[1]&0xf0)>>4)];
	out[2]=(unsigned char)(len >2?b64[inp[2]&0x3f]:'=');
	out[4]='\0';
	strncat(b64str,out,sizeof(out));
}


void e_b64(char *st,char *st2)
{
	unsigned char in[3];
	int i,len=0;
	int j=0;
	st2[0]='\0';
	while(st[j])
	{
		len=0;
		for(i=0;i<3;i++)
		{
			in[i]=(unsigned char)st[j];
			if(st[j])
			{
				len++;
				j++;
			}
			else in[i]=0;
		}
		if(len)
		{
			encoder_b64(in,st2,len);
		}
	}
}
void driver_e(char *str)
{
	char inp[1024]="";
	char out[1024]="";
	strcpy(inp,str);
	e_b64(inp,out);
	puts(out);
	putc('\n',stdout);
}
void driver_d(char *str)
{
	char inp[1024]="";
	char out[1024]="";
	strcpy(inp,str);
	d_b64(inp,out);
	puts(out);
	putc('\n',stdout);
}
