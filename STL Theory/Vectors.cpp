// similar to array but of dynamic nature whose size gets doubled once filled . Is mutable

#include <bits/c++.h>
using namespace std;

// printing vector elems:
void printVector(vector<int> v) // altogether a new copy of vector passed not reference....for reference pass as &v
{
    cout << v.size() << endl; // t.c : O(1)
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // vector<int> v(5); //array of size 5 all values filled by 0 by default
    // vector<int> v(6,3) //array of size:6 with values: 3
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    printVector(v);
    // delete from last:
    v.pop_back();
    // copying vector to another new vector:
    vector<int> v2 = v;
}

//===================Nesting of vectors============================================

// ###### vector of pair #########
#include <bits/c++.h>
using namespace std;

// printing vector of pair:
void printVectorOfPair(vector<pair<int, string>> &v)
{ // same vector of pair me changes:
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}

int main()
{
    // vector<pair<int,string>> v={{1,"f"},{3,"i"}}; //direct initialization
    vector < pair<int, string> v;
    // v.push_back(make_pair(1,"a"));
    // taking input from user:
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        string s;
        cin >> x >> s;
        v.push_back(make_pair(x, s));
    }

    printVectorOfPair(v);
}

// ======================= [2D of fix row but variable column]======================
// Q3. Creating 10 vectors.....
vector<int> v[10] // v[0],v[1]...v[9] are all 10 diffrent vectors of isze 0 ,in vector v.
                  // Its useCase:
    say you have 3 test cases each having 'n' elems in its vector form... so to store it we need a vector having that much vectors....
// Input:
// 3         // number of TestCases
// 4         // Tc: 1 and elems in vector
// 8 9 7 5
// 3
// 9 7 9 8
// 2
// 8 0

#include <bits/c++.h>
    using namespace std;

void printVectorOfVector(vector<int> &v)
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
}

int main()
{
    int N;
    cin >> N;
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    // printing:
    for (int i = 0; i < N; i++)
    {
        printvectorOfVector(v[i])
    }
}

// =========== [2D of dynamic row and variable column]==============
#include <bits/c++.h>
using namespace std;

void printVec(vector<int> &v)
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
}

int main()
{
    int N;
    cin >> N;
    vector<vector<int>> v;
    for (int i = 0; i < N; ++i)
    {
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; ++j)
        {
            int x;
            cin >> x;
            temp.push_back(x)
        }
        v.push_back(temp);
    }

    // for printing
    for (int i = 0; i < v.size(); ++i)
    {
        printVec(v[i])
    }
}