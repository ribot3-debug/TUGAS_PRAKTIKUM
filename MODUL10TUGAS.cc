#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int data[11] = { 12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19 };

    vector<int> myVector(data, data + 11);

    auto cetakVector = [](const vector<int> vec, const string& judul)
    {
        cout << judul << endl;
        for (int val : vec)
        {
            cout << val << " | ";
        }
        cout << "\n====================================================\n";
    };
    cetakVector(myVector, "Isi vector awal:");

    sort(myVector.begin(), myVector.end());
    cetakVector(myVector, "Isi vector setelah sorting ascending:") ;

    reverse(myVector.begin(), myVector.end());
    cetakVector(myVector, "Isi vector setelah sorting descending:") ;
}