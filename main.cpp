#include <iostream>
#include <vector>
#include <deque>
#include <iterator>

int main(){
    using namespace std;

    //Ввод вектора
    int len;
    setlocale(LC_ALL, "Russian");
    cout<<"Введите длину вектора: ";
    cin>>len;
    cout<<"Введите эелементы вектора через enter:\n";
    vector <int> numsV;
    deque <int> numsDQ(len,0);
    for (int i=0;i<len;i++){
        int data;
        cin>>data;
        numsV.push_back(data);
    }
    //Ввод вектора

    //Инициализация итераторов
    vector<int>::iterator itV;
    deque<int>::iterator itDQ;
    itV=numsV.begin();
    itDQ=numsDQ.begin();
    //Инициализация итераторов

    //Обход по итератору вертора
    for(itV;itV!=numsV.end();itV++){
        *itDQ=*itV;
        itDQ++;
    }
    //Обход по итератору вертора

    //Вывод дэка для проверки
    cout<<"Проверка дека:\n";
    /*itDQ=numsDQ.begin();
    for(itDQ;itDQ!=numsDQ.end();itDQ++){
        cout<<*itDQ<<" ";
    }
    cout<<"\n";*/
    for(int i=0;i<len;i++){
        cout<<numsDQ.at(i)<<" ";
    }
    //Вывод дэка
    return 0;

}
