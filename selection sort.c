// selection sort
#include<stdio.h>
main()
{
    int N;
    printf("Enter element numbers: ");
    scanf("%d", &N);
    int A[N];
    printf("Enter elements: ");
    for(int i=1; i<=N; i++)
    {
        scanf("%d",&A[i]);
    }

    for(int k=1; k<=N; k++)
    {
        int min = A[k];
        int loc = k;

        for(int j=k+1; j<=N; j++)
        {
            if(min>A[j])
            {
                min = A[j];
                loc = j;
            }
        }

        int temp = A[k];
        A[k] = A[loc];
        A[loc] = temp;
    }

    printf("After sorting : ");
    for(int s=1; s<=N; s++)
        printf("%d ",A[s]);
}
