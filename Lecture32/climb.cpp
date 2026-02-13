if(n<=2){
		return n;
	}

	return climbStairs(n-1)+climbStairs(n-2);
    // this code gives the time limited excited