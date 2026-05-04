// Q.114 Takes gifts 
long long pickGifts(vector<int>& gifts, int k) {
    // Max heap build kro 
    priority_queue<int>pq(gifts.begin(),gifts.end());

    while(k--) {
        int x = pq.top();
        pq.pop();
        pq.push((int)sqrt(x));
    }

    long long answer = 0;

    while(!pq.empty()) {
        answer += pq.top();
        pq.pop();
    }
    return answer;
}