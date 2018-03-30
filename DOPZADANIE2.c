/* Для перевода из десятичной системы в двоичную нужно делить
десятичное число на 2 и записывать остатки от деления до тех пор, пока частное
от предыдущего деления не станет равно 0. */
#include <cstdlib> // т.к. system объявлена в ней
#include <iostream> // ввод и вывод данных
int main()
{
    int num=0, t=0, d=1;
    cout<<"Vvedite  znachenie:"<<endl;
    cout<<"==> ";
    cin>>num;
    while(num)
    {
        t +=(num%2)*d;
        //cout<<t;
        num=num/2;
        d=d*10; // razryad
    }
    cout<<t;
  //  cout<<num;
    cout<<endl;
    system("pause");
    return 0;
}