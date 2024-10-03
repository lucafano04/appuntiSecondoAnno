int ric(int v[],int start, int end, int val){
	int mid = (end - start)/2 + start;
	if(v[mid] == val)
		return mid;
	if(mid == start && mid == end)
		return -1;
	if(v[mid] > val )
		return ric(v,start,mid-1,val);
	else
		return ric(v,mid+1,end,val); 
}