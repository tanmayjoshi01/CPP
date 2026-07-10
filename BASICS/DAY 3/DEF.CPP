#include<iostream>

using namespace std;

int main(){

int u,v,a;
float distance;

cout<<"Enter initial velocity, final velocity and acceleration";
cin>>u>>v>>a;

distance=(v*v-u*u)/(2*a);

cout<<"Distance travelled is"<<distance<<endl;
    
    return 0;
}