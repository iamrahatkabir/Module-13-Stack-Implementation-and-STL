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

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }

};


class myStack
{
    public:
        
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    
    void push(int val) //O(1);
    {
        sz++;

        Node* newnode = new Node(val);

        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;

    }  

    void pop() //O(1);
    {
        sz--;

        Node* deletenode = tail;
        tail = tail->prev;
        delete deletenode;
        if(tail == NULL)
        {
            head == NULL;
            return;
        }
        tail->next = NULL;
    }

    int top() //O(1);
    {
        return tail->val;
    }

    int size() //O(1);
    {
        return sz;
    }

    bool empty() //O(1);
    {
        // if(head == NULL)
        //     return true;
        // else
        //     return false;

        return head == NULL;
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