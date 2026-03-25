int timeRequiredToBuy(vector<int>& tickets, int k) {
    int totalTime = 0;

    for(int i=0;i<=k;i++){
        totalTime+= min(tickets[i],tickets[k]);
    }

    for(int i=k+1;i<tickets.size();i++){
        totalTime+= min(tickets[i],tickets[k]-1);
    }
    return totalTime;
}