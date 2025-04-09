#include <stdio.h>
#include <string.h>

void bubbleSortAscending(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void bubbleSortDescending(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int a[] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37}; 
    int n = sizeof(a) / sizeof(a[0]);

    char input[5];

    printf("Enter 1 to sort in ascending order, enter 2 for descending order: ");
    scanf("%s", input);

    if (strcmp(input, "1") == 0) {
        bubbleSortAscending(a, n);
        printf("Sorted array in ascending order: \n");
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    else if (strcmp(input, "2") == 0) {
        bubbleSortDescending(a, n);
        printf("Sorted array in descending order: \n");
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    else {
        printf("Invalid Input\n");
    }
    
    return 0;
}