//optimal replcement
#include<stdio.h>
int main()
{
    int num,n,frames[10],pages[30],temp[10],flag1,flag2,flag3,i,j,k,pos,max,faults = 0;
    printf("Enter number of frames: ");
    scanf("%d", &num);
    printf("Enter number of pages: ");
    scanf("%d", &n);
    printf("Enter page reference string: ");
    for(i=0;i<n;i++)
	{
        scanf("%d",&pages[i]);
    }
    for(i=0;i<num;i++)
	{
        frames[i]=-1;
    }
    for(i=0;i<n;i++)
	{
        flag1=flag2=0;
        for(j=0;j<n;j++)
		{
            if(frames[j]==pages[i])
			{
                flag1=flag2=1;
                break;
            }
        }
        
        if(flag1==0)
		{
            for(j=0;j<num;j++)
			{
                if(frames[j]==-1){
                    faults++;
                    frames[j]=pages[i];
                    flag2=1;
                    break;
                }
            }    
        }
        
        if(flag2==0)
		{
         flag3=0;
         for(j=0;j<num;j++)
		 {
            temp[j]=-1;
            for(k=i+1;k<n;k++)
			{
                if(frames[j] == pages[k])
			    {
                    temp[j] = k;
                    break;
                }
            }
         }
            
         for(j=0;j<num;j++)
		{
             if(temp[j] == -1)
			 {
             pos = j;
             flag3 = 1;
             break;
             }
        }
            
          if(flag3 ==0)
		{
		    max = temp[0];
            pos = 0;
            
            for(j=1;j<num;j++)
			 {
                if(temp[j] > max)
			    {
                   max = temp[j];
                   pos = j;
                }
             }            
        }
        frames[pos] = pages[i];
        faults++;
        }
        printf("\n");
        for(j=0;j<num;j++)
		{
            printf("%d\t", frames[j]);
        }
    }
    printf("\n\nTotal Page Faults = %d", faults);
    return 0;
}
