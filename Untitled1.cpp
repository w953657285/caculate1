#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int Calculation(int k,int a,int b)
{
	
	if(k==0)
	return a+b;
	if(k==1)
	return a-b;
	if(k==2)
	return a*b;
	if(k==3)
	{
		if(b!=0)
		return a/b;
	}
}
int main()
{
	int i,j,q,n,a1,b1,c1,ans[10000],temans;
	int temp[5];
	char Symbol[]={'+','-','X','/','=','(',')','\0'};
	while(1)
	{
	printf("请输入需要的算式数量\n");
	srand((unsigned)time(NULL));
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	
flg1:	temp[0]=rand()%100;
		temp[1]=rand()%100;
		temp[2]=rand()%100;
		temp[3]=rand()%4;
		temp[4]=rand()%4;
		if(temp[3]==0||temp[3]==1)
		{
			if(temp[3]==1)
			{
				if(temp[0]<temp[1])
				{
					goto flg1;
				}
				ans[i]=Calculation(temp[3],temp[0],temp[1]);
				if(ans[i]>100)
				{
					goto flg1;
				}
			}
			if(temp[3]==0)
			{
				ans[i]=Calculation(temp[3],temp[0],temp[1]);
				if(ans[i]>100)
				{
					goto flg1;
				}
			}
			if(temp[4]==0||temp[4]==1)
			{
				if(temp[4]==1)
				{
					j=1;
					while(ans[i]<temp[2])
					{
						temp[2]=rand()%100;
						j++;
						if(j==20)
						{
							goto flg1;
						}
					}
					ans[i]=Calculation(temp[4],ans[i],temp[2]);
					if(ans[i]>100)
					{
						goto flg1;
					}
					else
					{
						printf("%d%c%d%c%d%c\n",temp[0],Symbol[temp[3]],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
						continue;
					}
				}
				if(temp[4]==0)
				{
					ans[i]=Calculation(temp[4],ans[i],temp[2]);
					if(ans[i]>100)
					{
						goto flg1;
					}
					else
					{
						printf("%d%c%d%c%d%c\n",temp[0],Symbol[temp[3]],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
						continue;
					}
				}
				
			}
			else
			{
				if(temp[4]==2)
				{
					ans[i]=Calculation(temp[4],ans[i],temp[2]);
					if(ans[i]>100)
					{
						goto flg1;
					}
					else
					{
						printf("%c%d%c%d%c%c%d%c\n",Symbol[5],temp[0],Symbol[temp[3]],temp[1],Symbol[6],Symbol[temp[4]],temp[2],Symbol[4]);
						continue;
					}
				}
				if(temp[4]==3)
				{
					if(temp[2]!=0&&(ans[i]%temp[2]==0))
					{
						ans[i]=Calculation(temp[4],ans[i],temp[2]);
						printf("%c%d%c%d%c÷%d%c\n",Symbol[5],temp[0],Symbol[temp[3]],temp[1],Symbol[6],temp[2],Symbol[4]);
						continue;
//						printf("%c%d%c%d%c%c%d%c\n",Symbol[5],temp[0],Symbol[temp[3]],temp[1],Symbol[6],Symbol[temp[4]],temp[2],Symbol[4]);
					}
					else
					{
						goto flg1;
					}
				}
				
			}
		}
		if(temp[3]==2||temp[3]==3)
		{
			if(temp[3]==2)
			{
				ans[i]=Calculation(temp[3],temp[0],temp[1]);
				if(ans[i]>100)
				{
					goto flg1;
				}
			}
			if(temp[3]==3)
			{
				if(temp[2]!=0&&(temp[0]%temp[1]==0))
				{
					ans[i]=Calculation(temp[3],temp[0],temp[1]);
					if(ans[i]>100)
					{
						goto flg1;
					}
				}
				else
				{
					goto flg1;
				}
			}
			if(temp[4]==0||temp[4]==1)
			{
				if(temp[4]==0)
				{
					ans[i]=Calculation(temp[4],ans[i],temp[2]);
					if(ans[i]>100)
					{
						goto flg1;
					}
					else
					{
						if(temp[3]==2)
						{
							printf("%d%c%d%c%d%c\n",temp[0],Symbol[temp[3]],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
							continue;							
						}

						else
						{
							printf("%d÷%d%c%d%c\n",temp[0],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
							continue;
						}
					}
				}
				if(temp[4]==1)
				{
					j=1;
					while(ans[i]<temp[2])
					{
						temp[2]=rand()%100;
						j++;
						if(j==20)
						{
							goto flg1;
						}
					}
					ans[i]=Calculation(temp[4],ans[i],temp[2]);
					if(ans[i]>100)
					{
						goto flg1;
					}
					else
					{
//						printf("%d%c%d%c%d%c\n",temp[0],Symbol[temp[3]],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
						if(temp[3]==2)
						{
							printf("%d%c%d%c%d%c\n",temp[0],Symbol[temp[3]],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
							continue;
						}
						else
						{
							printf("%d÷%d%c%d%c\n",temp[0],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
							continue;
						}
					}
				}
				
			}
			if(temp[4]==2)
			{
				ans[i]=Calculation(temp[4],ans[i],temp[2]);
				if(ans[i]>100)
				{
					goto flg1;
				}
				else
				{
//					printf("%d%c%d%c%d%c\n",temp[0],Symbol[temp[3]],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
					if(temp[3]==2)
					{
						printf("%d%c%d%c%d%c\n",temp[0],Symbol[temp[3]],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
						continue;
					}
					
					else
					{
						printf("%d÷%d%c%d%c\n",temp[0],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
						continue;
					}
					
				}
			}
			if(temp[4]==3)
			{
				if(temp[2]!=0&&(ans[i]%temp[2]==0))
				{
					ans[i]=Calculation(temp[4],ans[i],temp[2]);
					if(ans[i]>100)
					{
						goto flg1;
					}
					else
					{
//						printf("%d%c%d%c%d%c\n",temp[0],Symbol[temp[3]],temp[1],Symbol[temp[4]],temp[2],Symbol[4]);
						if(temp[3]==2)
						{
							printf("%d%c%d÷%d%c\n",temp[0],Symbol[temp[3]],temp[1],temp[2],Symbol[4]);
							continue;
						}
						
						else
						{
							printf("%d÷%d÷%d%c\n",temp[0],temp[1],temp[2],Symbol[4]);
							continue;
						}
						
					}
				}
				else
				{
					goto flg1;
				}
			}
			
		}
		
	}
	printf("输入1查看答案\n");
	scanf("%d",&q);
	if(q==1)
	{
		for(i=1;i<=n-1;i++)
		{
			printf("%d  ",ans[i]);
		}
		printf("%d\n",ans[i]);
	}
	printf("输入1继续，输入0结束\n");
	scanf("%d",&q);
	if(q==1)
	{
		continue;
	}
	else
	{
		break;
	}
	}
	
	return 0;
}
