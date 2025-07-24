#include <iostream>
#include <string>
#include <limits>
#include <cctype>

using namespace std;


void drawBox(int width, int height);
void drawDiamond(int size);
void drawSpiral(int n);
char getPatternChoice();
int getDimension(const string& prompt);

int main() {
    char choice = getPatternChoice();

    if (choice == 'B') {
        int width = getDimension("Enter width of the box: ");
        int height = getDimension("Enter height of the box: ");
        drawBox(width, height);
    } else if (choice == 'D') {
        int size = getDimension("Enter size of the diamond (odd positive integer): ");
        drawDiamond(size);
    } else if (choice == 'S') {
        int n = getDimension("Enter size of the spiral: ");
        drawSpiral(n);
    }
    return 0;
}


void drawBox(int width, int height) {
    for (int row = 0; row < height; ++row) {
        for (int col = 0; col < width; ++col) {
            if (row == 0 || row == height - 1 || col == 0 || col == width - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}


void drawDiamond(int size) {
    if (size < 1 || size % 2 == 0) {
        cout << "Diamond size must be an odd positive integer." << endl;
        return;
    }
    int mid = size / 2;
    for (int i = 0; i < size; ++i) {
        int spaces = abs(mid - i);
        int middleSpaces = size - 2 * spaces - 2;
        cout << string(spaces, ' ');
        cout << "*";
        if (middleSpaces >= 0)
            cout << string(middleSpaces + 1, ' ') << "*";
        cout << endl;
    }
}


void drawSpiral(int n) {
    if (n < 1 || n > 50) {
        cout << "Spiral size must be between 1 and 50." << endl;
        return;
    }
    int arr[50][50] = {0};
    int num = 1;
    int left = 0, right = n - 1, top = 0, bottom = n - 1;
    while (left <= right && top <= bottom) {
        for (int j = left; j <= right; ++j)
            arr[top][j] = num++;
        ++top;
        for (int i = top; i <= bottom; ++i)
            arr[i][right] = num++;
        --right;
        if(top <= bottom) {
            for (int j = right; j >= left; --j)
                arr[bottom][j] = num++;
            --bottom;
        }
        if(left <= right) {
            for (int i = bottom; i >= top; --i)
                arr[i][left] = num++;
            ++left;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << arr[i][j] << (arr[i][j] < 10 ? "   " : arr[i][j] < 100 ? "  " : " ");
        cout << endl;
    }
}


char getPatternChoice() {
    string input;
    while (true) {
        cout << "Choose pattern - Box (B), Diamond (D), Spiral (S): ";
        cin >> input;
        if (input.length() == 1) {
            char c = toupper(input[0]);
            if (c == 'B' || c == 'D' || c == 'S')
                return c;
        }
        cout << "Invalid choice. Try again." << endl;
    }
}


int getDimension(const string& prompt) {
    int value;
    while (true) {
        cout << prompt;
        cin >> value;
        if (cin.fail() || value < 1) {
            cout << "Please enter a positive integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
            return value;
        }
    }
}
