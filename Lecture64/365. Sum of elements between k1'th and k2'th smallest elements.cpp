// 365. Sum of elements between k1'th and k2'th smallest elements
long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2) {
    // Your code here
    // max heap 
    priority_queue<long long>pq1,pq2;

    long long sum1 = 0,sum2 = 0;

    for(long long i = 0; i < K1; i++){
        sum1 += A[i];
        pq1.push(A[i]);
    }

    for(long long i = K1;i<N;i++){
        // max heap : k1 smallest integer 

        if(pq1.top()>A[i]){
            sum1 -= pq1.top();
            pq1.pop();
            pq1.push(A[i]);
            sum1 += A[i];
        }
    }

    for(long long i=0;i<K2;i++){
        sum2 += A[i];
        pq2.push(A[i]);
    }
    for(long long i = K2;i<N;i++){
        // max heap : k1 smallest integer 
        if(pq2.top()>A[i]){
            sum2 -= pq2.top();
            pq2.pop();
            pq2.push(A[i]);
            sum2 += A[i];
        }
    }
    return sum2-sum1-pq2.top();
}