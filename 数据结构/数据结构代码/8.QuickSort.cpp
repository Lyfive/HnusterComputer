#include <stdio.h>

// 交换数组中的两个元素
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 将数组分区，并返回分区点的索引
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // 选择最后一个元素作为基准值
    int i = (low - 1); // 设置分区点的索引

    for (int j = low; j <= high - 1; j++) {
        // 如果当前元素小于或等于基准值，则将其交换到分区点的右侧
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    // 将基准值交换到正确的位置
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// 快速排序函数
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // 获取分区点的索引
        int pi = partition(arr, low, high);

        // 递归地对分区点左侧和右侧的子数组进行排序
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// 测试函数
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 调用快速排序函数
    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
