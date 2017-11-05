#include<iostream>
#include<stack>

using namespace std;

void Reverse(string C,int n){
    stack<char>S;
    for(int i=0; i<n; i++){
        S.push(C[i]);
    }
    for(int i=0; i<n; i++){
        C[i]= S.top();
        S.pop();
    }
    cout<< "OUT PUT: "<<C<<endl;
}


int main(){
    string C;
    cout<<"Enter a string: "<<endl;
    cin>>C;
    Reverse(C,C.size());

    return 0;

}
