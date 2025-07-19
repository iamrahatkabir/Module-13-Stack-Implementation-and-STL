#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

class myStack
{
    public:
        vector<int> v;
    
    void push(int val)
    {
        v.push_back(val);
    }  

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty();
    }

};


int main()
{

    myStack st;

    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x; 
        cin >> x;
        st.push(x);
    }

    while(!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }


    return 0;
}