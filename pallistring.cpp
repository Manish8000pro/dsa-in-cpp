bool palli(string &s, int start ,int end){

	// base condition 
	if(start>=end){
		return true;
	}

	if(s[start]!=s[end]){
		return false;
	}

	return palli(s,start+1,end-1);
}

bool isPalindrome(string& s) {
    // Your code here
	return palli(s,0,s.size()-1);
}