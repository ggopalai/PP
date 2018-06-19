//Freaking timed out -.-
// Removing all occurrences of given element from array? 
//

vector<int>::iterator iter;

    while(1)
    {
        iter = find(A.begin(), A.end(), B);
        if(iter == A.end())
        {
            return A.size();
        }
        else
        A.erase(iter);
    }
A
