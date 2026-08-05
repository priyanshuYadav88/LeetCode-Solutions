char nextGreatestLetter(char* letters, int lettersSize, char target) {
    int st = 0,end = lettersSize-1;
    char ans= letters[0]; 

    while(st<=end)
    {
        int mid = st+(end-st)/2;
        if(letters[mid]>target)
        {
           ans = letters[mid];
            end = mid -1;
        }
        else if(letters[mid] <= target)
        {
            st = mid+1;
        }
    }

    return ans;
}