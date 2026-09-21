class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>temp(n);
        k%= n;
        int i = n-k;
        int j=0;
        for(int i=n-k; i<n; i++)
        {
            temp[j]=nums[i];
            j++;
        }
        for(i=0; i<n-k; i++)
        {
        temp [j]=nums[i];
        j++;
        }
        nums=temp;
    }
};


        