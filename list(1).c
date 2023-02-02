#include<stdio.h>
int list[20];
int n=1,max=20;

void main()
{
	void insert(int);
	void delete(int);
	void search(int);
	void traverse();
	int isempty();
	void isfull();
	int c,d,dd,ds;

	label1:
	printf("___LIST OPERATIONS___\n");
	printf("SELECT A NUMBER\n");
	printf("1 : INSERT\n2 : DELETE\n3 : SEARCH\n4 : TRAVERSE\n5 : IS EMPTY\n6 : IS FULL\n7 : EXIT\n ");
	scanf("%d",&c);

	switch(c)
	{
		case 1:		
					printf("ENTER DATA TO ADD\n");
					scanf("%d",&d);
					insert(d);
					goto label1;	

		case 2:	if(isempty()==1)	{	printf("LIST IS EMPTY\n"); goto label1;	}

				else	{			
									printf("ENTER THE POSITION OF DATA TO DELETE\n");
									scanf("%d",&dd);
									delete(dd);
									goto label1;
						}

		case 3:	if(isempty()==1)	{	printf("LIST IS EMPTY\n"); goto label1;	}

				else	{
									printf("ENTER DATA TO SEARCH\n");
									scanf("%d",&ds);
									search(ds);
									goto label1;
						}

		case 4:	if(isempty()==1)	{	printf("LIST IS EMPTY\n"); goto label1;	}
			
				else				{	traverse();	goto label1;	}	
									
		case 5:						isempty();  goto label1;

		case 6:						isfull();	goto label1;

		case 7:						goto label2;
		default:					printf("invalid choice\n");	goto label1;
	}
	label2:
	printf("THANK YOU\n");
}
void insert(int d)
{
	if(n==max){	printf("LIST IS FULL");}
	else	{	list[n]=d;++n;	}
}
void delete(int dd)
{
	list[dd]=0;
}
void search(int ds)
{
	int i,f=0,p;
  
	for(i-1;i<=n;++i)
	{
		if(list[i]==ds){	p=i;f=1;break;	}
	}
	if(f==1){	printf("DATA FOUND AT POSITION : %d\n",p);	}
	if(f==0){        printf("DATA NOT FOUND");	}
}
void traverse()
{
	int i;
	
	for (i=1;i<=n;++i)
	{
		printf("%d\n",list[i]);
	}
	printf("\n");
}
int isempty()
{
	int i,f=1;

	for(i=1;i<=n;++i)
	{
		if (list[i]!=0){	f=0;	}
	}
	if(f==1)	return 1;
	if(f==0)	return 0;
}
void isfull()
{
	if(n==max)	printf("LIST IS FULL");
	else		printf("LIST NOT FULL");
}	
