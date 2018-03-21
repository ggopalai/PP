a = [2,-1,2,3,4,-5]

max = 0;
max_till_now = 0;

for i in range(0,len(a)):
    max_till_now =  a[i] if (a[i] > max_till_now + a[i]) else max_till_now + a[i] #at each stage, to compare if the previous subarray is greater, else, start off with this number
    if max_till_now > max:
        max = max_till_now
print (max)

"""
for subsequence, just add an extra case where u consider only if it is positiveself.
if all negative, return the smallest number. ( corner case)
"""
