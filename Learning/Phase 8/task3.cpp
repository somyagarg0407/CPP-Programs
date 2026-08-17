#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void change_value(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(p + i) += 100;
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    // cout << "Elements of array are: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << endl;
        //----------------------IMPORTANT-----------------
    }

    int *p = &arr[0]; //---------------imp---------
    // int *p=arr; ---------------ALSO CORRECT ------------
    cout << "Elements of array are: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Address: " << (p + i) << " Value: " << *(p + i) << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i) << endl;
        p++;
    }

    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;

    cout << "The increement of 100 in each value is: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << (*(p + i) + 100) << endl;
    }

    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;

    cout << "The values of array before update: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        *(p + i) += 100;
    }

    cout << "The values of array after update: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;

    cout << "Before update:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i) << endl;
    }

    change_value(p, 5);

    cout << "After update:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i) << endl;
    }



    

    return 0;
}