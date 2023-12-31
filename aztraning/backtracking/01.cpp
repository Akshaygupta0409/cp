#include<bits/stdc++.h>
using namespace std;

int n;


// lccm framework
// datastructure to store current_solution
vector<int> current_solution;

void printer(int level){
    cout<<"level : "<<level<<", current_solution : [";
    for(auto v:current_solution){
        cout<<v<<", ";
    }
    cout<<"]"<<endl;
}

bool check(int ch){
    for(auto v:current_solution){
        if(v==ch){
            return false;
        }
    }
    return true;
}

void rec(int level){ // recursion with level
    
    printer(level);
    
    // base case
    if(level==n){
        // we have a solution in current_solution !
        
        // make sure to return !
        return;
    }
    
    // enumerate choices
    for(int ch=1;ch<=n;ch++){
        // check if this choice is feasible based on previous taken elements
        if(check(ch)){
            // make move.
            
            // 1. change the current solution
            current_solution.push_back(ch);
            
            // 2. go to next level recursively.
            rec(level+1);
            
            // 3. When done with next level exploration... restore the change
            current_solution.pop_back();
        }
    }
}

int main(){
    cin>>n;
    rec(0);
}