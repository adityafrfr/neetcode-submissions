class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int mssf = -1;

        for (int i = arr.size() - 1; i >= 0; --i)   {
            int temp = arr[i];
            arr[i] = mssf;

            if (temp > mssf)    {
                mssf = temp;
            }

            
        }
        return arr;
    }
};