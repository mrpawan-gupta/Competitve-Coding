/*
Problem Description :- Largest Sum Cycle
Given a maze with N cells. Each cell may have multiple entry points but not more than one exit(i.e entry/exit points are unidirectional doors like valves).

You are given an array Edge[] of N integers, where Edge[i] contains the cell number that can be reached from of cell i in one step. Edge[i] is -1 if the ith cell doesn’t have an exit.

The task is to find :- the sum of the largest sum cycle in the maze(Sum of a cycle is the sum of node number of all nodes in that cycle).

Note:- The cells are named with an integer value from 0 to N-1. If there is no node pointing to the ith node then weight of the ith node is zero.

INPUT FORMAT :-

The first line contains the number of cells N.
The second line has a list of N values of the edge[ ] array, where edge[i] conatins the cell number that can be reached from cell 'i' in one step. edge[i] is -1 if the ith doesn't have ans exit.
OUTPUT FORMAT :

First line denotes length of the largest cycle..
Sample Input :
23
4 4 1 4 13 8 8 8 0 8 14 9 15 11 -1 10 15 22 22 22 22 22 21

Sample Output :
6

*/

//Working Solution :-

int solution(vector<int> arr, int src, int dest){
    // Two maps, visA for distance from src and visB for distance from dest
    // They serve two purpose, if visA[x] == 0, that means we haven't reached that node yet, 
    // and if it holds any value, say d, that means it is d distance away from the particular node
    map<int,int> visA,visB;
    int start = arr[src];
    int curr = 1;
    set<int> s; // contains unique set of nodes to check at last
    
    // iniitializing final nodes
    for(auto &x: arr){
        s.insert(x);
    }
    // traversing until we get to a cell where we've already reached
    while(visA[start] == 0){
        visA[start] = curr; // Marcking the distance
        curr++;
        start = arr[start];
        if(start == -1){
            break; // Getting out if we get to a node who is not pointing at any other node
        }
    }
    start = arr[dest];
    // Same logic as above but traversing from dest
    while(visB[start] == 0){
        visB[start] = curr;
        curr++;
        start = arr[start];
        if(start == -1){
            break;
        }
    }
    // This is an array of two values, vp[i].first holds the sum of distance of vp[i].second from src and dest.
    vector<pair<int,int>> vp;
    for(auto &x: s){
        if(visA[x] != 0 && visB[x] != 0){ // Checking if we ever got to that particular node from both src and dest or not
            pair<int,int> p = {visA[x] + visB[x], x};
            vp.push_back(p);
        }
    }
    // sorting and finding the node with list sum of visA[} + visB[]
    sort(vp.begin(), vp.end());
    return vp[0].second;
}