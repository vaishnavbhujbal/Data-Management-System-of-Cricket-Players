#include<stdio.h>
#include<string.h>

typedef struct cricket
{
	char name[20];
	int jersey;
	int match;
	int runs;
	int wicket;
}cricket;

void storevalue(cricket*,int);
void display(cricket*,int);
void max_wicket(cricket*,int);
void min_wicket(cricket*,int);
void maxruns(cricket*,int);
void minruns(cricket*,int);
void totalruns(cricket*,int);
void search(cricket*,int);

void main()
{
	int choice,i,n;
	cricket* ptr;
	printf("Enter the number of players");
	scanf("%d",&n);
	cricket p1[n];
	ptr=p1;
	
	while(choice!=9)
	{
		printf("\n choose what you want to search : \n 1:Store values \n 2:display \n 3:maximum wicket \n 4:minimum wicket \n 5:search a player by jersey number \n 6:Max runs \n 7:min runs \n 8:Total runs \n 9:Exit--->");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: storevalue(ptr,n);
			break;
			
			case 2: display(ptr,n);
			break;
			
			case 3: max_wicket(ptr,n);
			break;
			
			case 4: min_wicket(ptr,n);
			break;
			
			case 5: search(ptr,n);
			break;
			
			case 6: maxruns(ptr,n);
			break;
			case 7: minruns(ptr,n);
			break;
			
			case 8:totalruns(ptr,n);
			break;
			
			case 9:printf("Exit");
			break;
			
			default:printf("wrong choice");
			break;
				
			
			
		}
	}
	
}

void storevalue(cricket* p1,int n)
{
	int i,choice;
	for(i=0;i<n;i++)
	{
		printf("\nEnter the name of player :");
		scanf("%s",&p1[i].name);
		
		printf("Enter the jersey no of the player :");
		scanf("%d",&p1[i].jersey);
		
		printf("Enter the no of matches of player :");
		scanf("%d",&p1[i].match);
		
		printf("Enter the runs :");
		scanf("%d",&p1[i].runs);
		
		printf("Enter the no of wickets taken");
		scanf("%d",&p1[i].wicket);
		
	}
}

void display(cricket* p1,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n Player name = %s",p1[i].name);
		printf("\n Jersey no = %d",p1[i].jersey);
		printf("\n Matches played = %d",p1[i].match);
		printf("\n Runs made = %d",p1[i].runs);
		printf("\n Wicket taken = %d",p1[i].wicket);
		printf("\n\n");
	}
}

void max_wicket(cricket* p1,int n)
{
	int max,i,k=0;
	max=0;
	for(i=0;i<n;i++)
	{
		if(p1[i].wicket>max)
		{
			max=p1[i].wicket;
			k=i;
		}
	}printf("the maximum wicket taken are by player %d and the wicket are %d and name is %s\n ",k+1,p1[k].wicket,p1[k].name);
}

void min_wicket(cricket* p1,int n)
{
	int min,i,k=0;
	min=0;
	for(i=0;i<n;i++)
	{
		if(p1[i].wicket<min)
		{
			min=p1[i].wicket;
			k=i;
		}
	}printf("the minimum wicket taken are by  player  %d and the wicket are %d and name is %s\n ",k+1,p1[k].wicket,p1[k].name);
}

void maxruns(cricket* p1,int n)
{
	int max,i,k=0;
	max=0;
	for(i=0;i<n;i++)
	{
		if(p1[i].runs>max)
		{
			max=p1[i].runs;
			k=i;
		}
	}printf("the maximum runs  are made by  player %d and the runs  are %d and name is %s\n ",k+1,p1[k].runs,p1[k].name);
}

void minruns(cricket* p1,int n)
{
	int min,i,k=0;
	min=0;
	for(i=0;i<n;i++)
	{
		if(p1[i].runs<min)
		{
			min=p1[i].runs;
			k=i;
		}
	}printf("the minimum runs  are made  by player %d and the runs  are %d and name is %s\n ",k+1,p1[k].runs,p1[k].name);
}

void totalruns(cricket* p1,int n)
{
	
	int i;
	int sum=0;
	int avg;
	
	for(i=0;i<n;i++)
	{
		sum=sum+p1[i].runs;
	}
	printf("\n Total runs of the palyers are %d",sum);
	printf("\n\n");
}

void search(cricket* p1,int n)
{
	int i,search,flag;

	
	printf("Enter the jersey number  to be searched =");
		scanf("%d",&search);
	
	
		flag=0;
		for(i=0;i<5;i++)
		{
			if(p1[i].jersey==search)
			{
				flag=1;
				break;
			}
		}
	if(flag==1)
	{
		printf("\n player with jersey number %d is present ",search);
	}
	else{
		printf("\n %d player with jersey number not found",search);
	}
	printf("\n\n\n");
}
