#include <iostream>

using namespace std;

int main() {
    int so;
    cout << "Nhap mot so nguyen: ";
    cin >> so;
    bool SoAm = false;
    if (so < 0) {
        SoAm = true;
        so = -so;
    }
    int DaoNguoc = 0;
    while (so > 0) {
        int chuSoCuoi = so % 10;
        DaoNguoc = DaoNguoc * 10 + chuSoCuoi;
        so /= 10;
    }
    if (SoAm) {
        DaoNguoc = -DaoNguoc;
    }
    cout << "So dao nguoc: " << DaoNguoc << endl;

    return 0;
}
