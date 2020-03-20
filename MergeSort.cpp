void mergeArray(int arr[], int first, int mid, int last, int temp[])
{
	int i = first;   //第一个序列开始位置
	int j = mid + 1; //第二个序列开始位置
	int m = mid;     //第一个序列结束位置
	int n = last;    //第二个序列结束位置
	int k = 0;       //temp下标
	while (i <= m && j <= n)  //序列一二是否放完
	{
		if (arr[i] < arr[j])  //k一直++，i,j任意时刻只有一个++
			temp[k++] = arr[i++];
		else
			temp[k++] = arr[j++];
	}
	while (i <= m)  //序列一是否放完
	{
		temp[k++] = arr[i++];
	}
	while (i <= m && j <= n)  //序列一二是否放完
	{
		temp[k++] = arr[j++];
	}
	//合并成一个有序序列
	for (i = 0; i < k; i++)
	{
		arr[first + i] = temp[i];
	}
}
void merge(int arr[], int first, int mid, int last, int temp[])
{
	int mid;
	if (first >= last)
		return;
	mid = (first + last) / 2;
	merge(arr,first,mid,temp);
	merge(arr, mid+1, last, temp);
	mergeArray(arr, first, mid,last,temp);
}
void mergeSort(int arr[], int num)
{
	int *temp = (int *)malloc(sizeof(arr[0])*num);
	if (temp == NULL)
		return;
	merge(arr, 0, num - 1, temp);
}
