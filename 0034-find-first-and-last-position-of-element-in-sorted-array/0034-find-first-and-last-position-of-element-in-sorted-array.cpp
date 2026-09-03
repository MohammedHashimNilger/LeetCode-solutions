class Solution {
public:

    int firstOccurrence(vector<int>& arr, int key)
    {
        int start = 0;
        int end = arr.size() - 1;
        int ans = -1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (key == arr[mid])
            {
                ans = mid;
                end = mid - 1;       // search left
            }
            else if (key > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return ans;
    }

    int lastOccurrence(vector<int>& arr, int key)
    {
        int start = 0;
        int end = arr.size() - 1;
        int ans = -1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (key == arr[mid])
            {
                ans = mid;
                start = mid + 1;      // search right
            }
            else if (key > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target)
    {
        int first = firstOccurrence(nums, target);
        int last = lastOccurrence(nums, target);

        return {first, last};
    }
};