#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int v1, v2;
    cin>>v1>>v2 ;
    cout << "The sum of v1 plus v2 is equal to "<< v1+v2 << "\n";

    ofstream outfile( "out_file" );
    ifstream infile( "in_file" );
    if ( ! infile )
        cerr << "error: unable to open input file!\n"; return -1;
    if ( ! outfile )
        cerr << "error: unable to open output file!\n"; return -2;
    string word;
    while ( infile >> word )
        outfile << word << ' ';

    return 0;
}
