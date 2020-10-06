// Attribute Parser
// James Sacco

#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    constexpr std::size_t maxlinelen{200};
    // Input number of lines and queries
    int n, q, i;
    cin >> n >> q;
    string input;
    // Use vectors as dynamic arrays; their sizes can change at runtime.
    vector<string> src;
    vector<string> query;
    cin.ignore();

    for(i = 0 ; i < n; i++)
    {
        getline(cin,input);
        src.push_back(input);
    }
    for(i = 0 ; i < q; i++)
    {
        getline(cin,input);
        query.push_back(input);
    }
    
    // map string attributes
    map<string, string> m;
    // initialize tag variable 
    vector<string> tagName;
    
    // remove these chars from tag declarations
    char chars[] = "</-";
        
    for (int i = 0; i < strlen(chars); ++i)
    {
      input = src[i];
      input.erase(remove(input.begin(), input.end(), chars[i]), input.end());
    
      // check first two string positions in tag
      if(input.substr(0,2)=="</")
       {
            tagName.pop_back();
       }
       else
       {
            stringstream ss;
            ss.str("");
            ss << input;
            string t1,p1,v1;
            char ch;
            ss >> ch >> t1 >> p1 >> ch >> v1;
            string input1 = "";
            if(tagName.size() > 0)
            {
                input1 = *tagName.rbegin();
                input1 = input1 + "." + t1;
            }
            else
            {
                input1 = t1;
            }
            tagName.push_back(input1);
            m[*tagName.rbegin() + "~" + p1] = v1;
            while(ss)
            {
                ss >> p1 >> ch >> v1;
                m[*tagName.rbegin() + "~" + p1] = v1;
            }
        }
    }

    // Print value of attribute from each query.
    for(i = 0; i < q; i++)
    {
        if (m.find(query[i]) == m.end())
        {
            cout << "Not Found!"<< endl;
        }
        else
        {
            cout << m[query[i]] << endl;
        }
    }
    return 0;

}


