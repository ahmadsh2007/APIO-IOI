#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1 = {1, 2, 3, 4, 5};
//    cout << v1[1] << endl;
//    cout << v1.front() << endl;
//    cout << v1.back() << endl; 
    v1.push_back(5); // add the element to the end of the vector
    v1.pop_back(); // return the last element and removes it from the vector
//    cout << v1.size() << endl; // it's the number of elements it's actually holding
//    cout << v1.capacity() << endl; // it's how many elements it can currently hold
                                   // it doubles each time
                                   // capacity does not decrease only increasing
                                   // use [V Name].shrink_to_fit();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.shrink_to_fit();
//    cout << v1.size() << endl;
//    cout << v1.capacity() << endl;

    vector<int> v2 = {1, 2, 3, 4, 5};
//    cout << v2[0] << endl;;
    v2.insert(v1.begin(), 5);
//    cout << v2[0] << endl;
    v2.insert(v1.begin(), 7);
//    cout << v2[0] << endl;
    v2.insert(v1.begin() + 1, 9);
//    cout << v2[1] << endl;

    vector<int> v3 = {1, 2, 3, 4};
    for(int i = 0; i < v3.size(); i++){
        cout << v3[i] << endl;
    }

    v3.insert(v3.begin(), 0);
    for(auto itr = v3.begin(); itr != v3.end(); itr++){
        cout << *itr << endl;
    }
    return 0;
}