#pragma once
#include<iostream>
#include<vector>
using namespace std;
#define MAXMAN 3

class man
{
public:
    //�R���X�g���N�^
    man(string a)  
    { m_name = a;
    cout << m_name << "����" << endl; 
    }
    man(){ cout << m_name << "����" << endl; }
    //SET,GET
    void SetName(string a) { m_name = a; }
    const string GetName() { return m_name; }
    //�f�X�g���N�^
    ~man() { cout << m_name << "��" << endl; }
    //�t�����h�N���X�錾
    friend class woman;
private:
    string m_name;
};

class woman
{
public:
    string func(man* obj)
    {
        if (obj->GetName() == "��܂���")
        {
            return "�N�ߊ��Ȃ���";
        }
        else
        {
            return "�N���߂܂��āI";
        }
    }
};