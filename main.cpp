#include <iostream>
#include <vector>
#include <string.h>
#include <array>
#include <forward_list>

using namespace std;

auto test(int m, double n) {
    return m + n;
}

auto test(int m, int n) {
    return m + n;
}

void testA(int n) {
    cout << "integer in" << endl;
}

void testA(int* n) {
    cout << "pointer in" << endl;
}


int main () {
//    cout << "1" << endl;
//
//    int a = 10;
//    int b = 20;
//    cout << "a=" << a << " b=" << b << endl;
//
//    swap(a, b);
//    cout << "a=" << a << " b=" << b << endl;
//
//    vector<int> nums = {2,0,2,1,1,0};
//    sortColors(nums);
//    cout << "--------------------------" << endl;
//    for (auto & a: nums) {
//        cout << a << ",";
//    }

//    int m = 10;
//    double n = 5.200;
//    int k = 20;
//    auto dsum = test(m, n);
//    auto isum = test(m, k);
//    cout << "dsum=" << dsum << " " << typeid(dsum).name() << endl;
//    cout << "isum=" << isum << " " << typeid(isum).name() << endl;

//    testA(nullptr);
//    testA(NULL);


//    std::array<int, 10> arr;
//    for (auto& n : arr) {
//        cout << n << endl;
//    }

//    std::array < int , 10 > arr3 = { 34, 45 } ;
//    for (auto& n : arr3) {
//        cout << n << endl;
//    }

//    std::array<int, 10> arr4;
// Fill all elements in array with same value
//    arr4.fill(5);
//    for (auto& n : arr4) {
//        cout << n << endl;
//    }

//    std::array < int , 10 > arr = { 1,2,3,4,5,6,7,8,9,10 } ;
//    cout << "arr[2]=" << arr[2] << endl;
//    cout << "arr[2]=" << arr.at(2) << endl;
//    cout << "arr[2]=" << std::get<2>(arr) << endl;

    std::forward_list<int> first; // empty
    std::forward_list<int> second(3, 10);              // fill with 10
    std::forward_list<int> third(second.begin(), second.end()); // range initialization
    std::forward_list<int> fourth(third);            // copy constructor
    std::forward_list<int> fifth(std::move(fourth));  // move ctor. (fourth wasted)
    std::forward_list<int> sixth = { 3, 52, 25, 90 };    // initializer_list constructor

    std::cout << "first:"; for (int& x : first)  std::cout << " " << x; std::cout << '\n';
    std::cout << "second:"; for (int& x : second) std::cout << " " << x; std::cout << '\n';
    std::cout << "third:";  for (int& x : third)  std::cout << " " << x; std::cout << '\n';
    std::cout << "fourth:"; for (int& x : fourth) std::cout << " " << x; std::cout << '\n';
    std::cout << "fifth:";  for (int& x : fifth)  std::cout << " " << x; std::cout << '\n';
    std::cout << "sixth:";  for (int& x : sixth)  std::cout << " " << x; std::cout << '\n';



    // 基于范围的for循环
//    int n [] = {1,2,3,4,5};
//    for(auto i : n) {
//        cout << i << endl;
//    }


}
