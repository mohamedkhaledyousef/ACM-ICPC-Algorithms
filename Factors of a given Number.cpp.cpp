#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int number,temp=1;

    cin >> number;

    while(temp<=number)
    {
        if(!(number%temp))
        {
            cout<<temp<<" ";
        }

        temp++;
    }
    cout<<endl;

    return 0;
}
