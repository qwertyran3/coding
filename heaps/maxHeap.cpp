#include<bits/stdc++.h>

#define ll long long

using namespace std;

struct maxheap{
	int *har;
	int capacity;
	int heap_size;

	maxheap(int cap){
		heap_size=0;
		capacity=cap;
		har=new int[cap];
	}

	int parent(int i) return (i-1)/2;
	int left(int i) return 2*i+1;
	int right(int i) return 2*i+2;
	int getmax() return har[0];

	void maxheapify(int i){
		int large=i;
		int l=left(i);
		int r=right(i);

		if(l<heap_size && har[large]<har[l]) large=l;
		if(r<heap_size && har[large]<har[r]) large=r;

		if(large!=i){
			swap(har[i],har[large]);
			maxheapify(large);
		}

	}

	void insert_key(int x){
		heap_size++;
		int i=heap_size-1;
		har[i]=x;

		while(i!=0 && har[i]>har[parent(i)]){
			swap(har[i],har[parent(i)]);
			i=parent(i);
		}

	}

	bool isleaf(int i){
		if(i>heap_size/2 && i<heap_size) return 1;
		else return 0;
	}

	int extract_max(){
		if(heap_size<=0) return INT_MIN;
		if(heap_size==1){ heap_size--; return har[0];}
		int root=har[0];
		har[0]=har[heap_size-1];
		heap_size--;
		maxheapify(0);
		return root;

	}

	void delete_key(int k){
		har[k]=har[heap_size-1];
		heap_size--;
		maxheapify(k);
	}
}