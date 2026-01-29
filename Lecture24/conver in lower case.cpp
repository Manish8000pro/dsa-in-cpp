string toLower(string &s) {
    // Your code here

	for(int i = 0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z'){
			s[i] = 'a'+ (s[i]-'A');
		}
	}
	return s;
}