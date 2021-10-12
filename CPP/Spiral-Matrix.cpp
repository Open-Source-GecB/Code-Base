class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0, right = m - 1, top = 0, bot = n - 1;
        int count = 0, total = n * m;
        vector<int> ans;
        while(left <= right || top <= bot)
        {
            for(int i = top; i <= bot; i++)
            {
                ans.push_back(matrix[i][left]);
                count++;
            }
            if(count == total)
                break;
            if(left < right)
                left++;

            for(int i = left; i <= right; i++)
            {
                ans.push_back(matrix[bot][i]);
                count++;
            }
            if(count == total)
                break;
            if(bot > top)
                bot--;

            for(int i = bot; i >= top; i--)
            {
                ans.push_back(matrix[i][right]);
                count++;
            }
            if(count == total)
                break;
            if(right > left)
                right--;

            for(int i = right; i >= left; i--)
            {
                ans.push_back(matrix[top][i]);
                count++;
            }
            if(count == total)
                break;
            if(top < bot)
                top++;
        }
        return ans;
    }

};
