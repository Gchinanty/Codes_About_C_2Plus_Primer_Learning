#include <iostream>

using namespace std;

int main()
{
    cout << "Please input two number";
    int v1,v2;
    cin >> v1 >> v2;
    while(v1!=v2)
    {
    	    if(v1<=v2)
            {
                cout << v1 << " ";
                v1++;
            }
    		else
            {
                cout << v2 << " ";
                v2++;
            }
    }
    return 0;
}
