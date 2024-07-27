#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void ft_sort_int_tab(int *tab, int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

// วนลุปประมาณนี้
// 5,2,9,1,6
// 2,5,1,6,9
// 2,1,5,6,9,
// 1,2,5,6,9,



// int main() {
//     //int arr[] = {5, 2, 9, 1, 6};
// 	int arr[] = {94, 27, 57, 93, 71, 19, 97, 18, 70, 49, 85, 79, 89, 68, 28, 95, 32, 52, 9, 77};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     ft_sort_int_tab(arr, size);

//     printf("Sorted array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

// Quicksort functions
int partition(int *arr, int low, int high);

void quicksort(int *arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int partition(int *arr, int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

// Function to generate an array with random integers
void generate_random_array(int *arr, int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10000; // Random integers between 0 and 9999
    }
}

// Function to copy an array
void copy_array(int *src, int *dest, int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = src[i];
    }
}

int main() {
    int size = 10000; // Size of the array
    int *arr1 = (int *)malloc(size * sizeof(int));
    int *arr2 = (int *)malloc(size * sizeof(int));

    // Generate a random array and copy it
    generate_random_array(arr1, size);
    copy_array(arr1, arr2, size);

    // Measure time for bubble sort
    clock_t start = clock();
    ft_sort_int_tab(arr1, size);
    clock_t end = clock();
    double bubble_sort_time = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Measure time for quicksort
    start = clock();
    quicksort(arr2, 0, size - 1);
    end = clock();
    double quicksort_time = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Print the results
    printf("Bubble Sort Time: %f seconds\n", bubble_sort_time);
    printf("Quicksort Time: %f seconds\n", quicksort_time);

    // Free allocated memory
    free(arr1);
    free(arr2);

    return 0;
}