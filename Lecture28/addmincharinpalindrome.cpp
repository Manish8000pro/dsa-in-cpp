// QQQQQQQQQQQQQQQQQ.Min Chars to Add for Palindrome<<<<<<<<<<<<<<<<<<<


int minChar(string &s) {
    // Your code here
    string temp = s;
	reverse(temp.begin(),temp.end());
	
	int n = s.size();
	s+=temp;

	int prefix = 0,suffix = 1;
	
	vector<int>LPS(s.size(),0);

	while(suffix<s.size()){
		if(s[suffix]==s[prefix]){
			LPS[suffix]=prefix+1;
			suffix++,prefix++;
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

	if(n-LPS[s.size()-1]>=0){
		return n-LPS[s.size()-1];
	}
	return 0;
}