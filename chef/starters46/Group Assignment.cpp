#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int i; cin>>i;
	while(i--){
	    int sz; cin>>sz;
	    unordered_map<int, int> frq;
	    while(sz--){
	        int grpSz; 
	        while (cin>>grpSz) frq[grpSz]++;
	    }
	    
	    bool flag;
	    
	    unordered_map<int, int>:: iterator p;
        for (p = frq.begin(); p != frq.end(); p++){
	        if(p->first!=p->second){
	            cout<<"No"<<'\n';
	            flag=false;
	        }
	    } if(!flag)cout<<"yEs"<<'\n';
	    
	}
	return 0;
}
