// Domashka29.06.2022.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

// Domashka29.06.2022.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

using namespace std;
//почему-то не работает с enum
/*
enum Menu
{
    enter = 1, output = 2, sort_mobnum = 3, sort_nam = 4, exit = 5
};
*/

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //выдает ошибки, но работает. Если увидите в чем проблема, подскажите пожалуйста.
    /*
    int n = 5, vibor, mTel[5], Tel[5], temp;
    bool D = false;
    do
    {
        cout << "Выберите пункт меню: " << endl;
        cout << "1.Ввести номер\n2.Вывести номер\n3.Сортировка по мобильному телефону\n"
            << "4.Сортировка по городскому телефону\n5.Выход\n";
        cin >> vibor;
        switch (vibor)
        {
    //записывать так: case Menu.enter: или так:case enter: в ответе 2й вариант
        case 1:
        {
            cout << "Введите номер для каждого абонента\n";
            D = true;
            for (int i=0; i < n; i++)
            {
                cout << "Введите мобильный номер телефона для пользователя " << i + 1 << endl;
                cin >> mTel[i];
                cout << "Введите городской номер телефона для пользователя " << i + 1 << endl;
                cin >> Tel[i];
            }
            break;
        }
        case 2:
        {
            if (D)
            {
                cout << "Номер пользователя / Номер мобильного телефона / Номер городского телефона\n";
                for (int i=0; i < n; i++)
                {
                    cout << i + 1 << " " << mTel[i] << " " << Tel[i] << endl;
                }
            }
            else
            {
                cout << "В справочнике отсутствет информация о телефонах.\n Заполните информацию в п.1\n";
            }
            break;
        }
        case 3:
        {
            if (D)
            {
                for (int i = 1; i <= n; i++)
                {
                    for (int j = 0; j < n - 1; j++)
                    {
                        if (mTel[j] > mTel[j + 1])
                        {
                            temp = mTel[j];
                            mTel[j] = mTel[j + 1];
                            mTel[j + 1] = temp;
                        }
                    }
                }
                for (int i = 0; i < n; i++)
                {
                    cout << mTel[i] << endl;
                }
            }
            else
            {
                cout << "В справочнике отсутствет информация о телефонах.\n Заполните информацию в п.1\n";
            }
            break;
        }
        case 4:
        {
            if (D)
            {
                for (int i = 1; i <= n; i++)
                {
                    for (int j = 0; j < n - 1; j++)
                    {
                        if (Tel[j] > Tel[j + 1])
                        {
                            temp = Tel[j];
                            Tel[j] = Tel[j + 1];
                            Tel[j + 1] = temp;
                        }
                    }
                }
                for (int i = 0; i < n; i++)
                {
                    cout << Tel[i] << endl;
                }
            }
            else
            {
                cout << "В справочнике отсутствет информация о телефонах.\n Заполните информацию в п.1\n";
            }
            break;
        }
        case 5:
        {
            cout << "До новых встреч :) " << endl;
            break;
        }
        default:
            cout << "Ошибка ввода, повторите запрос.\n";
        }
    }
    while (vibor != 5);
}
*/
/*
    const int n = 10;
    int mass[n], temp, nShift;
    cout << "Введите элементы массива.\n";
    for (int i = 0; i < n; i++)
    {
        cin >> mass[i];
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << mass[i] << " ";
    }
    for (int i = 1; i < n; i++)
    {
        nShift = 0;
        for (int r = 0; r < n - i; r++)
        {
            if (mass[r]>mass[r+1])
            {
            temp = mass[r];
            mass[r] = mass[r + 1];
            mass[r + 1] = temp;
            nShift++;
            }
        }
        if (nShift == 0)
        {
            cout << "Сортировка завершилась на " << i << " шаге\n";
            break;
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
    cout << mass[i] << " ";
    }
    */


//задание 4

    const int n = 10;
    int mass[n], mass2[n], temp, nShift, k, nShift1, schet1 = 0, schet2 = 0;
    srand(time(NULL));
    //cout << "Введите элементы массива.\n";
    for (int l = 0; l < 1000; l++)
    {
        for (int i = 0; i < n; i++)
        {
            mass[i] = rand()%100;
            mass2[i] = mass[i];
        }
        /*
        cout << "Сформированный массив: ";
        for (int i = 0; i < n; i++)
        {
            cout << mass[i] << " ";
        }
        cout << endl<<endl;
        */
        cout << "Сортировка усовершенствованным пузырьком" << endl;
        
        for (int i = 1; i <= n; i++)
        {
            nShift = 0;
            for (int r = 0; r < n - i; r++)
            {
                if (mass[r] > mass[r + 1])
                {
                    temp = mass[r];
                    mass[r] = mass[r + 1];
                    mass[r + 1] = temp;
                    nShift++;
                }
            }
            if (nShift == 0)
            {
                cout << "Сортировка усовершенствованным пузырьком завершилась на " << i << " шаге\n";
                schet1+=i;
                break;
            }
        }
        /*
        for (int i = 0; i < n; i++)
        {
            cout << mass[i] << " ";
        }
        cout << endl;
        */
        // сортировка выбором
        // const size_t size = 5; что значит size_t
       // int i, j, k;
        //int x;
       // int arr[n]{ 1,2,3,4,5};
        cout << "Сортировка выбором\n";
        nShift1 = 0;
        for (int i = 0; i < n; i++) {
            k = i;
            temp = mass2[i];
            for (int j = i + 1; j < n; j++) {
                if (mass2[j] < temp) {
                    k = j; // k  - индекс наименьшего элемента
                    temp = mass2[j];
                }
            }
            if (k != i) {
                mass2[k] = mass2[i];
                mass2[i] = temp;
                nShift1++;
            } 
        }
        cout << "Сортировка выбором завершилась на " << nShift1 << " шаге\n";
        schet2+= nShift1;
        /*
        for (int i = 0; i < n; i++)
        {
            cout << mass2[i] << " ";
        }
        cout << endl;
        */

    }
    cout << "Среднее число перестановок для пузырькового усовершенствованного метода " << (double)schet1 / 1000 << endl;
    cout << "Среднее число перестановок для сортировки выбором " << (double)schet2 / 1000 << endl;
}






// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
