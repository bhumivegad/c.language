//read and write char

#include<stdio.h>
void main()
{
	char c;
	FILE *fp;
	clrscr();
	fp=fopen("c:/bhumi/demo.txt","w");
	printf("\n enter content of the file(ctrl+z to terminate):\n");
	while((c=getchar())!=EOF)
	{
		fputc(c,fp);
	}
	fclose(fp);
	fp=fopen("c:/bhumi/demo.txt","r");
	printf("\n content of the file:\n");
	while(1)
	{
		c=fgetc(fp);
			if(feof(fp));
				break;
		    printf("%c",c);
	}
	fclose(fp);
	getch();
}