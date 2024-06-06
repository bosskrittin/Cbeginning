#include <stdio.h>
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
   int temp;
    for (int i = 0; i < size/2 ; i++) {
        temp = tab[i];
        tab[i] = tab[size - i -1];
        tab[size - i - 1] = temp;
    }
}

// วนลุปประมาณนี้
// 1,2,3,7,5,6,4
// 4,2,3,7,5,6,1
// 4,6,3,7,5,2,1
// 4,6,5,7,3,2,1

int main ()
{
    int arr[] = {1, 2, 3, 7, 5, 6, 4}; // ขนาดของอาร์เรย์ arr คือ 7 
    int size = sizeof(arr) / sizeof(arr[0]); //SIZE(arr)ใช้สำหรับหาขนาดของอาร์เรย์ arr โดยการใช้ sizeof(arr) หารด้วย sizeof(arr[0])

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ft_rev_int_tab(arr, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

