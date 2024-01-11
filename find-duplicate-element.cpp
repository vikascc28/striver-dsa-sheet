#include <bits/stdc++.h>
using namespace std;

int main(){}

int findDuplicate(vector<int> &arr, int n){
	unordered_map<int,int>mp;
	for(auto i:arr){
		mp[i]++;
	}
	for(auto i:mp){
		if(i.second > 1){
			return i.first;
		}
	}
	return -1;
}

// Time Complexity - O(N)
// Space Complexity - O(N)