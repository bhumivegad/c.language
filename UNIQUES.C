


void main()
{
	int i,a[10],c,j;
	clrscr();
       for(i=0;i<10;i++)
       {
	   printf("enter a[10]:",i+1);
	   scanf("%d",&a[i]);
	}
	  for(i=0;i<10;i++)
	   {
	       c=0;
	      for(j=i+1;j<10;j++)
	      {
		 if(a[i]==a[j])
		     c++;
		  }
		     if(c==0)
		       printf("\n %d",a[i]);
		    }
		    getch();
		}

