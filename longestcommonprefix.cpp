int checkVector(vector<char>& V) // checking if all corresponding chars from strings are equal
    {

        if(V.size() == 2)
        {
            if( V[0] == V[1])
                return 1;
            else
                return 0;
        }
        for( int i = 0 ; i < V.size()-1; i++)
        {
            if( V[i] != V[i+1])
                return 0;

        }
        return 1;
    }

    string longestCommonPrefix(vector<string>& strs) {

        string tu = "";
        if(strs.size() == 0)
            return tu;

        string s = "";
        vector<char> v;
        int min = strs[0].length();
        for(int i = 1; i < strs.size(); i++) // to minimize number of checks
            if(min > strs[i].length())
                min = strs[i].length();


        for(int j = 0 ; j < min; j++)  // jth letter of each string
        {
            for( int k = 0 ; k < strs.size(); k++) // iterating thru outer vector of strings
            {
                v.push_back(strs[k][j]);
            }

            int yo = checkVector(v); // to check if vector is equal

            if(yo)
                s += v[0]; //add to string if all strings have that character
            else
                return s;


            v.clear();
        }

        return s;


    }
