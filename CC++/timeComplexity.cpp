//Ahnaf Hasan Niloy ID: 0802310405101014 sec: A
#include <bits/stdc++.h>
using namespace std;

int main()
{

    chrono::high_resolution_clock::time_point start, end;
    chrono::nanoseconds duration;
    start = chrono::high_resolution_clock::now();

    int n, pos, val;

    cout << "Enter size of an array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
        ;
    }
    // inserting eliment at first
    n = n + 1;

    for (int i = n; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    cout << "Enter values you wanna insert at first:";
    cin >> val;

    arr[0] = val;

    cout << "Array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    end = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
    cout << "\nCode took " << duration.count() << " nanoseconds to execute\n";

    // inserting eliment at last

    start = chrono::high_resolution_clock::now();

    cout << "Enter values you wanna insert at last:";
    cin >> val;

    arr[n] = val;
    n = n + 1;

    cout << "Array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    end = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
    cout << "\nCode took " << duration.count() << " nanoseconds to execute\n";

    // inserting eliment at given position

    start = chrono::high_resolution_clock::now();

    cout << "Enter value you wanna insert:";
    cin >> val;
    cout << "Enter the index: ";
    cin >> pos;
    n = n + 1;

    for (int i = n; i > pos ; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;

    cout << "Array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    end = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
    cout << "\nCode took " << duration.count() << " nanoseconds to execute\n";

    return 0;
}
