#include <TFT_eSPI.h>
#include <TimeLib.h>
#include "timeClockFont.h"
#include "timeClockDraw.h"

TFT_eSPI clockTFT(240, 240);

int Hour_sign = 60;
int Minute_sign = 60;
int Second_sign = 60;

// // 传入显示实例
// void timeClockinit(TFT_eSPI *inTFT)
// {
//     clockTFT = &inTFT;
// }

// 用快速线方法绘制数字
void drawLineFont(uint32_t _x, uint32_t _y, uint32_t _num, uint32_t _size, uint32_t _color)
{
    uint32_t fontSize;
    const LineAtom *fontOne;
    // 小号(9*14)
    if (_size == 1)
    {
        fontOne = smallLineFont[_num];
        fontSize = smallLineFont_size[_num];
        // 绘制前清理字体绘制区域
        clockTFT.fillRect(_x, _y, 9, 14, TFT_BLACK);
    }
    // 中号(18*30)
    else if (_size == 2)
    {
        fontOne = middleLineFont[_num];
        fontSize = middleLineFont_size[_num];
        // 绘制前清理字体绘制区域
        clockTFT.fillRect(_x, _y, 18, 30, TFT_BLACK);
    }
    // 大号(36*90)
    else if (_size == 3)
    {
        fontOne = largeLineFont[_num];
        fontSize = largeLineFont_size[_num];
        // 绘制前清理字体绘制区域
        clockTFT.fillRect(_x, _y, 36, 90, TFT_BLACK);
    }
    else
        return;

    for (uint32_t i = 0; i < fontSize; i++)
    {
        clockTFT.drawFastHLine(fontOne[i].xValue + _x, fontOne[i].yValue + _y, fontOne[i].lValue, _color);
    }
}

// 时钟刷新,输入1强制刷新
void timeClockDisplay(int reflash_en = 0)
{
    int now_hour = hour();     //获取小时
    int now_minute = minute(); //获取分钟
    int now_second = second(); //获取秒针
    //小时刷新
    if ((now_hour != Hour_sign) || (reflash_en == 1))
    {
        drawLineFont(20, timeY, now_hour / 10, 3, SD_FONT_WHITE);
        drawLineFont(60, timeY, now_hour % 10, 3, SD_FONT_WHITE);
        Hour_sign = now_hour;
    }
    //分钟刷新
    if ((now_minute != Minute_sign) || (reflash_en == 1))
    {
        drawLineFont(101, timeY, now_minute / 10, 3, SD_FONT_YELLOW);
        drawLineFont(141, timeY, now_minute % 10, 3, SD_FONT_YELLOW);
        Minute_sign = now_minute;
    }
    //秒针刷新
    if ((now_second != Second_sign) || (reflash_en == 1)) //分钟刷新
    {
        drawLineFont(182, timeY + 30, now_second / 10, 2, SD_FONT_WHITE);
        drawLineFont(202, timeY + 30, now_second % 10, 2, SD_FONT_WHITE);
        Second_sign = now_second;
    }
}