// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/


class Solution 
{
    bool static cmpInt(struct Job Job1,Job Job2){
        if(Job1.profit>Job2.profit) return true; //noggest profit first.
        return false;
    }
    public:
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,cmpInt);
        int dead=0;
        int profit=0;
        int job=0;        
        vector<bool> slot(n,false);
        for(int i=0;i<n;i++){
            dead=arr[i].dead;
            while(dead-1>=0){
                if(slot[dead-1]==false){
                    slot[dead-1]=true;
                    profit+=arr[i].profit;
                    job+=1;
                    break;
                }
                dead--;
            }
        }
        return {job,profit};
    } 
};
// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends
