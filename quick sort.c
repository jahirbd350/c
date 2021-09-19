#include <stdio.h>
void quicksort (int [], int, int);

int main() {
    int list[50];
    int size, i;

    printf("Enter the number of elements: ");
    scanf("%d", &size);
    printf("Enter the elements to be sorted:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &list[i]);
    }
    quicksort(list, 0, size - 1);
    printf("After applying quick sort\n");
    for (i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
    return 0;
}

void quicksort(int list[], int low, int high) {
    int LOC, BEG, END, temp;
    if (low < high) {
        LOC = low;
        BEG = low;
        END = high;
        while (BEG < END) {
            while (list[BEG] <= list[LOC] && BEG <= high) {
                BEG++;
            }
            while (list[END] > list[LOC] && END >= low) {
                END--;
            }
            if (BEG < END) {
                temp = list[BEG];
                list[BEG] = list[END];
                list[END] = temp;
            }
        }
        temp = list[END];
        list[END] = list[LOC];
        list[LOC] = temp;
        quicksort(list, low, END - 1);
        quicksort(list, END + 1, high);
    }
}
