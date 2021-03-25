#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n)
{
    long count = 0;
    long counta = 0;
    long countRa = 0;
    long repeat = n/s.size();
    
    if(s == "a")
    {
        return n;
    }
    
    if(n%s.length() != 0)
    {
        for(int i = 0;i<(n%s.length());i++)
        {
            if(s[i] == 'a')
            {
                countRa ++;
            }
        }
    }
    
    for(int w = 0; w<s.length();w++)
    {
        if(s[w] == 'a')
        {
            counta ++;
        }
    }
      
    count = counta*repeat + countRa;
    
    // else
    // {
    //         for(long i = 0;i<n;i++)
    //         {
    //             if(s[i%(long)s.length()] == 'a')
    //             {
    //                 count++;
    //             }
    //         }
    // }

    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
