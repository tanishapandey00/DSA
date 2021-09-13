#include <iostream>
#include <string>
using namespace std;
void password_varification(string str)
{
    int upper, lower, number, special;
    if (str.length() > 10)
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                upper = upper + 1;
            }
            else if (str[i] >= 'a' && str[i] <= 'z')
            {
                lower = lower + 1;
            }
            else if (str[i] >= 0 && str[i] <= 9)
            {
                number = number + 1;
            }
            else
            {
                special = special + 1;
            }
        }
        if (upper > 0 && lower > 0 && number > 0 && special > 0)
        {
            cout << "Your password is valid" << endl;
        }
        else
        {
            cout << "Your password is invalid" << endl;
        }
    }
    else
    {
        cout << "Your password is to short so invalid" << endl;
    }
}
int main()
{
    string s1 = "Tanisha is a good girl";
    //cin>>s1;
    //cout<<s1<<endl;
    //Capitalizing String
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            s1[i] = s1[i] - 'a' + 'A';
        }
    }
    //After capitalizing
    //cout<<s1<<endl;
    //Checking How many words are present in the String
    int word = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == ' ' && s1[i + 1] != ' ')
        {
            word++;
        }
    }
    if (s1[0] != ' ')
    {
        word++;
    }
    else if (s1[s1.length() - 1] == ' ')
    {
        word--;
    }
    else
    {
        cout << "Error found" << endl;
    }
    cout << "Number of word in this string is " << word << endl;
    //Checking if the password is correct or not
    string s2 = "aabaa";
    string s3 = "aabaa";
    
    //  password_varification(s2);
    cout << s2 << endl;
    //Reversing the string
    int n = s2.length() - 1;
    for(int i=0;i<=n;i++)
    {
        int temp = s2[i];
        s2[i] = s2[n - i];
        s2[n - i] = temp;
        i++;
    }
    cout << s2 << endl;
    if(s3 == s2){
        cout<<"s2 is Palindrome"<<endl;
    }
    else{
        cout<<"s2 is not Palindrome"<<endl;
    }

    return 0;
}