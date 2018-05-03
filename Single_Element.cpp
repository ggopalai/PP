"""
To find the single element in an array that appears only once. All the other elements appear TWICE.
Contraints : TC - Linear SC - O(1)
"""

int findUnique(int arr[])
{
  if(arr.length() == 1) // Corner case
    return arr[0];

  int res = arr[0] ^ arr[1];
  for(int i = 2 ; i < arr.length(); i++)
      res ^= arr[i];                     // bitwise XOR with all the elements
  return res;
}

"""
So a number when XORed with itself, gives 0. And XOR is commutative.
So XORing all the elements together, will cancel out the pairs and leave the unique element.
"""
