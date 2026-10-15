//116. Relative Ranks
vector<string> findRelativeRanks(vector<int>& score) {
    int n = score.size();
    vector<int> sortedScore = score;
    sort(sortedScore.rbegin(), sortedScore.rend());