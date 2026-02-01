class Solution {
public:

	bool isnextCharBigger(char first,char next){
		string Roman = "IVXLCDM";

		if(first==next){
			return false;
		}
		
		for(int i=0;i<7;i++){
			if(first==Roman[i]){
				return true;
			}
			else if(next==Roman[i]){
				return false;
			}
		}
	}

	int findvalue(char c){
		string Roman = "IVXLCDM";
		int numbers[] = {1,5,10,50,100,500,1000};

		for(int i=0;i<7;i++){
			if(c==Roman[i]){
				return numbers[i];
			}
		}
	}

    int romanToInt(string s) {
        //Code here

		int n = s.size(),index = 0;
		int answer = 0;

		while(index<n){
			// If my next character is bigger then me 

			if(index!=n-1&&isnextCharBigger(s[index],s[index+1])){
				answer-=findvalue(s[index]);
			}
			else{
				answer+=findvalue(s[index]);
			}
			index++;
		}

		return answer;
    }
};