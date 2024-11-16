class Solution{
public:
	int search(string pat, string txt) {
	   map<char, int> p, t;
        int n = txt.length(), k = pat.length(), ans = 0;

        for (char ch:pat) p[ch]++;

        for (int i=0; i<n; i++) {
            t[txt[i]]++;
            if (i >= k) {
                char l =txt[i- k];
                t[l]--;
                if (t[l]== 0) {
                    t.erase(l);
                }
            }
            if (t==p) ans++;
        }
	   return ans;
	}

};
