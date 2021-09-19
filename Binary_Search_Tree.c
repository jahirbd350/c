#include<stdio.h>

#define MAX 20


int main()
{

int DATA[MAX];
int i,N,m,beg,end,mid,ITEM,loc;


printf("\nEnter the number of elements : ");
scanf("%d", &N);

for (i=0; i<N; i++)
	{
		printf("\nEnter element %d : ",i+1);
		scanf("%d", &DATA[i]);
	}

printf("\nData Items in Original Order: \n\n");

		 for (m=0; m<i; m++)
		 {
		 		 printf("%d\t",DATA[m]);
		 }


beg=1;
end=N;

mid=((beg+end)/2);

/*printf("\n\n mid is %d",mid);
printf("\n%d",DATA[mid]);
*/
printf("\n\nWhich ITEM do you want to search??  ");
scanf("%d",&ITEM);

while(beg<=end && DATA[mid]!=ITEM)

	{
		if(ITEM<DATA[mid])
			{
				end=mid-1;
				/*printf("\nend is %d", end);*/
			}
		else
			{
				beg=mid+1;
			/*	  printf("\n BEG is %d",beg);*/
			}

		mid=((beg+end)/2);
	/*	  printf("\n MID is %d",mid);*/

	}

	if (DATA[mid]==ITEM)
	{ loc=mid;

		printf("\n\nData item is found at location %d\n\n",loc+1);


	}

else
	{
		loc=0;


		printf("\n\nData item is not in the list\n\n");

	}

return 0;
}

