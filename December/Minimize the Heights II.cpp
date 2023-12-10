class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
          sort(arr,arr+n);
        int result = arr[n - 1] - arr[0];

        for (int i = 1; i < n; i++) {
            if(arr[i]-k<0)continue;
            int currentMax = max(arr[i - 1] + k, arr[n - 1] - k);
            int currentMin = min(arr[0] + k, arr[i] - k);

            result = min(result, currentMax - currentMin);
        }

        return result;
    }
};
