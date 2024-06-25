class Solution {
public:
    void merge(vector<int> &arr, vector<int> &indices, vector<int> &count, int low, int mid, int high) {
        vector<int> temp(high - low + 1);
        vector<int> tempIndices(high - low + 1);
        int left = low;
        int right = mid + 1;
        int k = 0;
        
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp[k] = arr[left];
                tempIndices[k] = indices[left];
                count[indices[left]] += (right - mid - 1);
                left++;
            } else {
                temp[k] = arr[right];
                tempIndices[k] = indices[right];
                right++;
            }
            k++;
        }
        
        while (left <= mid) {
            temp[k] = arr[left];
            tempIndices[k] = indices[left];
            count[indices[left]] += (right - mid - 1);
            left++;
            k++;
        }
        
        while (right <= high) {
            temp[k] = arr[right];
            tempIndices[k] = indices[right];
            right++;
            k++;
        }
        
        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
            indices[i] = tempIndices[i - low];
        }
    }

    void mergeSort(vector<int> &arr, vector<int> &indices, vector<int> &count, int low, int high) {
        if (low >= high) return;
        int mid = (low + high) / 2;
        mergeSort(arr, indices, count, low, mid);
        mergeSort(arr, indices, count, mid + 1, high);
        merge(arr, indices, count, low, mid, high);
    }

    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(n, 0);
        vector<int> indices(n, 0);
        
        for (int i = 0; i < n; ++i) {
            indices[i] = i;
        }
        
        mergeSort(nums, indices, count, 0, n - 1);
        return count;
    }
};
