#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    // creation
    unordered_map<string, int> m;

    // insertion
    // 1 type
    pair<string, int> pair1("abc", 1);
    m.insert(pair1);

    // 2 type
    pair<string, int> pair2 = make_pair("def", 2);
    m.insert(pair2);

    // 3 type
    m["ghi"] = 3;

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // search
    cout << m["abc"] << endl;
    cout << m.at("def") << endl;

    cout << "size: " << m.size() << endl;
    cout << m.count("ghi") << endl;

    m.erase("abc");
    cout << "size: " << m.size() << endl;

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    unordered_map<string, int>::iterator it = m.begin();
    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }
}