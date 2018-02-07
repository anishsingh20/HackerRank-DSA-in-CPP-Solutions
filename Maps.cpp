#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int nq;//number of queries
    int q;
    string name;
    int marks;
    cin>>nq;
    
    
    
    map <string,int> student;
    
    for(int i=0;i<nq;i++)
    {
        
        cin>>q; //input type of query
        cin>>name;
         
        //if query==1
        if(q==1)
        {
            
           cin>>marks;
           //adding marks
           student[name] += marks;
           
        }    
        
        
        if(q==2)
        {
           
            student.erase(name);  
         }  
                
        
        if(q==3)
        {
            
            if(student[name]==0)
            {
                cout<<0<<endl;
                }
            
            else {
                cout<<student[name]<<endl;
            }
            
                
            }
                
    
            
            
            
            
            
        
    }
    
    
    
    
    
    return 0;
}
