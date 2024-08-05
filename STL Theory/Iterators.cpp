// Iterators are similar to pointers. pointig to stl containers memory.
// They are used to traverse the elements of a container.
// They are used to access the elements of a container.
// They are used to modify the elements of a container.
// They are used to delete the elements of a container.
// They are used to insert the elements of a container.
// They are used to erase the elements of a container.
// They are used to swap the elements of a container.
// They are used to check the end of the container.
// They are used to check the size of the container.
// They are used to check the capacity of the container.
// They are used to check the emptyness of the container.
// They are used to check the begin and end of the container.
// They are used to check the rbegin and rend of the container.
// To access Iterator say vector of pair value: use (*it).first or use (it->first)

//======> Iterators on 1D vector:
#include <vector>   // For std::vector
#include <iostream> // For std::cout, std::cin
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // Output using Rangebased loops:
    for (int num : v)
    {
        cout << num << " ";
    }
    cout << endl;

    // iterator declaration & accessing value:
    vector<int>::iterator it = v.begin();
    cout << (*it) << endl;     // 0th index value
    cout << (*it + 1) << endl; // 1st index value

    // accessing vector using iterator:
    for (it = it; it != v.end(); ++it)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    return 0;
}

//======> Iterators on 2D vector:
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};

    // iterator declaration:
    vector<pair<int, int>>::iterator it;

    // accessing vector using iterator:
    for (it = v_p.begin(); it != v_p.end(); ++it)
    {
        cout << "[" << (*it).first << "," << (*it).second << "] " << "  "; // OR
        cout << "[" << (it->first) << "," << (it->second) << "] " << "  ";
    }
    cout << endl;

    return 0;
}

//=====> Above 11 cpp: Using range based loops,iterators, auto keyword(replacement of it declaration, automatically understands its type)
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};

    // iterator declaration:
    // vector<pair<int, int>>::iterator it; //old version

    // accessing vector using iterator:
    for (auto it = v_p.begin(); it != v_p.end(); ++it)
    {
        cout << "[" << (*it).first << "," << (*it).second << "] " << "  "; // OR
        cout << "[" << (it->first) << "," << (it->second) << "] " << "  ";
    }
    cout << endl;

    // accessing vector using rangebased loop and auto iterator:
    for (auto &value : v_p)
    {
        cout << "[" << value.first << "," << value.second << "] " << "  "; // OR
    }
    cout << endl;

    return 0;
}