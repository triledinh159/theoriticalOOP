#include "Point.cpp"
int main(){
    cout << "Insert number of point(s): ";
    int n, x, y,tmpX,tmpY; cin >> n;  
    float max = 0;
    Point* list = new Point[n];
    for (int i=0; i<n; i++){
        list[i] = Point();
        list[i].Input();
    }
    Point longestDot1, longestDot2;
    cout << "Imported points: " << endl;
    for (int i=0; i<n; i++){
        list[i].Output();
    }
    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++)
            if (max < list[0].distance(list[i], list[j])) {
                max = list[0].distance(list[i], list[j]);
                longestDot1 = list[i];
                longestDot2 = list[j];
            }
    cout << "The longest distance is " << max << '\n';
    cout << "Between: "; longestDot1.Output1(); cout << "and "; longestDot2.Output1();
    cout << "Insert translating vector: "; cin >> x >> y;
    for (int i=0; i<n; i++){
        list[i].translation(x, y);
    }
    return 0;
}