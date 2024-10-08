// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    bool static comp(Item a, Item b){
        double abs1=(double)a.value/(double)a.weight;
        double abs2=(double)b.value/(double)b.weight;
        //return abs1>abs2;
        if(abs1<abs2) return false;
        else if(abs1>=abs2) return true;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr, arr+n, comp);
        
        int curWeigh=0;
        double finalValue=0.0;
        
        for(int i=0; i<n; ++i){
            
            if(curWeigh+arr[i].weight<=W){
                curWeigh+=arr[i].weight;
                finalValue+=arr[i].value;
            }else{
                int remain=W-curWeigh;
                finalValue+=(arr[i].value/(double)arr[i].weight)*(double)remain;
                break;
            }
        }
        return finalValue;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends
