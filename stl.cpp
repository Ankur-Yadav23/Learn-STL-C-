#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;
int main(){
    //1.Array

    // int basic[3] = {1, 2, 3};

    // array<int, 4> a = {1, 2, 3, 4};

    // int size = a.size();
    // for(int i=0; i<size; i++){
    //     cout<<a[i]<<endl;
    // }

    // cout<<"Element at 2nd Index-->"<<a.at(2)<<endl;
    // cout<<"Empty or not-->"<<a.empty()<<endl;
    // cout<<"First element-->" << a.front()<<endl;
    // cout<<"Last element-->" << a.back()<<endl;

    //2.Vector
    // vector<int> v;
    // vector<int> a(5, 1);
    // cout<<"print a"<<endl;
    // for(int i:a) {
    //     cout << i << " ";
    // }cout<<endl;
    // cout<<"Capacity-->"<<v.capacity()<<endl;

    // v.push_back(1);
    // cout << "Capacity-->" << v.capacity() << endl;

    // v.push_back(2);
    // cout << "Capacity-->" << v.capacity() << endl;

    // v.push_back(3);
    // cout << "Capacity-->" << v.capacity() << endl;
    // cout << "Size-->" << v.size() << endl;

    // cout<<"Element at 2nd index is " << v.at(2)<<endl;
    // cout<<"front element is " << v.front()<<endl;
    // cout<<"back element is " << v.back()<<endl;

    // cout<<"before pop"<<endl;
    // for(int i:v){
    //     cout << i << " ";
    // }cout<<endl;

    // v.pop_back();

    // cout<<"after pop"<<endl;
    // for(int i:v){ 
    //     cout<<i<<" ";
    // }

    // cout<<"before clear size is"<<v.size()<<endl;
    // v.clear();
    // cout<<"after clear size is"<<v.size()<<endl;

    //3.Deque
    // deque<int> d;

    // d.push_back(1);
    // d.push_front(2);

    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;
     
    // cout<<"print first index element "<<d.at(1)<<endl;
    // cout<<"First element is "<<d.front()<<endl;
    // cout<<"Last element is "<<d.back()<<endl;
    // cout<<"Empty or not  "<<d.empty()<<endl;
    // // d.pop_front();
    // // for (int i : d)
    // // {
    // //     cout << i << " ";
    // // }
    // // cout << endl;
    // cout<<"before erase "<<d.size()<<endl;
    // d.erase(d.begin(), d.begin()+1);
    // cout<<"after erase "<<d.size()<<endl;
    // for(int i:d){
    //     cout<<i<<endl;
    // }

    //4.List
    // list<int> l;

    // list<int> n(5, 100);
    // for(int i: n){
    //     cout << i << " ";
    // }
    // cout<<endl;

    // l.push_back(1);
    // l.push_front(2);

    // for(int i:l){ 
    //     cout<<i<<" ";
    // }cout<<endl;

    // l.erase(l.begin());
    // cout<<"after erase " <<endl;
    // for(int i:l){
    //     cout << i << " ";
    // }

    // cout<<"size of list is " <<l.size()<<endl;

    // 5.Stack
    // stack<string> s;

    // s.push("ankur");
    // s.push("arun");
    // s.push("jytoi");

    // cout<<"Top element is "<<s.top()<<endl;

    // s.pop();
    // cout<<"Top element is "<<s.top()<<endl;

    // cout << "size of stack  is " << s.size() << endl;
    // cout<<"empty or not "<<s.empty()<<endl;

    //6.Queue
    // queue<string> q;

    // q.push("Ankur");
    // q.push("Shyam");
    // q.push("Yadav");

    // cout<<"First element of queue is "<<q.front()<<endl;
    // q.pop();
    // cout<<"First element of queue is "<<q.front()<<endl;
    // cout<<"Size of queue is"<<q.size()<<endl;

    // Priority Queue
    //Max Heap
    // priority_queue<int> maxi;

    // //Min Heap
    // priority_queue<int, vector<int>, greater<int>> mini;

    // maxi.push(1);
    // maxi.push(3);
    // maxi.push(2);
    // maxi.push(0);

    // cout<<"Size is "<<maxi.size()<<endl;
    // int n = maxi.size();
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<maxi.top()<<" ";
    //     maxi.pop();
    // }
    // cout << endl;

    // mini.push(1);
    // mini.push(3);
    // mini.push(2);
    // mini.push(0);

    // cout << "Size is " << mini.size() << endl;
    // int m = mini.size();
    // for (int i = 0; i < m; i++)
    // {
    //     cout << mini.top() << " ";
    //     mini.pop();
    // }
    // cout << endl;

    // cout << "Emppty or not " << mini.empty() <<endl;

    //7.SET
    // set<int> s;

    // s.insert(5);
    // s.insert(2);
    // s.insert(1);
    // s.insert(3);
    // s.insert(5);
    // s.insert(2);
    // s.insert(1);
    // s.insert(6);
    // s.insert(0);
    // s.insert(0);
    // s.insert(5);
    // s.insert(2);
    // s.insert(1);

    // for(auto i:s){
    //     cout<<i<<" ";
    // }cout<<endl;

    // set<int>::iterator it = s.begin();
    // it++;

    // s.erase(it);
    // for (auto i : s)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // cout<<"-5 is present or not "<<s.count(-5)<<endl;

    // set<int>::iterator itr = s.find(5);

    // for (auto it = itr; it != s.end();it++){
    //     cout << *it << " ";
    // }cout<<endl;

    // 8.MAP
    // map<int,string> m;
    // m[1] = "Love";
    // m[2] = "babbar";
    // m[13] = "kumar";
    // m.insert({5, "bheem"});

    // cout<<"Before erase: "<<endl;
    // for(auto i:m){
    //     cout << i.first <<" " << i.second <<endl;
        
    // }

    // cout<<"finding 13: " <<m.count(13)<<endl;

    // m.erase(5);
    // cout<<"After Erase"<<endl;
    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    // auto it = m.find(2);
    // for (auto i = it; i != m.end(); i++){
    //     cout << (*i).first << endl;
    // }

    vector<int> v;

    v.push_back(5);
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(6);

    cout<<"Finding 4 "<<binary_search(v.begin(), v.end(),4)<<endl;
    cout<<"Finding 7 "<<binary_search(v.begin(), v.end(),7)<<endl;
    cout<<"lower bound  "<<lower_bound(v.begin(), v.end(),4)-v.begin()<<endl;
    cout<<"upper bound "<<upper_bound(v.begin(), v.end(),7)-v.begin()<<endl;

    int a = 5;
    int b = 10;

    cout<<"MAX of a and b " <<max(a,b)<<endl;
    cout<<"MIN of a and b " <<min(a,b)<<endl;

    swap(a,b);
    cout<<"A is "<<a<<endl;
    cout<<"B is "<<b<<endl;

    string ans = "abchgd";
    reverse(ans.begin(), ans.end());
    cout<<"string is "<<ans<<endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"after rotate "<<endl;
    for(int i:v){
        cout << i << " ";
    }
}