#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;

//using 2 stacks to solve this problem
stack<int>s;
//one stack to store the elements 

//another Auxillary stack to keep track of the maximum element-this stack will contain only max element on its top
stack<int>s1;


//Push function
void Push(int x) {
    
    s.push(x);
    
    if(s.size() == 1) {
        s1.push(x);
        return;
    }
    
    //if element is > then top of trackStack, then push it to top of trackStack
    if(x > s1.top()) {
        s1.push(x);
    }
    else {
        s1.push(s1.top());
    }
}

void Pop() {
    s1.pop();
    s.pop();
}

int max() {
    //trackStack contains the max element on its top
    return s1.top();
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,query;
    cin>>n;
    
    for(int i=0;i<n;i++) {
        
        cin>>query;
        
        if(query==1) {
            int x;
            cin>>x;
            Push(x);
            
            
         }
        else if(query==2) {
            
            Pop();
        
        }
        
        else {
            //finding max in stack
            cout<<max()<<endl;
            
            
        }
    
    
    }
    return 0;
}

