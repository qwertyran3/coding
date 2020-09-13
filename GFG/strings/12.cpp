int strstr(string s,string x){
	ll n1=s.size(),n2=x.size();
	if(n2>n1) return -1;
	int i,j;
	int(i=0; i<=n1-n2; i++){
		for(j=0; j<n2; j++){
			if(s[i+j]!=x[j]) break;
		}
		if(j==n) return i;

	}
	return -1;

}