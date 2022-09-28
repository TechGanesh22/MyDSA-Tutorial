#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    unordered_map<string, int> ourmap;

    // insert
    pair<string, int> p("abc", 1);
    ourmap.insert(p);
    ourmap["def"] = 2; // This is another way to insert

    // find or access
    cout << ourmap["abc"] << endl;
    cout << ourmap.at("abc") << endl;

    // cout << ourmap.at("ghi") << endl; this gives error while accessing bcoz it is not present in the hashmap
    cout << "size : " << ourmap.size() << endl;
    cout << ourmap["ghi"] << endl; // here we are trying to access which is not present but it assign the value 0 and size of hashmap also increases
    cout << "size : " << ourmap.size() << endl;

    // check Presense
    if (ourmap.count("ghi") > 0)
    {
        cout << "ghi is present" << endl;
    }

    // erase
    ourmap.erase("ghi"); // this used to erase the value
    cout << "size : " << ourmap.size() << endl;
    if (ourmap.count("ghi") > 0)
    {
        cout << "ghi is present" << endl;
    }
}
