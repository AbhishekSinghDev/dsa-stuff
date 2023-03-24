#include<bits/stdc++.h>
using namespace std;

vector<int> find_union(vector<int> &a, vector<int> &b) {

    int n1 = a.size();
    int n2 = b.size();

    vector<int> unionArr;
    int i = 0;
    int j = 0;

    while(i<n1 && j<n2) {
        if(a[i] <= b[j]) {
            if(unionArr.size() == 0 || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else {
            if(unionArr.size() == 0 || unionArr.back() != b[i]) {
                unionArr.push_back(b[i]);
            }
            j++;
        }
    }   

    while(j<n2) {
        if(unionArr.size() == 0 || unionArr.back() != b[i]) {
            unionArr.push_back(b[i]);
        }
        j++;
    }
    while(i<n1) {
        if(unionArr.size() == 0 || unionArr.back() != a[i]) {
            unionArr.push_back(a[i]);
        }
        i++;
    }

    return unionArr;
}

vector<int> find_intersection(vector<int> &a, vector<int> &b) {

    int n1 = a.size();
    int n2 = b.size();

    vector<int> intersectionArr;
    int i = 0;
    int j = 0;
    while(i<n1 && j<n2) {
        if(a[i] == b[j]) {
            intersectionArr.push_back(a[i]);
            i++;
            j++;
        }
        else i++;
    }

    return intersectionArr;
}

int main() {

    vector<int> a = {1,2,3,3,4,5,6};
    vector<int> b = {3,3,5};

    vector<int> res = find_intersection(a, b);
    for(vector<int> :: iterator it = res.begin(); it != res.end(); it++) {
        cout<<*(it)<<" ";
    }

    return 0;
}