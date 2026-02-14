if(k<=2){
		return k;
	}

	return climbStairs(k-1)+climbStairs(k-2);
    // this code gives the time limited excited