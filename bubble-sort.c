//Bubble Sort
#include<stdio.h>
main()
{
    int N,K;
    printf("Enter the number of element of data: ");
    scanf("%d",&N);

    int DATA[N];
    printf("Enter %d elements of data: \n",N);
    for (int i=1; i<=N; i++)   {
        scanf("%d",&DATA[i]);
    }

    for (K = 1; K < N; K++)   {
        int PTR = 1;
        while (PTR<=N-K)
        {
            if (DATA[PTR] > DATA[PTR+1])
            {
                int temp = DATA[PTR];
                DATA[PTR] = DATA[PTR+1];
                DATA[PTR+1] = temp;
            }
            PTR = PTR + 1 ;
        }
    }

    printf("\nThe sorted element of data is: ");
    for (K = 1; K<=N; K++)   {
        printf("%d ",DATA[K]);
    }
}
