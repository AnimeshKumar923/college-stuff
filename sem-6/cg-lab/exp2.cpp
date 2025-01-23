#include <iostream>
#include <cmath>
#include <graphics.h>
#include <conio.h>

#define round(a) ((int)(a + 0.5))

// Function to draw a line using the DDA algorithm
void dda_line(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;

    int length = (abs(dy) > abs(dx)) ? abs(dy) : abs(dx);

    float xinc = dx / (float)length;
    float yinc = dy / (float)length;

    float x = x1, y = y1;

    putpixel(round(x), round(y), 15);

    for (int k = 1; k <= length; k++) {
        x += xinc;
        y += yinc;
        putpixel(round(x), round(y), 15);
        delay(100);
    }
}

int main() {
    int x1, x2, y1, y2;
    int gd = DETECT, gm;

    std::cout << "Enter the x-coordinate of starting point: ";
    std::cin >> x1;

    std::cout << "Enter the y-coordinate of starting point: ";
    std::cin >> y1;

    std::cout << "Enter the x-coordinate of ending point: ";
    std::cin >> x2;

    std::cout << "Enter the y-coordinate of ending point: ";
    std::cin >> y2;

    // Initialize the graphics mode
    initgraph(&gd, &gm, (char *)"");

    // Draw the line
    dda_line(x1, y1, x2, y2);

    setcolor(4);
    getch();

    // Close the graphics window
    closegraph();

    return 0;
}
