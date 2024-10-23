#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(char* s)
{
    int k = 0;
    int pos = 0; 
    char* t;

    while (t = strstr(s + pos, "!!!")) 
    {
        pos = t - s + 3; 
        k++; 
    }
    return k;
}

char* Change(char* s)
{
    char* t = new char[strlen(s) * 2 + 1]; 
    char* p;
    int pos1 = 0, 
        pos2 = 0;
    *t = 0;
    while (p = strstr(s + pos1, "!!!")) 
    {
        pos2 = p - s + 3; 
        #pragma warning(suppress : 4996)
        strncat(t, s + pos1, p - s - pos1); 
        #pragma warning(suppress : 4996)
        strcat(t, "**"); 
        pos1 = pos2; 
    }
    #pragma warning(suppress : 4996)
    strcat(t, s + pos1); 
    #pragma warning(suppress : 4996)
    strcpy(s, t); 
    return t;
}

int main()
{
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100); 

    cout << "String contained " << Count(str) << " groups of '!!!'" << endl;
    char* dest = new char[201];
    dest = Change(str);

    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    delete[] dest; 
    return 0;
}
