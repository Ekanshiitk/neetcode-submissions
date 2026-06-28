class Solution {
public:
    void merge(vector<int>& arr, int l, int mid, int r){
        int n1 = mid-l+1, n2 = r-mid;
        vector<int> L(n1), R(n2);
        for(int i = 0; i < n1; i++){
            L[i] = arr[i+l];
        }
        for(int i = 0; i < n2; i++){
            R[i] = arr[mid+1+i];
        }
        int i =0, j = 0, k = l;
        while(i < n1 && j < n2){
            if(L[i]<=R[j])
            arr[k++] = L[i++];
            else
            arr[k++] = R[j++];
        }
        for(;i<n1;) arr[k++] = L[i++];
        for(;j<n2;)arr[k++] = R[j++];
    }
    void mergeSort(vector<int>& arr, int l, int r){
        if(l>=r)
        return;
        int mid = l+(r-l)/2;
        mergeSort(arr, l ,mid );
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid , r);

    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        mergeSort(nums, 0, n-1);
        return nums;
    }
};