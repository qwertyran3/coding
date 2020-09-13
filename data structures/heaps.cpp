#include<bits/stdc++.h>

#define ll long long

using namespace std;

// void swap(int *x, int *y);

class minheap{
	int *har;
	int capacity;
	int heap_size;

	public:

	minheap(int cap){
		heap_size=0;
		capacity=cap;
		har = new int[cap];
	}
	int parent(int i){ return (i-1)/2;}
	int left(int i) {return (2*i)+1;}
	int right(int i) {return (2*i)+2;}
	int getmin(){ return har[0];}

	void minheapify(int i){
		
		int l=left(i);
		int r=right(i);
		if(l<heap_size && har[i]>har[l]){ swap(har[i],har[l]); minheapify(l);}
		if(r<heap_size && har[i]>har[r]){swap(har[i],har[r]); minheapify(r);}
	}

	void insertKey(int k){
		if(heap_size==capacity) return;
		heap_size++;
		int i=heap_size-1;
		har[i]=k;
		while(i!=0 && har[i]<har[parent(i)]){
			swap(har[i],har[parent(i)]);
			i=parent(i);
		}

	}
	void decrease_key(int i, int new_val){
		har[i]=new_val;
		while(i!=0 && har[i]<har[parent(i)]){
			swap(har[i],har[parent(i)]);
			i=parent(i);
		}
	}

	int extractmin(){
		if(heap_size<=0) return INT_MAX;
		if(heap_size==1){ heap_size--; return har[0];}
		int root=har[0];
		har[0]=har[heap_size-1];
		heap_size--;
		minheapify(0);
		return root;
	}

	void delete_key(int i){
		har[i]=har[heap_size-1];
		heap_size--;
		minheapify(i);
	}

	void print_heap(){
		cout<<"the heap is =====>\n";
		for(int i=0; i<heap_size; i++)cout<<har[i]<<" ";
		cout<<"\n====================\n";
	}
};

	int main() 
{ 	
    

    minheap h(100); 
    
    while(1){
    	int cas; 
    	cout<<"type\n1 for ins\n2 for del\n3 for extractmin\n4 for decreasekey\n5 for print\n";
    	cout<<"====================\n";
    	cin>>cas;
    	if(cas==1){
    		cout<<"enter no. to insert:";
    		int ele;
    		cin>>ele;
    		h.insertKey(ele);
    		h.print_heap();

    	}else if(cas==2){
    		cout<<"enter index to del:";
    		int ele;
    		cin>>ele;
    		h.delete_key(ele);h.print_heap();
    	}else if(cas==3){
    		cout<<"min value = "<<h.extractmin()<<"\n";h.print_heap();
    	}else if(cas==4){
    		cout<<"enter index amd new value:";
    		int ind,val;
    		cin>>ind>>val;
    		h.decrease_key(ind,val);h.print_heap();
    	}else if(cas==5){
    		h.print_heap();
    	}
    	else break;
    }

    return 0; 
} 