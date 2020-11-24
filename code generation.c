#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{       int i,j,k,flag,z,n;
	char a[10][10],ch,op;
	clrscr();
	printf("Enter the no of lines:\n");
	scanf("%d",&n);
	z=0 ;
	printf("Enter the code:\n");
	for(i=0;i<n;i++)
	scanf("%s%c",a[i],&ch);
	for(i=0;i<n;i++)
	{
		if(a[i][3]!='\0')
		op=a[i][3];
		else
		op=a[i][1];

    if(op=='+')
    {
      printf("\nMOV R%d,%c",i,a[i][2]);
      printf("\nADD R%d,%c",i,a[i][4]);
      printf("\nMOV %c,R%d",a[i][0],i);
    }
     if(op=='*')
    {
      printf("\nMOV R%d,%c",i,a[i][2]);
      printf("\nMUL R%d,%c",i,a[i][4]);
      printf("\nMOV %c,R%d",a[i][0],i);
    }
    if(op=='-')
    {
      printf("\nMOV R%d,%c",i,a[i][2]);
      printf("\nSUB R%d,%c",i,a[i][4]);
      printf("\nMOV %c,R%d",a[i][0],i);
    }
       if(op=='/')
    {
      printf("\nMOV R%d,%c",i,a[i][2]);
      printf("\nDIV R%d,%c",i,a[i][4]);
      printf("\nMOV %c,R%d",a[i][0],i);
    }
if(op=='=')
    {
      printf("\nMOV R%d,%c",i,a[i][2]);
      printf("\nMOV %c,R%d",a[i][0],i);
    }
    }

    getch();

}



