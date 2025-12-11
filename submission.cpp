/*
    Author: Zhao Zhang
    Course: CSCI-135
    Instructor: Tong Yi
    Assignment: E6.18

    Write a function vector<int> append(vector<int> a, vector<int> b)
*/

#include <vector>
#include <iostream>

std::vector<int> append(std::vector<int> a, std::vector<int> b){
    for(int i = 0; i < b.size(); i++){
        a.push_back(b[i]);
    }
    return a;
}

int main(){
    std::vector a = {1, 2, 3, 4};
    for(int i = 0; i < a.size(); i++){
        std::cout << a[i] << std::endl;
    }
    std::cout << std::endl;
    std::vector b = {5, 6, 7, 8};
    for(int i = 0; i < b.size(); i++){
        std::cout << b[i] << std::endl;
    }
    std::cout << std::endl;
    std::vector c = append(a,b);
    for(int i = 0; i < c.size(); i++){
        std::cout << c[i] << std::endl;
    }
}