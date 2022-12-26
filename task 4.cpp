#include <iostream>
using namespace std;
int main()
{
    int a[] = {4, 3, 22, 14, 56};
    int *p;

    for (int i = 0; i < 5; i++)
    {
        p = &a[i];
        cout << "Value of "<<i+1<<"st element is " << a[i]<<endl;
		cout << "Adress is "<<i+1<<"st of element of " << p << endl<<endl;
    }

    return 0;
}

