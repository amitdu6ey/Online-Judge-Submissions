#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main(){
    int n,k1,k2;
    queue<int> q1;
    queue<int> q2;
    cin>>n;
    cin>>k1;
    for(int i=0;i<k1;i++){
        int card;
        cin>>card;
        q1.push(card);
    }
    cin>>k2;
    for(int i=0;i<k2;i++){
        int card;
        cin>>card;
        q2.push(card);
    }
    int fights=0;
    while(!q1.empty() && !q2.empty()){
        int card1 = q1.front();
        int card2 = q2.front();
        if(card1>card2){
            q1.push(card2);
            q1.push(card1);
            q2.pop();
            q1.pop();
        }
        else{
            q2.push(card1);
            q2.push(card2);
            q2.pop();
            q1.pop();
        }
        fights++;
        if(fights>100000000){
            cout<<-1;
            return 0;
        }
    }
    if(q1.empty()){
        cout<<fights<<" "<<2;
    }
    else{
        cout<<fights<<" "<<1;
    }
    return 0;
}