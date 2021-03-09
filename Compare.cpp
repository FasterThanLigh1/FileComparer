#include "Compare.h"
void error(const string& s)
{
    throw runtime_error(s);
}

 void Compare::file_compare()
    {
        input_file(name1,v1);
        input_file(name2,v2);
        try{
        if(v1.size()!=v2.size()){
                error("Files size do not match\n");
        }
        for(int i=0;i<v1.size();i++)
        {
            cout<<"Test "<<i+1<<" : ";
            if(v1[i]==v2[i])
                {cout<<"Match\n";}
            else
                {cout<<"Wrong\n";}
        }
        }
        catch(exception& e)
        {
            cout<<e.what();
        }
    }
