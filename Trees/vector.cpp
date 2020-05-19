#include <iostream>
#include <vector>
using namespace std;

int main() {
    //Statically
    vector<int> v;

    //Dynamically
    //vector<int> *vp = new vector<int>();
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v[1] = 100;

    // Don't use [] for inserting elements

    // v[3] = 1002;
    // v[4] = 1234;

    v.push_back(23);
    v.push_back(234);

    //to delete

    v.pop_back();

    // cout << v[0] << endl;
    // cout << v[1] << endl;
    // cout << v[2] << endl;
    // cout << v[3] << endl;
    // cout << v[4] << endl;
    // cout << v[5] << endl;
    // cout << v[6] << endl;

    


    // [] - for get and update

    // cout << "Size: " << v.size() << endl;

    // cout << v.at(2) << endl;
    // cout << v.at(6) << endl;

    //loop-wise

    for (int i =0; i < v.size(); i++){
        cout << v[i] << endl;
    }

}