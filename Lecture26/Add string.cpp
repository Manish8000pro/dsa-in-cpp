class Solution {
public:
    string addStrings(string num1, string num2) {
        //Code here

		int Endfirst = num1.size()-1,Endsecond = num2.size()-1,carry = 0;

		string ans;

		while(Endfirst>=0|| Endsecond>=0||carry!=0){

			int sum = carry;

			if(Endfirst>=0){
				sum+=num1[Endfirst]-'0';
				Endfirst--;
			}
			if(Endsecond>=0){
				sum+=num2[Endsecond]-'0';
				Endsecond--;
			}

			ans.push_back(sum%10+'0');
			carry = sum/10;

			// Reverse the array 

			
		}
		reverse(ans.begin(),ans.end());
		return ans;
    }
	
}; 