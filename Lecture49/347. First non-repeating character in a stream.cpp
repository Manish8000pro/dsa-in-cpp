string firstNonRepeating(string A) {
    vector<int>freq(26,0);
    string result;
    queue <char>q;

    for(int i=0;i<A.size();i++){
        freq[A[i]-'a']++;

        if(freq[A[i]-'a']==1){
            q.push(A[i]);
        }

        while(!q.empty()&&freq[q.front()-'a']>1){
            q.pop();
        }
        if(!q.empty()){
            result.push_back(q.front());
        }
        else{
            result.push_back('#');
        }
        
    }
    
    

    return result;
}