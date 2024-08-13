#include <iostream>
using namespace std;

void insert_array(int size, int arr[]);
int search(int size, int item, int arr[]);
void display_result(int index);

int main()
{
    int arr[20], size, item, index;
    cout << "Enter the size of array : ";
    cin >> size;

    insert_array(size, arr);

    cout << "Enter the item for searching : ";
    cin >> item;

    index = search(size, item, arr);

    display_result(index);

    return 0;
}

void insert_array(int s, int arr[])
{
    for (int i = 0; i < s; i++)
    {
        cout << "arr[" << i << "] : ";
        cin >> arr[i];
    }
}

int search(int size, int item, int arr[])
{
    int flag = -1;
    for (int i = 0; i < size; i++)
    {
        if (item == arr[i])
        {
            flag = i;
        }
    }
    return flag;
}

void display_result(int index)
{
    if (index != -1)
    {
        cout << "element found in " << index << "th index.";
    }
    else
    {
        cout << "element is not found.";
    }
}