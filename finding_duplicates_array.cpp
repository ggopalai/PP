/* This is to find all duplicates in an array.
An input N (array size) is given, the range of elements in the array is 1 to n-1.
Could be more than 2 duplicates also.
To solve in O(1) extra space and O(n) time.*/
// Does not work for negative numbers.
// There needs to be a limit of biggest number, possible n-1;
vector<int> returnDuplicates(const std::vector<int> A;)
{
  std::vector<int> v;
  for(int i = 0; i < n ; i++)
  {
    if(A[abs(A[i])] > 0)
        A[abs(A[i])] == -A[abs(A[i])];
    else
        v.push_back(abs(A[i])); // the duplicate numbers will lead to already visited indices.
  }
}
