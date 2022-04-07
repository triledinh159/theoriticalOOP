#include "TKS.cpp"

int main() {
    Triangle triPoints[10000];
    float maxp = 0, maxs = 0;
    cout << "Insert nummber of triangles: ";
    int n,check=0; cin >> n;
    while (true) {
        for (int i = 0; i < n; i++) {
            triPoints[i] = Triangle();
            cout << "Triangle " << i + 1 << ":\n";
            triPoints[i].Input();
            if (triPoints[i].checkPointInserted() == 1) check += 1;
        }
        for (int i = 0; i < n - 1; i++) {
            if (check > 0) break;
            for (int j = i + 1; j < n; j++) {
                float tmp = triPoints[i].perimeter();
                if (tmp < 0) {
                    maxp = tmp;
                    break;
                }
                if (tmp > maxp)
                    maxp = tmp;
                tmp = triPoints[i].area(tmp / 2);
                if (tmp > maxs)
                    maxs = tmp;
            }
        }
        if (maxp > 0 && maxs > 0) break;
        cout << "Invalid triangle(s). Please retype " << n << " triangle(s): ";
    }
    cout << "Details of "<<n <<" triangles:\n";
    for (int i = 0; i < n; i++) {
        triPoints[i].display();
    }

    int tmp1, tmp2;
    cout << "Insert vector translate: "; cin >> tmp1 >> tmp2;
    for (int i = 0; i < n; i++) {
        triPoints[i].translation(tmp1, tmp2);
    }

    maxp = 0, maxs = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++) {
            float tmp = triPoints[i].perimeter();
            if (tmp > maxp)
                maxp = tmp;
            tmp = triPoints[i].area(tmp / 2);
            if (tmp > maxs)
                maxs = tmp;
        }
    cout << "The largest perimeter and the largest area is " << maxp << " and " << maxs<<'\n';
    return 0;
}