    public int partition(int[] a, int low, int high){
        int left = low;
        int right = high;
        int pivot = a(low);

        while(true){
            while(left<high && a(left)<=pivot){
                left++;
            }
            while(right>low && a(right)>=pivot){
                right--;
            }
            if (left>=right) break;
            swap(a(left),a(right));
        }
        swap(a(low),a(right));
        return right;
    }
    
    public void quickSort(int[] a, int low, int high){
        if (low<high){
            int s = partition(a, low, high);
            quickSort(a, low, s-1);
            quickSort(a, s+1, high);
        }
    }
