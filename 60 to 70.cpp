#include<stdio.h>
int main()
{
	int i,p,q,r,c=0;
	printf("enter the number");
	scanf("%d %d %d",&p,&q,&r);	
	for(i=p;i<=q;i++)
   {  
    if(r!=c)
	{
    	printf(" \n%d",i);
	    c++;
    }
     else
     {
      c++;
	  continue;
     }
  }
	return 0;
}
