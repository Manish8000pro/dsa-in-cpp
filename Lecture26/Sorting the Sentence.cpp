class Solution {
public:
    string sortSentence(string s) {
        //Code here

		vector<string>position(10);
		string word;

		for(int i = 0;i<s.size();i++){
			if(s[i]>='1'&&s[i]<='9'){
				int index = s[i]-'0';
				position[index] = word;
				word.clear();
			}
			else{
				word.push_back(s[i]);
			}
		}

		string ans;

		for(int i=0;i<10;i++){
			if(position[i].size()==0){
				break;
			}
			ans+=position[i];
		}
		return ans;
    }
	
};