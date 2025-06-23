#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;

class PQ_Pair
{
public:
    bool operator () (pair<string,int> p1,pair<string,int> p2) const{
        return p1.second < p2.second;
    }
};

int main(){
    priority_queue<pair<string, int>, vector<pair<string,int>> ,PQ_Pair> pq;
    pq.push(make_pair("aman",96));
    pq.push(make_pair("rahul",93));
    pq.push(make_pair("manish",91));
    pq.push(make_pair("nitesh",86));

     while (!pq.empty()) {
        cout << pq.top().first << " - " << pq.top().second << endl;
        pq.pop();
    }
    return 0;
}