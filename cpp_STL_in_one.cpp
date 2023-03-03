#include <bits/stdc++.h>
using namespace std;

void all_containers_stl() {
	// Pairs
{
	pair<int, int> p = {1, 5};
	// cout<<p.first<<" "<<p.second<<endl; 

	pair<int, pair<int, int>> p1 = {1, {4, 6}};		// pair of pair
	// cout<<p1.first<<" "<<p1.second.second<<endl; 	

	pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}, {9, 8}};	// array of pairs
	// cout<<arr[1].first;	
}

// Vectors
{
	vector<int> v = {1,2,3,4,5};
	
	vector<int>::iterator it = v.begin();	// other types of iterator end(), rend(), rbegin();
	cout<<"using iterator: "<<*(it)<<endl;
	it = it + 2;
	cout<<"after incrementing iterator: "<<*(it)<<endl;

	cout<<"accessing the element using index: "<<v[0]<<endl;
	cout<<"using back function: "<<v.back()<<endl;

	// Iterators 
	for(vector<int>::iterator it=v.begin(); it!=v.end(); it++) {
		cout<<*(it)<<" ";
	}
	for(auto it=v.begin(); it!=v.end(); it++) {
		cout<<*(it)<<" ";
	}
	for(auto it: v) {
		cout<<it<<" ";
	}

	// Insert function
	vector<int> c(2, 100);
	c.insert(c.begin(), 87); 	// 87 100 100
	c.insert(c.begin()+1, 89);	// 87 89 100 100
	vector<int> co(2, 50);
	c.insert(c.begin(), co.begin(), co.end());	// 50 50 87 89 100 100

	v.size();	// returns size
	v.pop_back();	// pops last element
	v.clear();		// clear the vector to empty
	v.swap(c);		// swaps the names with diff sequence
}

// List
{
	list<int> l1;

	l1.push_back(10);	// {10}
	l1.emplace_back(90);	// {10, 90}

	l1.push_front(22);	// {22, 10, 90}
	l1.emplace_front();	
	// all other functions same as vector
	// begin, rbegin, end, rend, clear, swap
}

// Deque
{ 
	deque<int> d1;
	
	d1.push_back(88);	// {88}
	d1.push_front(21);	// {21, 88}
	d1.emplace_back(98);// {21, 88, 98}
	d1.emplace_front(41);// {41, 21, 88, 98}

	d1.pop_front();	// {21, 88, 98}
	d1.pop_back();	// {21, 88}
	
	// rest functions same as vector
	// begin, rbegin, end, rend, clear, insert, size, swap

}

// Stack
{
	stack<int> st1;
	st1.push(1);
	st1.push(7);
	st1.push(3);
	st1.emplace(5);

	// all the functions in 0(1) --> constant
	cout<<st1.top();  // 5
	st1.pop();  // pops 5
	cout<<st1.top();  // 3
	st1.pop();  // pops 3

	st1.size();

	stack<int> st, s2;
	st.swap(s2);
}

// Queue
{
	queue<int> q;
	q.push(1);	// {1}
	q.push(3);	// {1, 3}
	q.push(5);	// {1, 3, 5}
	q.emplace(8);// {1, 3, 5, 8}

	q.back() += 5;
	cout<<q.back();		// prints 13

	cout<<q.front(); 	// prints 1
	q.pop();			// pops 1 {3, 5, 13}

	// size, swap, empty same as stack
}

// Priority queue
{
	priority_queue<int> pq;
	// pushes on the basis of priority. back_there max heap is maintained using tree ds 
	// the larger element will have the highest priority there
	// Max priority queue --> by defualt
	pq.push(2);  // {2}
	pq.push(5);  // {5, 2}
	pq.push(8);  // {8, 5, 2}
	pq.emplace(1);// {8, 5, 2, 1}
	
	cout<<pq.top();		// prints 8
	pq.pop(); 			// pops 8 {5, 2, 1}

	// Min heap
	priority_queue<int, vector<int>, greater<int>> minpq;
	minpq.push(7);		// {7}
	minpq.push(3);		// {3, 7}
	minpq.push(8);		// {3, 7, 8}
	minpq.emplace(1);	// {1, 3, 7, 8}

	cout<<minpq.top();	// prints 1
	minpq.pop();		// pops 1 {3, 7, 8}

	// Time complexity
	// push, pop ==> log(n);
	// top ==> 0(1)
}

// Set
{
	// set ==> unique and sorted order (ascending)
	// everything happens in log(n) like insert, delete, find etc..
	set<int> st;
	st.insert(1);		// {1}
	st.insert(1);		// {1}
	st.insert(3);		// {1, 3}
	st.emplace(2);		// {1, 2, 3}
	st.emplace(5);		// {1, 2, 3, 5}

	// {1, 2, 3, 5}
	auto it = st.find(2);	// find function returns an iterator

	// {1, 2, 3, 5}
	auto it = st.find(4);	// returns and end() pointer

	st.erase(5);	// takes logarithmic of time

	st.count(1);	// returns 1 if present and if not then 0

	auto it = st.find(2);
	st.erase(it);	// takes constant time 0(1)

}

// Multiset
{
	// multiset ==> only sorted not unique. (duplicated elements allowed)
	multiset<int> ms;
	ms.insert(1);	// {1}
	ms.insert(1);	// {1, 1}
	ms.insert(1);	// {1, 1, 1}
	ms.insert(2);	// {1, 1, 1, 2}

	ms.erase(1);	// erase's all the 1's

	auto it = ms.find(1);
	ms.erase(it);	// erase's only one occurance becoz this is something like --ms.erase(address)
	ms.erase(ms.find(1), ms.find(3));	// this is something which will delete element in range

	// rest are same like set
}

// unordered set
{
	// lower_bound and upper_bound functions do not work here
	// unordered_set ==> unique only not sorted (a random order)
	// all operations like insertion, deletion etc... ==> happes in 0(1) - constant time
	// once in a blue moon the time complexity goes to 0(n) - happens rarerly (worst case)
	unordered_set<int> us;
}

// Map
{
	// map ==> stores in {key, value} pair where key is unique and sorted and values can be not unique 
	map<int, int> mpp1;		// map {{1, 2}, {3, 5}, {8, 9}}
	map<int, pair<int, int>> mpp2;	// map {{1, {2, 3}}, {4, {2,5}}}
	map<pair<int, int>, int> mpp3;	// map {{{1, 2}, 4}, {{1, 3}, 45}}

	mpp1[1] = 8;	// this means 8 is stored with the key 1 {{1, 8}}
	// mpp1.emplace({2, 3});	// i don't why this is not working
	mpp1.insert({3, 6});	// insert in direct fashion

	for(auto it: mpp1) {
		cout<<it.first<<" "<<it.second;
	} 

	auto it = mpp1.find(2); 	// finds according to key
	// cout<<*(it).second;	// i don't know why this thind also not working

	// all other functions like 
	// erase, swap, empty, size are same as above
}

// Multimap
{
	multimap<int, int> mpp;
	// sorted but duplicate keys allowed here.
	// mpp[key] = this is not allowed here
	// stores duplicate keys like {{1, 2}. {1, 3}}
}

// Unordered_map
{
	unordered_map<int, int> um;
	// stores without any order and stores duplicate
	// same as unordered_set.
}

}

// comparator - helps to sort in my way
bool comp(pair<int, int> p1, pair<int, int> p2) {
	if(p1.second < p2.second) return true;
	if(p1.second > p2.second) return false;

	// they are same
	if(p1.first < p2.first) return true;
	else return false;
}

int main() {

	// sort(a, a+n);	// sorts in ascending order
	// sort(v.begin(), v.end())		// we always give second argument which is something outside the container

	// descending order
	// sort(a, a+n, greater<int>);	// here greater is an comparator (comparator is which is used to compare in my way)

	vector<pair<int, int>> p = {{1, 2}, {2, 1},{4, 1}};

	// Question
	// sort it according to second element
	// if second element is same, then sort
	// according to first element but in descending 

	sort(p.begin(), p.end(), comp);		// comp is a comparator here
	for(int i=0; i<3; i++) {
		cout<<p[i].first<<" "<<p[i].second<<endl;
	}

	int num = 9;
	int cnt = __builtin_popcount(num);	// returns the number of all the set bits
	cout<<cnt;

	long long int n = 12533235353;
	long int c = __builtin_popcountll(n);	// for long long numbers only

	string s = "123";

	do {
		cout<<s<<endl;
	}while(next_permutation(s.begin(), s.end()));
	

	return 0;
}