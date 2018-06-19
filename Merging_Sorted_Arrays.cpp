/* Solved in linear time but exceeded memory limit. :/
Would a two pointer technique solve in constant space aswell?
*/

vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {

    multimap<int,int> m;

    for(int i = 0; i < A.size(); i++)
          m.insert(make_pair(A[i],i));

    vector<int> res;
    multimap<int,int>:: iterator iter;
    for(int j = 0; j < B.size(); j++)
    {
         iter = m.find(B[j]);
            if(iter == m.end())
        {
            continue;
        }
        else {
              res.push_back(B[j]);
              m.erase(iter);
              }
    }
    return res;

   }


// two pointer solution
//


while(i < A.size() && j < B.size())
    {
        if(A[i] < B[j]) // moving them closer
            i++;
        else if(A[i] > B[j]) // move closer
            j++;
        else
            {
                res.push_back(A[i]);
                i++;
                j++;
            }
    }
