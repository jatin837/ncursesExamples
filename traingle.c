#include <ncurses.h>

int main() {
    initscr();
    printw("This is your life");
    refresh();
    getch();
    endwin();

    return 0;

}

