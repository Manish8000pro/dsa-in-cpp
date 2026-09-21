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
        // Leaf node
        if(start == end) {
            tree[node] = (arr[start] == 0);
            return;
        }

        int mid = start + (end - start) / 2;

        // Build left child
        build(2 * node + 1, start, mid, arr);

        // Build right child
        build(2 * node + 2, mid + 1, end, arr);

        // Number of zeros in complete range
        tree[node] =
            tree[2 * node + 1] +
            tree[2 * node + 2];
    }