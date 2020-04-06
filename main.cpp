#include <iostream>
#include <algorithm>


using namespace std;

bool isincorner(int x, int y) {
    if (y < 0) {


        if (x > 0) {
            if (y < 0) { y = -y; }
            if (x < 0) { x = -x; }
            if (x == (y * +1)) {
                return true;
            } else {
                return false;
            }
        } else if (x < 0) {
            if (y < 0) {y = -y;}
            if (x < 0) {x = -x;}
            if (x == y ) {
                return true;
            } else {
                return false;
            }
        }
    } else if (y >= 0) {

        if (y < 0) { y = -y; }
        if (x < 0) { x = -x; }


        if (x == y) {
            return true;
        } else {
            return false;
        }
    }
}

int main() {
    while (true) {
        int x, y;
        cin >> x >> y;
        int currr;
        int curx = 0, cury = 0;
        int t = 1;
        for (int times = 1; curx <= x && cury <= y; times++) {
            if (times % 2 == 1) {
                int square = (times + 1) / 2;
                curx += square;
            } else {
                int square = (times) /2;
                cury += square;
            }
            t = times;
        }
        int corner = t - 1;
        if (isincorner(x,y)) {
            corner -= 1;
        }else{
            corner += 1;
        }
        cout << corner;

    }
    return 0;
}
