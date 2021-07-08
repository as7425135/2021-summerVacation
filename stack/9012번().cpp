#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int iSize = 0;

    cin >> iSize;

    for (int i = 0; i < iSize; ++i)
    {
        stack<char> st;
        string s;
        cin >> s;

        for (int j = 0; j < s.length(); ++j)
        {
            if (st.empty() || s[j] == '(') st.push(s[j]);
            else if (st.top() == '(') st.pop();
        }

        if (st.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
