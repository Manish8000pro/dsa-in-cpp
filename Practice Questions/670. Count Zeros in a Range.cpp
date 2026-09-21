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

    // Update
    void update(int index, int val) {
        updateHelper(0, 0, n - 1, index, val);
    }


    // Recursive update helper
    void updateHelper(int node, int start, int end,
                      int index, int val) {

        // Reached the required index
        if(start == end) {

            // 0 -> 1
            // non-zero -> 0
            tree[node] = (val == 0);

            return;
        }

        int mid = start + (end - start) / 2;

        // Go left
        if(index <= mid) {
            updateHelper(
                2 * node + 1,
                start,
                mid,
                index,
                val
            );
        }

        // Go right
        else {
            updateHelper(
                2 * node + 2,
                mid + 1,
                end,
                index,
                val
            );
        }
        // Recalculate current node
        tree[node] =
            tree[2 * node + 1] +
            tree[2 * node + 2];
    }


    // Query
    int query(int left, int right) {
        return queryHelper(0, 0, n - 1, left, right);
    }


    // Recursive query helper
    int queryHelper(int node, int start, int end,
                    int left, int right) {

        // No overlap
        if(end < left || start > right) {
            return 0;
        }

        // Complete overlap
        if(left <= start && end <= right) {
            return tree[node];
        }

        int mid = start + (end - start) / 2;
        // Query left child
        int leftZeros = queryHelper(
            2 * node + 1,
            start,
            mid,
            left,
            right
        );

        // Query right child
        int rightZeros = queryHelper(
            2 * node + 2,
            mid + 1,
            end,
            left,
            right
        );
        return leftZeros + rightZeros;
    }
};