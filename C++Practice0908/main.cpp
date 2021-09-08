
#include"main.h"


void main()
{
    unique_ptr<man[]>men(new man[MAXMAN]);
    unique_ptr<woman[]>women(new woman[MAXMAN]);
    const string s_Tag[MAXMAN] = { "‚è‚Æ","‚è‚ã‚¤‚¹‚¢","‚â‚Ü‚à‚Æ" };

    for (int i = 0; i < MAXMAN; ++i)
    {
        men[i].SetName(s_Tag[i]);
        cout<<men[i].GetName()<<women[i].func(&men[i])<<endl;
    }
}