// Pair : a class that stores two values of any data types/containers.
// Use: eg have 2 array each index value of ar1 having relaation with same index value of ar2....so here create pair of vector to do sync operations ....
// Test on: https://onecompiler.com/cpp

#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p;    // pair of int and string (1,"A")
    p = make_pair(2, "hi"); // or assigning/overriding as:
    p = {2, "hi"};
    cout << "first value of  p pair: " << p.first << " ,second value of pair: " << p.second;
    // copying one pair to another ...
    pair<int, string> p1 = p; // copy at diffrent memory....say new copy
    p1 = {3, "hi"};
    cout << "\nfirst value of p1 pair: " << p1.first << " ,second value " << p1.second;
    cout << "\nfirst value of p pair: " << p.first << " ,second value of pair: " << p.second;
    pair<int, string> &p2 = p; // refernce copy changes in p2 reflects in p as well vice versa:
    p2 = {4, "hello"};
    cout << "\nfirst value of p2 pair: " << p2.first << " ,second value " << p2.second;
    cout << "\nfirst value of p pair: " << p.first << " ,second value of pair: " << p.second;
    p = {94, "h"};
    cout << "\nfirst value of p2 pair: " << p2.first << " ,second value " << p2.second;
    cout << "\nfirst value of p pair: " << p.first << " ,second value of pair: " << p.second;
    // taking input in pair :
    cin >> p.first << " " << p.second cout << "\n first is: " p.first << " ,second: " << p.second
}

// Output:
first value of p pair : 2, second value of pair : hi first value of p1 pair : 3, second value hi first value of p pair : 2, second value of pair : hi first value of p2 pair : 4, second value hello first value of p pair : 4, second value of pair : hello first value of p2 pair : 94, second value h first value of p pair : 94, second value of pair : h 9 userInput first is 9, second userInput

// ==================Examples======================
// Q1.UseCase: Say We have 2 array each index value of ar1 having relaation with same index value of ar2....so here create pair of array to do sync operations ....and print those values...

#include <bits/c++.h>
                                                                                                                                                                                                                                                                                                                                                            using namespace std;
int main()
{
    int ar1[5] = {1, 2, 3, 4, 5};
    string ar2[5] = {"A", "B", "C", "D", "E"};
    pair<int, string> p[5];
    // making pairs of ar1 and ar22 index:
    for (int i = 0; i < 5; i++)
    {
        p[i] = make_pair(ar1[i], ar2[i]);
    }
    // printing them:
    for (int i = 0; i < 5; i++)
    {
        cout << "Pair at index " << i << " is: " << p[i].first << " " << p[i].second << endl;
    }
}

// Output:
Pair at index 0 is : 1 A
    Pair at index 1 is : 2 B
        Pair at index 2 is : 3 C
            Pair at index 3 is : 4 D
                Pair at index 4 is : 5 E

    // Q2.UseCase: Say We have 2 array each index value of ar1 having relaation with same index value of ar2....so here create pair of array to do sync operations ....and print those values...
