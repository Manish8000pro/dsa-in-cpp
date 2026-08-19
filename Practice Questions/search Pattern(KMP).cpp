// search Pattern (KMP)
class Solution {
  public:
    vector<int> search(string &pat, string &txt) {
        // code here
        int n = txt.size(),m = pat.size();

		vector<int>LPS(m,0);
		vector<int>ans;

		int prefix = 0,suffix = 1;

		while(suffix<m){
			if(pat[prefix]==pat[suffix]){
				LPS[suffix]=prefix+1;
				prefix++,suffix++;
			}
			else{
				if(prefix==0){
					suffix++;
				}
				else{
					prefix=LPS[prefix-1];
				}
			}
		}

		prefix = 0,suffix=0;

		while(prefix<n&&suffix<m){
			if(txt[suffix]==pat[prefix]){
				prefix++,suffix++;
			}
			else{
				if(prefix==0){
					suffix++;
				}
				else{
					prefix = LPS[prefix-1];
				}
			}
		}

		//  KMP Search
		   int i = 0; // text index
		   int j = 0; // pattern index

		   while (i < n) {
		       if (txt[i] == pat[j]) {
		           i++;
		           j++;
		       }

		       if (j == m) {
		           ans.push_back(i - j);   // match found
		           j = LPS[j - 1];
		       }
		       else if (i < n && txt[i] != pat[j]) {
		           if (j == 0) {
		               i++;
		           } else {
		               j = LPS[j - 1];
		           }
		       }
		 }

		   return ans;
    }
};