#include <iostream>

using namespace std;

int main()
{
    int casos, cont = 0;
    cin >> casos;
    while (cont < casos){
        cout << "Ho";
        if (cont != casos-1){
            cout << " ";
        }else{
            cout << "!";
        }
        cont++;
    }
    cout <<endl;
    return 0;
}
