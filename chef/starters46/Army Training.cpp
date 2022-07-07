#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int i; cin>>i;
	while(i--){
	    int s; cin>>s;
	    bool flag=false;
	    long long int ans=1;
	    int mini=1000, def=0, atk=0;
	    
	    while(s--){
	        int in; cin>>in;
	        mini=min(mini, in);
	        
	        if(in<500){
	            flag=true;
	            def+=1000-in;
	        }
	        else {
	            atk+=in;
	        }
	        
	        
	        if(!flag) {
	            atk-=mini;
	            def+=1000-mini;
	        }

	    }
	    ans=def*atk;
	    cout<<ans<<endl;
	}
	return 0;
}
