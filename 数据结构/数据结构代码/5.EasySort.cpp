#include <stdio.h>

// 简单选择排序函数
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // 将当前位置设为最小值的索引
        int min_index = i;
        // 寻找未排序部分中的最小值
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // 将找到的最小值与当前位置交换
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}

// 测试函数
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 调用简单选择排序函数
    selectionSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
