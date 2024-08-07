#include<stdio.h>
//交换数组中的两个元素
void swap(int*a,int *b){
    int temp = 0;
    temp = *a;
    *a=*b;
    *b=temp;
}
//调整堆
void heapify(int arr[],int n,int i){//递归函数 两个if是递归出口 最下面的if是递归的工具
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    //larget left 和right的关系反应是完全二叉树的要求

    //右子节点比最大值大
    if(left<n&&arr[left]>arr[largest]){
        largest=left;
    }

    //如果右子节点比最大值大
    if(right<n&&arr[right]>arr[largest]){
        largest = right;
    }

    //如果最大值不是当前节点，就交换二者
    if(largest!=i){
        swap(&arr[i],&arr[largest]);
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[],int n){
    for(int i=n-1;i>0;i--){
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}

// 测试函数
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 调用堆排序函数
    heapSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}