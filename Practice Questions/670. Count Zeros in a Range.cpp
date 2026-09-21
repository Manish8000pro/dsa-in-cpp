//670. Count Zeros in a Range 
// learning 
class SegmentTree {
public:
    vector<int> tree;
    int n;

    // Constructor
    SegmentTree(vector<int>& arr) {
        n = arr.size();

        tree.resize(4 * n);

        build(0, 0, n - 1, arr);
    }

    // Build Segment Tree
    void build(int node, int start, int end, vector<int>& arr) {