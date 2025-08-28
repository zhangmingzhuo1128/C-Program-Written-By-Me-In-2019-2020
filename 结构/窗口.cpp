#include<bits/stdc++.h>
using namespace std;
struct window{
	int left;
	int right;
	int top;
	int bottom;
};
int main(){
	window w1,w2,overlap;
	cin>>w1.left>>w1.right>>w1.top>>w1.bottom;
	cin>>w2.left>>w2.right>>w2.top>>w2.bottom;
	overlap.left=max(w1.left,w2.left);
	overlap.right=min(w1.right,w2.right);
	overlap.top=max(w1.top,w2.top);
	overlap.bottom=min(w1.bottom,w2.bottom);
	int s=0;
	if(overlap.top<overlap.bottom&&overlap.left<overlap.right){
		s=(overlap.right-overlap.left)*(overlap.bottom-overlap.top);
		
	}
	cout<<s;
	return 0;
}
