class Solution {
public:
    string multiply(string num1, string num2) {
        int m = num1.size();
        int n = num2.size();
        
        if (m < n) {
            swap(num1, num2);
            swap(m, n);
        }
        
        if (num2 == "0") return "0";
        
        vector<int> v(m + n);
        
        for (int i = n - 1; i >= 0; i--) {
            int idx = n - 1 - i;
            for (int j = m - 1; j >= 0; j--) {
                int a = num1[j] - '0';
                int b = num2[i] - '0';
                v[idx] += a * b;
                idx++;
            }
        }
        
        string res;
        int carry = 0;
        
        for (int i = 0; i < m + n; i++) {
            int num = v[i] + carry;
            if (i == m + n - 1 && num == 0) break;
            carry = num / 10;
            num %= 10;
            res.push_back((char)num + '0');
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};