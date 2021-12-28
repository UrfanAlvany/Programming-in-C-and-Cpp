#include <fstream>
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    ifstream fin; //opening input file
    int n, count=1;
    cout<<"How many files?"<<endl;
    cin>>n; //number of files
    string name;
    char ch;
    ofstream fout;
    fout.open("concatn.txt", ios::out | ios::binary); //output file
    for(int i=0; i<n; i++)
    {
        cout<<"File number "<<count<<": "; //inputting name of the file
        cin>>name;
        fin.open(name.c_str(), ios::in | ios::binary);
        if(!fin)
        {
            cout<<"Failed opening the file!";
            return 1;
        }
        while(!fin.eof())
        {
            fin>>ch;
            fout.write((char*)&ch, sizeof(char));
            fout<<endl;
        }
        fin.close();
        count++;
    }
    cout<<"Files have been concatenated successfully!";
    fout.close(); //output file closed
    return 0;
}
