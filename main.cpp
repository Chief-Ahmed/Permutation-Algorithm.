#include <iostream>
#include <algorithm>

using namespace std;

// Made By Ahmed Qureshi.
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;
}

int main()
{
    int xR5xy03 , i;
    cout << "Enter number of elements to be inserted: ";
    cin >> xR5xy03 ;
    int y0293xRx [xR5xy03 ];
    for (i = 0; i < xR5xy03 ; i++)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> y0293xRx [i];
    }

    sort (y0293xRx , y0293xRx  + xR5xy03 );
    printf("The %i! possible permutations with %i elements: ", xR5xy03 , xR5xy03 );
    do
    {
        display(y0293xRx , xR5xy03 );
    }
    while (next_permutation(y0293xRx , y0293xRx  + xR5xy03 ));
    return 0;
}
