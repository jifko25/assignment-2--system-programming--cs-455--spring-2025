#include <stdio.h>
#include <string.h>
#include <limits.h>

void printArray(int studentGrades[], int n){
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", studentGrades[i]);
        }
    } 
}

void findMin(int studentGrades[], int n){
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (studentGrades[i] < min) {
            min = studentGrades[i];
        }
    }
    printf("Minimum grade: %d\n", min);
}

void findMax(int studentGrades[], int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (studentGrades[i] > max) {
            max = studentGrades[i];
        }
    }
    printf("Maximum grade: %d\n", max);
}

void averageGrades(int studentGrades[], int row[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += row[i];
    }
    return (float)sum / n;
}

int main(){
    int studentGrades[3][4] = {
        {77, 68, 86, 73},
        {96, 87, 89, 78},
        {70, 90, 86, 81}
    };
    int n = sizeof(studentGrades) / sizeof(studentGrades[0]);

    char input[5];

    printf("Enter 0 to print all grades");
    printf("Enter 1 to find the minimum grade");
    printf("Enter 2 to find the maximum grade");
    printf("Enter 3 to print the average of all grades for each student");
    printf("Enter 4 to end program");
    scanf("%s", input);

    if (strcmp(input, "0") == 0) {
        printArray(studentGrades, n);
    }

    else if (strcmp(input, "1") == 0) {
        findMin(studentGrades, n);
    }

    else if (strcmp(input, "2") == 0) {
        findMax(studentGrades, n);
    }

    else if (strcmp(input, "3") == 0) {
        averageGrades(studentGrades, int row, n);
    }

    else if (strcmp(input, "4") == 0) {
        return 0;
    }

    else {
        printf("Invalid Input\n");
    }
    return 0;
}
