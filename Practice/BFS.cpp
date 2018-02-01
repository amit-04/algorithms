#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Graph{
	vector<vector<int>> adjMatrix;
public:
	void addEdge(int vertex, int edge){
		adjMatrix[vertex].push_back(edge);
	}
	void BFS();
	void DFS();
};

void Graph::BFS(){
	queue<int> q;
	q.push(adjMatrix[0][0]);
	vector<bool> visitedArray = { false };
	
}

void Graph::DFS(){

}

#if 0
int main(){
	cout << "Enter number of vertex";
	int vertices;
	std::cin>>vertices;
	return 0;
}
#endif