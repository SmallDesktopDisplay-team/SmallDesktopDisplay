#ifndef timeClockDraw
#define timeClockDraw

typedef unsigned int uint32_t;

// 定义高度
#define timeY 82

// 时间记录
// Hour_sign;
// Minute_sign;
// Second_sign;

// 用快速线方法绘制数字
void drawLineFont(uint32_t _x, uint32_t _y, uint32_t _num, uint32_t _size, uint32_t _color);
// 时钟刷新,输入1强制刷新
void timeClockDisplay(int reflash_en);

#endif