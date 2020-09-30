#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define loop(i,n)  for(ll i=0; i<n; i++)


int const lmt=1e5+5;

struct Queue{
	int f,r;
	int a[lmt];
	Queue(){
		f=0; r=0;

	}

	bool empty(){
		return(f==r);
	}

	int front(){
		return a[f];
	}

	void push(int x){
		a[r++]=x;
	}

	void pop(){
		f++;
	}

	int size(){
		return r-f;
	}
};


int main(){
	#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
	#endif

	Queue q;
	int x;
	loop(i,4) {cin>>x; q.push(x);}

	q.pop();
	cout<<q.front()<<" "<<q.size()<<endl;
}