#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{       int i,j,k,flag,z,n,t[20];
	char a[10][10],ch,op,o[20],loc,ptr;
	clrscr();
	printf("Enter the number of statements:\n");
	scanf("%d",&n);
	z=1 ;
	k=0  ;
	k=36;
	loc=100;
	printf("Enter the statements:\n");
	for(i=0;i<n;i++)
	scanf("%s%c",a[i],&ch);
	printf("\nQuadruples");
	printf("\nLoc  op  arg1 arg2  result");
	for(i=0;i<n;i++)
	{
	  if(a[i][3]!='\0')
	  {
	     printf("\n%d   %c    %c     %c     %c",loc,a[i][3],a[i][2],a[i][4],a[i][0]);

	  }
	  else
	  {
	    printf("\n%d   %c    -     %c     %c",loc,a[i][1],a[i][2],a[i][0]);
	  }
	  loc++;

	}
	loc=100;
	printf("\n\n\nTriples");
		printf("\nLoc  op  arg1 arg2  result");
	for(i=0;i<n;i++)
	{
	  o[i]=a[i][0];
	  t[i]=loc;
	  if(a[i][3]!='\0')
	  {
	     printf("\n%d   %c    ",loc,a[i][3]);
	     for(j=0;j<i;j++)
	     {
	       if(a[i][2]==o[j])
	       {
	       printf("%d  ",t[j]);
	       break;
	       }

	     }
	      if(j==i)
		printf("%c    ",a[i][2]);
	     for(j=0;j<i;j++)
	     {
	       if(a[i][4]==o[j])
	       {
	       printf("%d  ",t[j]);
	       break;
	       }
	     }
	      if(j==i)
		printf("%c    ",a[i][4]);

		printf("%c",a[i][0]);

	     }



	  else
	  {

	    printf("\n%d     %c  ",loc,a[i][1]);
		     for(j=0;j<i;j++)
	     {
	       if(a[i][2]==o[j])
	       {
	       printf("%d  ",t[j]);
	       break;
	       }

	     }
	      if(j==i)
	      printf("%c    ",a[i][2]);

	    printf(" -    %c",a[i][0]);
	  }
	  loc++;

	}

		loc=100;
	printf("\n\n\nIndirect Triples");
		printf("\nLoc  op  arg1 arg2  result  pointer Loc");
	for(i=0;i<n;i++)
	{
	  o[i]=a[i][0];
	  t[i]=loc;
	  if(a[i][3]!='\0')
	  {
	     printf("\n%d   %c    ",loc,a[i][3]);
	     for(j=0;j<i;j++)
	     {
	       if(a[i][2]==o[j])
	       {
	       printf("%d  ",t[j]);
	       break;
	       }

	     }
	      if(j==i)
		printf("%c    ",a[i][2]);
	     for(j=0;j<i;j++)
	     {
	       if(a[i][4]==o[j])
	       {
	       printf("%d  ",t[j]);
	       break;
	       }
	     }
	      if(j==i)
		printf("%c    ",a[i][4]);

		printf("%c     ",a[i][0]);
		printf(" %d     %d",k,loc);

	     }



	  else
	  {

	    printf("\n%d    %c  ",loc,a[i][1]);
		     for(j=0;j<i;j++)
	     {
	       if(a[i][2]==o[j])
	       {
	       printf("%d  ",t[j]);
	       break;
	       }

	     }
	      if(j==i)
	      printf("%c    ",a[i][2]);

	    printf(" -    %c     ",a[i][0]);
	     printf("%d     %d",k,loc);
	  }

	  loc++;
	  k++;

	}
	getch();

}
















