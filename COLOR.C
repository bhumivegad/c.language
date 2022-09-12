//w.a.p that accept color code & display color name.

void main()
{
	char c;
	clrscr();
	printf("\n color code \n R-red \n G-green \n B-blue ");
	printf("\n enter color code");
	scanf("%c",&c);
	switch(c)
	{	case'R':
		case'r':
		     printf("\n Red");
		     break;
		case'G':
		case'g':
		     printf("\n Green");
		     break;
		case'B':
		case'b':
		     printf("\n Blue");
		     break;
		default:
		      printf("\n Invalid color code");
		      break;
	 }
	 getch();
 }
