class Solution {
public:

//Yes ya no

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


// ========================================================

// Second solution+++++++++++++++++++++++++++++++++++++++++++


// class Solution {
// public:

// 	int num(char c){
// 		if(c=='I'){
// 			return 1;
// 		}
// 		else if(c=='V'){
// 			return 5;
// 		}
// 		else if(c=='X'){
// 			return 10;
// 		}
// 		else if(c=='L'){
// 			return 50;
// 		}
// 		else if(c=='C'){
// 			return 100;
// 		}
// 		else if(c=='D'){
// 			return 500;
// 		}
// 		else{
// 			return 1000;
// 		}

// 	}

//     int romanToInt(string s) {
//         //Code here
// 		int sum = 0,index=0;

// 		while(index<s.size()-1){
// 			if(num(s[index])<num(s[index+1])){
// 				sum-=num(s[index]);
// 			}
// 			else{
// 				sum+=num(s[index]);
// 			}
// 			index++;
// 		}

// 		sum+=num(s[index]);
// 		return sum;
//     }
// };