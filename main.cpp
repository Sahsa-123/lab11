#include <iostream>
#include <vector>
#include <deque>
#include <iterator>

int main(){
    using namespace std;

    //���� �������
    int len;
    setlocale(LC_ALL, "Russian");
    cout<<"������� ����� �������: ";
    cin>>len;
    cout<<"������� ��������� ������� ����� enter:\n";
    vector <int> numsV;
    deque <int> numsDQ(len,0);
    for (int i=0;i<len;i++){
        int data;
        cin>>data;
        numsV.push_back(data);
    }
    //���� �������

    //������������� ����������
    vector<int>::iterator itV;
    deque<int>::iterator itDQ;
    itV=numsV.begin();
    itDQ=numsDQ.begin();
    //������������� ����������

    //����� �� ��������� �������
    for(itV;itV!=numsV.end();itV++){
        *itDQ=*itV;
        itDQ++;
    }
    //����� �� ��������� �������

    //����� ���� ��� ��������
    cout<<"�������� ����:\n";
    /*itDQ=numsDQ.begin();
    for(itDQ;itDQ!=numsDQ.end();itDQ++){
        cout<<*itDQ<<" ";
    }
    cout<<"\n";*/
    for(int i=0;i<len;i++){
        cout<<numsDQ.at(i)<<" ";
    }
    //����� ����
    return 0;

}
