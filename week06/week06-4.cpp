class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string s : operations){
            int N=a.size(); //have N numbers
            if(s=="+") a.push_back(a[N-1]+a[N-2]); //最後2筆相加
            else if(s=="D") a.push_back(a[N-1]*2); //最後1筆相乘
            else if(s=="C") a.pop_back(); //remove
            else a.push_back(stoi(s)); //add numbers
        }
        int ans=0; //把全部加起來
        for(int b:a) ans += b;
        return ans;
    }
};