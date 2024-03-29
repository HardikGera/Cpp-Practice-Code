#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
    string s = "";

    for (int i = 1; i < argc; i++)
    {
        s += argv[i];
    }
    cout << s << endl;

    int freq[26] = {0}; 
	
		// total alphabets are 26.


	for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << char(i + 'a') << ", " << freq[i] << endl;
    }

    return 0;
}
