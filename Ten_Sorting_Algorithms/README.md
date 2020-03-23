## Bubble Sort (stable)
- Traverse the target array repeatedly
- compare two elements every time if they are in wrong order -> swap
- stop till every elements are in right order
- Time complexity: O(n^2) Space complexity: O(1)

## Quick Sort (Unstable)
- Write out recursive trees to help implementation
- Time complexity: O(nlogn) Space complexity: O(nlogn)

## Selection Sort (stable)
- Initilize an empty sorted window to be null and unsorted window to be the size of the target array
- Traverse the unsorted window, get the min/max index and swap it with the first value  of the unsorted window
- iterate n-1 times for the outer loop
- Time complexity: O(n^2) Space complexity: O(1)

## Heap Sort (Unstable)
- Time complexity: O(nlogn) Space complexity: O(1)

## Counting Sort (stable)
- Initializa an extra space that stores the frequency of the ith element at the ith index
- Release the extra space in order
- Time complexity: O(n+k) Space complexity: O(n+k)

## Merge Sort (stable)
- Divide the lenght n array into two length n/2 subarrays
- Repeat
- mergeSort
- Time complexity: O(nlogn) Space complexity: O(n)
