#include <iostream>
#include <cstring>
#include <map>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int, list<int> > mp;

    while(n--){

        string cmd;
        cin>>cmd;

        if(cmd == "new"){
            int id;
            cin>>id;
            mp[id] = list<int>();
        }

        if(cmd == "add"){
            int id;
            int num;
            cin>>id>>num; 
            mp[id].push_back(num);
        }

        if(cmd == "merge"){
            int id1;
            int id2;
            cin>>id1>>id2;

            mp[id1].merge(mp[id2]);
        }

        if(cmd == "unique"){
            int id;
            cin>>id;

            mp[id].sort();
            mp[id].unique();
        }

        if(cmd == "out"){
            int id;
            cin>>id;

            mp[id].sort();
            list<int>::iterator i;
            for(i=mp[id].begin(); i!=mp[id].end(); i++)
                cout<<*i<<" ";
            cout<<endl;
        }

    }

    return 0;
} 
