//107. Baseball Game
int calPoints(vector<string>& operations) {
    vector<int> st;

    for(const string& op:operations){
        if(op == "+"){
            int top1 = st.back();
            int top2 = st[st.size()-2];
            st.push_back(top1+top2); 
        }
        
        else if(op == "D"){
            st.push_back(2*st.back());
        }
        else if(op == "C"){
            st.pop_back();
        }
        else {
            st.push_back(stoi(op));
        }
    }

    int sum = 0;
    for(int score:st){
        sum+=score;
    }
    return sum;
}