/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int firstOccurrence(int* nums, int numsSize, int target)
{
    int st = 0;
    int end = numsSize - 1;
    int ans = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (nums[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (nums[mid] < target)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int lastOccurrence(int* nums, int numsSize, int target)
{
    int st = 0;
    int end = numsSize - 1;
    int ans = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (nums[mid] == target)
        {
            ans = mid;
            st = mid + 1;
        }
        else if (nums[mid] < target)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize)
{
    *returnSize = 2;

    int* ans = (int*)malloc(2 * sizeof(int));

    ans[0] = firstOccurrence(nums, numsSize, target);
    ans[1] = lastOccurrence(nums, numsSize, target);

    return ans;
}