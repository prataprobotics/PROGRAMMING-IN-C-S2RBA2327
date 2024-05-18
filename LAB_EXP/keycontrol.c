#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

int main() {
    // Initialize the ncurses mode
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    printw("Press arrow keys to print directions (ESC to quit)\n");
    refresh();

    int ch;
    while ((ch = getch()) != 27) {  // 27 is the ASCII value for the ESC key
        switch (ch) {
            case KEY_UP:
                printw("Forward\n");
                break;
            case KEY_DOWN:
                printw("Backward\n");
                break;
            case KEY_LEFT:
                printw("Left\n");
                break;
            case KEY_RIGHT:
                printw("Right\n");
                break;
            default:
                break;
        }
        refresh();
    }

    // End the ncurses mode
    endwin();
    return 0;
}
