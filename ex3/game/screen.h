#ifndef SCREEN_H
#define SCREEN_H

#define SCREEN_WIDTH  320
#define SCREEN_HEIGHT 240

typedef struct color {
    char b;
    char g;
    char r;
} color_t;

extern color_t *screen;
extern color_t *screen_buffer;

extern color_t color_red, color_green, color_blue, color_purple,
               color_black;

void screen_init(void);
void screen_show_buffer(void);

void screen_clear(color_t color);
void screen_line(int xs, int ys, int xe, int ye, color_t color);
void screen_rectangle(int x, int y, int width, int height, color_t color);
void screen_fill_rectangle(int x, int y, int width, int height, color_t color);

#define screen_put(x, y, color) (screen_buffer[(y) * SCREEN_WIDTH + (x)] = (color))

#endif
