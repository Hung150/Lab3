#include <iostream>
using namespace std;

enum etype {laborer, secretary, manager, accountant, executive, researcher};


int main()
{
    char letter;
    etype post;
 setlocale (0, "");

    cout << "(laborer, secretary, manager, accountant, executive, researcher)"
    <<"\nEnter the first letter of the post: ";
    cin>> letter;

    switch (letter)
    {
        case 'l':
            post = laborer;
            break;
        case 's':
            post = secretary;
            break;

        case 'm':
           post = manager;
            break;
        case 'a':
            post = accountant;
            break;

        case 'e':
           post = executive;
            break;

        case 'r':
            post = researcher;
            break;
    }

    switch(post)
    {
        case laborer:
           cout << "Full title of the post: laborer";
            break;

        case secretary:
            cout << "Full title of the post: secretary";
            break;
        case manager:
            cout << "Full title of the post: manager";
            break;
        case accountant:
            cout << "Full title of the post: accountant";
            break;
        case executive:
            cout << "Full title of the post: executive";
            break;
        case researcher:
            cout << "Full title of the post: researcher";
            break;
    }
 cout << endl;
  system ("pause");
    return 0;
}
