/*
    Author: Zhao Zhang
    Course: CSCI-135
    Instructor: Tong Yi
    Assignment: E6.18

    Write a function vector<int> append(vector<int> a, vector<int> b)
*/

#include <vector>
#include <iostream>
using namespace std;

vector<int> append(vector<int> a, vector<int> b){
    for(int i = 0; i < b.size(); i++){
        a.push_back(b[i]);
    }
    return a;
}