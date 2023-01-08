// created by ebrahim zeinali


#include <iostream>
#include <assert.h>
#include <math.h>
using namespace std;








int main()
{

    int n;
    int k;

    cout << "Please enter the degree n of the polynomial (0 ≤ n ≤ 10): " << endl;
    cin >> n;

    double* a = new double[n+1];

    for(int i = n; i>=0; --i)
    {
        cout << "coefficient a[" << i << "] : ";
        cin >> a[i];
        cout << endl;

    }

    cout << "Which derivative should be computed? ";
    cin >> k;

    int coeff = 0;
    for(int i = n; i>=0; --i)
    {
        coeff = a[i];
        for(int j=1; j<=k;++j)
        {
            coeff = coeff * (i - (j-1));

        }


        if(coeff != 0)
        {
            if(i - k !=0 )
                cout << showpos << coeff  << "x" <<"^" <<i - (k);
            else
                cout << showpos << coeff ;

        }


    }


}
