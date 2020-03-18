## Bubble Sort (stable)
- Traverse the target array repeatedly
- compare two elements every time if they are in wrong order -> swap
- stop till every elements are in right order
- Time complexity: O(n^2) Space complexity: O(1)

## Selection Sort (stable)
- Initilize an empty sorted window to be null and unsorted window to be the size of the target array
- Traverse the unsorted window, get the min/max index and swap it with the first value  of the unsorted window
- iterate n-1 times for the outer loop
- Time complexity: O(n^2) Space complexity: O(1)
