#include <stdio.h>

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



int main() {
    int arr[] = {5, 2, 9, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ft_sort_int_tab(arr, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

