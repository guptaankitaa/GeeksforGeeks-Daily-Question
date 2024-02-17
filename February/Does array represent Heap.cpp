class Solution{
    public:
   bool isMaxHeap(int arr[], int n)
    {
        int d=0;
        for(int i=0;i<n-2;i++){
            if(arr[i]<arr[d+i+1] || arr[i]<arr[d+i+2]){
                return 0;
            }
            d++;
        }
        return 1;
    }
};
