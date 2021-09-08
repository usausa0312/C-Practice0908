
#include"main.h"


void main()
{
    unique_ptr<man[]>men(new man[MAXMAN]);
    unique_ptr<woman>woman01(new woman);

    const vector<string> s_Tag = { "‚è‚Æ","‚è‚ã‚¤‚¹‚¢","‚â‚Ü‚à‚Æ" };

    for (vector<int>::size_type i = 0; i < s_Tag.size(); ++i)
    {
        men[i].SetName(s_Tag[i]);
        cout << men[i].GetName() << woman01->func(&men[i]) << endl;
    }
}