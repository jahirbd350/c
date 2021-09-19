// Find index
#include<stdio.h>

main()
{
    char T[200],P[100];
    printf("Enter the text: ");
        gets(T);

    printf("Enter string to find index: ");
        gets(P);

    int R = strlen(P);
    int S = strlen(T);
    int k=1, max = S-R+1, index=0, l;

    //step 2
    while(k<=max)
    {
        //step 3
        for(l=1; l<=R; l++)
        {
            if(P[l] != T[k+l-1])
                //step 5
                break;
        }
        if(l==R) {
            index = k;
            break;
        }
        else {
            k++;
        }

    }

    if(index == 0)
        printf("The string is not found.");
    else
        printf("The index is %d",index);

}
