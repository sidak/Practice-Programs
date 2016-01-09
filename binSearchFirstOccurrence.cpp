#include<bits/stdc++.h>
using namespace std;

int binarySearch(int l, int h, int x, vector<int> & inp){
	int idx = -1;

	while(l<=h){
		int midIdx =  (l+h)/2;
		if(inp[midIdx] > x){
			h = midIdx -1;
		}
		else if(inp[midIdx] < x){
			l = midIdx +1;
		}
		else{
			h = midIdx - 1;
			idx = midIdx;
		}
	}
	return idx;
}
int main(){
	int n;
	cin>>n;

	vector<int> inp;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		inp.push_back(x);
	}
	// assume that the vector passed is sorted
	int num;
	cin>>num;
	cout<<binarySearch(0, n-1, num, inp)<<endl;
}
