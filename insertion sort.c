// insertion sort

#include<stdio.h>
main()
{
    int N;
    printf("Enter elements number: ");
    scanf("%d",&N);
    int A[N];
    printf("Enter element: ");
    for(int i=1; i<=N; i++)
        scanf("%d",&A[i]);
    A[0] = -9999999999999;

    for(int k=2; k<=N; k++)
    {
        int temp = A[k];
        int ptr = k-1;

        while(temp <A[ptr])
        {
            A[ptr+1] = A[ptr];
            ptr= ptr - 1;
        }
        A[ptr+1] = temp;
    }

    printf("After insertion sort: ");
    for(int j=1; j<=N; j++)
        printf("%d ",A[j]);
}
