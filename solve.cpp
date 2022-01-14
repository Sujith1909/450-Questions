#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> A)
{
    int n = A.size();
    vector<int> ans(n,100);
    for(int i=0;i<n;i++)
    {
        if((i + A[i]) < n)
        {
             if(A[i] % 2 != A[i + A[i]] % 2)
             {
                 ans[i] = 1;
             }
        }
        if((i - A[i]) >= 0)
        {
            if(A[i] %2 != A[i - A[i]] % 2)
            {
                ans[i] = 1;
            }
        }
        
    }
    while(true)
    {
        // if the answer array doesnt change we stop
        vector<int> check = A;
        for(int i=0;i<n;i++)
        {
            if(i + A[i] <= n || i - A[i] >= 0)
            {
                if(A[i+A[i]] != 100)
                {
                    ans[i] = min(ans[i],ans[i+A[i]]+1);
                }
                if(A[i-A[i]] != 100)
                {
                    ans[i] = min(ans[i],ans[i-A[i]]+1);
                   
                }
            }
        }
        if(A == check) break;
    } 
    return ans; // change the 100 to -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> input(n);
    for(int i = 0 ;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i = 0 ;i<n;i++)
    {
        input[i] = arr[i];
    }

    vector<int> ans = solve(input);
    for(int i = 0 ;i<n;i++)
    {
        cout << ans[i] << " ";
    }
    return 0;

}