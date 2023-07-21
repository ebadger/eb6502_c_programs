#ifndef __HIRES_H__
#define __HIRES_H__

#define ROWS                192	// number of scanlines
#define ROW_FIRST           0
#define ROW_LAST            ROWS - 1
#define COLUMNS             40            // Number of columns/bytes per row
#define COLUMN_FIRST        0
#define COLUMN_LAST         COLUMNS - 1
#define WHITE               0x7F           // White hires byte
#define BLACK               0x00

#define HGR1SCRN            0x2000
#define HGR_SCRN_LEN        0x2000


#define HIRES_MEMORY_LOW_BYTE \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, \
0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0xA8, 0xA8, 0xA8, 0xA8, 0xA8, 0xA8, 0xA8, 0xA8, \
0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0xA8, 0xA8, 0xA8, 0xA8, 0xA8, 0xA8, 0xA8, 0xA8, \
0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0xA8, 0xA8, 0xA8, 0xA8, 0xA8, 0xA8, 0xA8, 0xA8, \
0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0xA8, 0xA8, 0xA8, 0xA8, 0xA8, 0xA8, 0xA8, 0xA8, \
0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, \
0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, \
0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, \
0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

#define HIRES_MEMORY_HIGH_BYTE \
0x20, 0x24, 0x28, 0x2C, 0x30, 0x34, 0x38, 0x3C, 0x20, 0x24, 0x28, 0x2C, 0x30, 0x34, 0x38, 0x3C, \
0x21, 0x25, 0x29, 0x2D, 0x31, 0x35, 0x39, 0x3D, 0x21, 0x25, 0x29, 0x2D, 0x31, 0x35, 0x39, 0x3D, \
0x22, 0x26, 0x2A, 0x2E, 0x32, 0x36, 0x3A, 0x3E, 0x22, 0x26, 0x2A, 0x2E, 0x32, 0x36, 0x3A, 0x3E, \
0x23, 0x27, 0x2B, 0x2F, 0x33, 0x37, 0x3B, 0x3F, 0x23, 0x27, 0x2B, 0x2F, 0x33, 0x37, 0x3B, 0x3F, \
0x20, 0x24, 0x28, 0x2C, 0x30, 0x34, 0x38, 0x3C, 0x20, 0x24, 0x28, 0x2C, 0x30, 0x34, 0x38, 0x3C, \
0x21, 0x25, 0x29, 0x2D, 0x31, 0x35, 0x39, 0x3D, 0x21, 0x25, 0x29, 0x2D, 0x31, 0x35, 0x39, 0x3D, \
0x22, 0x26, 0x2A, 0x2E, 0x32, 0x36, 0x3A, 0x3E, 0x22, 0x26, 0x2A, 0x2E, 0x32, 0x36, 0x3A, 0x3E, \
0x23, 0x27, 0x2B, 0x2F, 0x33, 0x37, 0x3B, 0x3F, 0x23, 0x27, 0x2B, 0x2F, 0x33, 0x37, 0x3B, 0x3F, \
0x20, 0x24, 0x28, 0x2C, 0x30, 0x34, 0x38, 0x3C, 0x20, 0x24, 0x28, 0x2C, 0x30, 0x34, 0x38, 0x3C, \
0x21, 0x25, 0x29, 0x2D, 0x31, 0x35, 0x39, 0x3D, 0x21, 0x25, 0x29, 0x2D, 0x31, 0x35, 0x39, 0x3D, \
0x22, 0x26, 0x2A, 0x2E, 0x32, 0x36, 0x3A, 0x3E, 0x22, 0x26, 0x2A, 0x2E, 0x32, 0x36, 0x3A, 0x3E, \
0x23, 0x27, 0x2B, 0x2F, 0x33, 0x37, 0x3B, 0x3F, 0x23, 0x27, 0x2B, 0x2F, 0x33, 0x37, 0x3B, 0x3F, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// divide-by 7 table
#define DIV7 \
0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, \
4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 9, \
9, 9, 9, 9, 9, 9,10,10,10,10,10,10,10,11,11,11,11,11,11,11,12,12,12,12,12,12,12,13,13,13,13,13, \
13,13,14,14,14,14,14,14,14,15,15,15,15,15,15,15,16,16,16,16,16,16,16,17,17,17,17,17,17,17,18,18, \
18,18,18,18,18,19,19,19,19,19,19,19,20,20,20,20,20,20,20,21,21,21,21,21,21,21,22,22,22,22,22,22, \
22,23,23,23,23,23,23,23,24,24,24,24,24,24,24,25,25,25,25,25,25,25,26,26,26,26,26,26,26,27,27,27, \
27,27,27,27,28,28,28,28,28,28,28,29,29,29,29,29,29,29,30,30,30,30,30,30,30,31,31,31,31,31,31,31, \
32,32,32,32,32,32,32,33,33,33,33,33,33,33,34,34,34,34,34,34,34,35,35,35,35,35,35,35,36,36,36,36,

// modulo-by-7 table
#define MOD7 \
0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, \
4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, \
1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, \
5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, \
2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, \
6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, \
3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, \
0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3,


void hires_clr(void);

void hires_hline(uint8_t column, uint8_t row, uint8_t length, uint8_t pixels);
void hires_vline(uint8_t column, uint8_t row, uint8_t length, uint8_t pixels);

#endif /* __HIRES_H__ */
