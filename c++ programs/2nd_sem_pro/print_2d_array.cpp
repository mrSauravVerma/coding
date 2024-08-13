#include <iostream>
using namespace std;
class arr
{
public:
    void fun(int arr[20][20])
    {
        int i, j;
        printf("this is 2d array\n");
        for (int i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d\t", arr[i][j]);
            }
            printf("\n");
        }
        return;
    }
};
int main()
{
    arr obj;
    int i, j, arr[20][20];
    cout << "enter the elements for 2d array"
         << endl;
    for (int i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("arr[%d][%d]=", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    obj.fun(arr);
    return 0;
}
