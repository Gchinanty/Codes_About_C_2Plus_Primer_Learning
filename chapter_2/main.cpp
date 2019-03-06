#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word, line;
    cout<<"Please input number you want:"<<endl;
    char ch;
    cin>>ch;
    if(ch=='1')
    {
        cout<<"Welcome to C++ famliy! "<<endl;
        cin>>word;
        cout<<"The string PC reads is:"<<endl;
        cout<<word <<endl;
        return 0;
    }

    cin.clear();
    cin.sync();

    if(ch=='2')
    {
        cout<<"Welcome to C++ famliy! "<<endl;
        getline(cin,line);
        cout<<"The string PC reads is:"<< endl;
        cout<<line <<endl;
        return 0;
    }

    cout << "Wrong!!!" << endl;
    return -1;
}
