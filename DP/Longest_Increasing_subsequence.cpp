To find out the length of the longest increasing subsequence. quadratic run time. 

int Solution::lis(const vector<int> &A) {

    int n = A.size();
    int arr[n];
    for(int i = 0; i < n ; i++)
        arr[i] = 1;

    for(int i = 1; i < n ; i++)
        for(int j = 0; j < i;)
            {
                if( A[j] < A[i])
                    {
                        arr[i] = max(arr[j]+1,arr[i]);
                        j++;
                    }
                else
                    j++;
            }

    int max = 1;
    for(int k = 0; k < n ; k++)
        if(arr[k] > max)
            max = arr[k];

    return max;

}
