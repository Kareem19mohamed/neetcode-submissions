class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for (string& w : strs)
        {
            s += to_string(w.length()) + "#" + w;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector < string > ans;

        while (!s.empty())
        {
            int pos = s.find("#");
            int len = stoi(s.substr(0, pos));
            ans.push_back(s.substr(pos + 1,  len));
            s.erase(0, len + pos + 1);
        }
        return ans;
    }
};

