#pragma once
#include<iostream>
#include<vector>
using namespace std;
#define MAXMAN 3

class man
{
public:
    //コンストラクタ
    man(string a)  
    { m_name = a;
    cout << m_name << "生成" << endl; 
    }
    man(){ cout << m_name << "生成" << endl; }
    //SET,GET
    void SetName(string a) { m_name = a; }
    const string GetName() { return m_name; }
    //デストラクタ
    ~man() { cout << m_name << "死" << endl; }
    //フレンドクラス宣言
    friend class woman;
private:
    string m_name;
};

class woman
{
public:
    string func(man* obj)
    {
        if (obj->GetName() == "やまもと")
        {
            return "君近寄らないで";
        }
        else
        {
            return "君初めまして！";
        }
    }
};