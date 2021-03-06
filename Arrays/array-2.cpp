/*You are given an array arr[] of size N. You are also given two elements x and y.
Now, you need to tell which element (x or y) appears most in the array. In other words,
return the element, x or y, that has higher frequency in the array. If both elements
have the same frequency,then just return the smaller element.*/

#include <iostream>
using namespace std;

int majorityWins(int arr[], int n, int x,int y)
{
    int count_x=0;//counter to count frequency of x
    int count_y=0;//counter to count frequency of y
    for (int i=0;i<n;i++)
    {
        if (arr[i]==x) count_x++;
        if (arr[i]==y) count_y++;
    }
    
    if(count_x>count_y) return x;
    else if(count_y>count_x) return y;
    else{
        if (x<y) return x;
        else return y;
    }
    
}

// { Driver Code Starts.
 
int main() {
    
    int t; //Testcases
    cin>>t; // Input the testcases
    while(t--) //Until all testcases are exhausted
    {
        int n; //Size of array
        cin>>n; //Input the size
        int arr[n]; //Declaring array of size n
        for(int i=0;i<n;i++) // Running a loop to input all elements of arr
        cin>>arr[i];
        
        int x,y; //declare x and y
        cin>>x>>y; // input x and y
        cout << majorityWins(arr,n,x,y) << endl; //calling the function that you complete
        
    }
    
	return 0;
}