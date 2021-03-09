#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Compare
{
public:
    Compare()=default;
    Compare(const string& name1,const string& name2)
    :name1(name1),name2(name2)
    {

    }
    void file_compare();
    void input_file(const string& name,vector<string>& v)
    {
        ifstream in(name);
        for(string s;!in.eof();)
        {
            in>>s;
            v.push_back(s);
        }
    }
    void print()
    {
        input_file(name1,v1);
        for(auto i: v1)
        {
            cout<<i<<'\n';
        }
    }
private:
    string name1;
    string name2;
    vector<string> v1;
    vector<string> v2;
};
