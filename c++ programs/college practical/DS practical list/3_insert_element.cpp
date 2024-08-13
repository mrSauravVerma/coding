#include <iostream>
using namespace std;

void enter_array(int size, int arr[]);
void insert_element(int size, int arr[]);
void display(int size, int arr[]);

int main()
{
    int arr[20], size;
    cout << "Enter the size of array : ";
    cin >> size;
    enter_array(size, arr);
    insert_element(size, arr);
    display(size + 1, arr);

    return 0;
}

void enter_array(int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        cout << "array[" << i << "] : ";
        cin >> arr[i];
    }
}
///////////////////////////////////////////////////////////
void insert_element(int size, int arr[])
{
    int posi, element;
    cout << "Enter the element for inserting : ";
    cin >> element;
    cout << "Enter the position in array : ";
    cin >> posi;

    for (int i = posi; i <= size; i++)
    {
        arr[i] = arr[i - 1];
    }
    arr[posi - 1] = element;
}
///////////////////////////////////////////////////////////
void display(int size, int arr[])
{
    cout << "Array before insearting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "array[" << i << "] : " << arr[i] << endl;
    }
}