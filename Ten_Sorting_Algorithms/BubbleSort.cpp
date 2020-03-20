#include<iostream>  
using namespace std;  
#include<cassert>  
  
//冒泡排序  
void BubbleSort1(int* arr, size_t size)  
{  
    assert(arr);  
    int i = 0, j = 0;  
    for (i = 0; i < size - 1; i++)//一共要排序size-1次  
    {  
        for (j = 0; j < size - 1 - i; j++)//选出该趟排序的最大值往后移动  
        {  
            if (arr[j] > arr[j + 1])  
            {  
                int tmp = arr[j];  
                arr[j] = arr[j + 1];  
                arr[j + 1] = tmp;  
            }  
        }  
    }  
}  
  
//冒泡排序优化1  
void BubbleSort2(int* arr, size_t size)  
{  
    assert(arr);  
    int i = 0, j = 0;  
    for (i = 0; i < size - 1; i++)//一共要排序size-1次  
    {  
        //每次遍历标志位都要先置为0，才能判断后面的元素是否发生了交换  
        int flag = 0;  
        for (j = 0; j < size - 1 - i; j++)//选出该趟排序的最大值往后移动  
        {  
            if (arr[j] > arr[j + 1])  
            {  
                int tmp = arr[j];  
                arr[j] = arr[j + 1];  
                arr[j + 1] = tmp;  
                flag = 1;//只要有发生了交换，flag就置为1  
            }  
        }  
        //判断标志位是否为0，如果为0，说明后面的元素已经有序，就直接return  
        if (flag == 0)  
        {  
            return;  
        }  
    }  
}  
  
//冒泡排序优化2  
void BubbleSort3(int* arr, size_t size)  
{  
    assert(arr);  
    int i = 0, j = 0;  
    int k = size - 1,pos = 0;   //pos变量用来标记循环里最后一次交换的位置       
    for (i = 0; i < size - 1; i++)  //一共要排序size-1次  
    {  
        //每次遍历标志位都要先置为0，才能判断后面的元素是否发生了交换  
        int flag = 0;  
        for (j = 0; j < k; j++)//选出该趟排序的最大值往后移动  
        {  
            if (arr[j] > arr[j + 1])  
            {  
                int tmp = arr[j];  
                arr[j] = arr[j + 1];  
                arr[j + 1] = tmp;  
                flag = 1;   //只要有发生了交换，flag就置为1  
                pos = j;    //循环里最后一次交换的位置 j 赋给pos  
            }  
        }  
        k = pos;  
        //判断标志位是否为0，如果为0，说明后面的元素已经有序，就直接return  
        if (flag == 0)  
        {  
            return;  
        }  
    } 
}  
  
int main()  
{  
    int arr[5] = { 5,4,3,2,1 };  
    cout << "初始顺序为：";  
    for (int i = 0; i < 5; i++)  
    {  
        cout << arr[i] << " ";  
    }  
    cout << endl;  
    /*BubbleSort1(arr, 5);*/  
    /*BubbleSort2(arr, 5);*/  
    BubbleSort3(arr, 5);  
    cout << "冒泡排序后顺序为：";  
    for (int i = 0; i < 5; i++)  
    {  
        cout << arr[i] << " ";  
    }  
    cout << endl;  
    system("pause");  
    return 0;  
}  
