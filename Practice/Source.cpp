#include<queue>
#include<vector>
#include<iostream>
#include<fstream>

using namespace std;
ofstream myfile;
void checkSum(int x, vector<int> a, vector<int> b){
	int value_to_pick;
	int local_sum = 0;
	int count = 0;
	bool limit_reached = false;
	int c1, c2;
	c1 = a.size();
	c2 = b.size();
	int top1 = 0, top2 = 0;
	while (top1 < c1 && top2 < c2){
		if (a[top1] > b[top2]){
			value_to_pick = b[top2];
			if ((local_sum + value_to_pick) <= x){
				local_sum += value_to_pick;
				top2++;
			}
			else{
				limit_reached = true;
				break;
			}
		}
		else{
			value_to_pick = a[top1];
			if ((local_sum + value_to_pick) <= x){
				local_sum += value_to_pick;
				top1++;
			}
			else{
				limit_reached = true;
				break;
			}
		}
		count++;
	}
	if (limit_reached){
		cout << count << endl;
		myfile << count << endl;
	}
	else{
		while (top1 < c1){
			value_to_pick = a[top1];
			if ((local_sum + value_to_pick) <= x){
				local_sum += value_to_pick;
				top1++;
			}
			else{
				//limit_reached = true;
				break;
			}
			count++;
		}
		while (top2 < c2)
		{
			value_to_pick = b[top2];
			if ((local_sum + value_to_pick) <= x){
				local_sum += value_to_pick;
				top2++;
			}
			else{
				//limit_reached = true;
				break;
			}
			count++;
		}
		cout << count << endl;
		myfile << count << endl;
	}
}


int main(){
	int g;
	cin >> g;
	
	myfile.open("e:\\output");
	

	for (int a0 = 0; a0 < g; a0++){
		int n;
		int m;
		int x;
		cin >> n >> m >> x;
		//stack<int> st1, st2;
		vector<int> a(n);
		for (int a_i = 0; a_i < n; a_i++){
			cin >> a[a_i];
			//st1.push(a[a_i]);
		}
		vector<int> b(m);
		for (int b_i = 0; b_i < m; b_i++){
			cin >> b[b_i];
			//st2.push(b[b_i]);
		}
		checkSum(x, a, b);
		// your code goes here
	}
	myfile.close();
	return 0;
}