#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.14159265359
#include <windows.h> 
#include<time.h>
void color(short x);
float sx, sy;
float sdCircle(float px, float py, float r)
{
    float dx = px - sx, dy = py - sy;
    return sqrtf(dx * dx + dy * dy) - r;
}
float opUnion(float d1, float d2)
{
    return d1 < d2 ? d1 : d2;
}
#define T px+scale*r*cosf(theta),py+scale*r*sin(theta)
float f(float px, float py, float theta, float scale, int n)
{
    float d = 0.0f;
    for (float r = 0.0f; r < 0.8f; r += 0.02f)
        d = opUnion(d, sdCircle(T, 0.05f * scale * (0.95f - r)));
    if (n > 0)
        for (int t = -1; t <= 1; t += 2)
        {
            float tt = theta + t * 1.8f;
            float ss = scale * 0.9f;
            for (float r = 0.2f; r < 0.8f; r += 0.1f)
            {
                d = opUnion(d, f(T, tt, ss * 0.5f, n - 1));
                ss *= 0.8f;
            }
        }
    return d;
}
int main(int argc, char* argv[])
{
    int x;
    int n = argc > 1 ? atoi(argv[1]) : 3;
    for (sy = 0.8f; sy > 0.0f; sy -= 0.02f, putchar('\n'))
        for (sx = -0.35f; sx < 0.35f; sx += 0.01f)
        {
            srand((unsigned int)time(NULL));
            x = rand() % 16;
            color(x);
            putchar(f(0, 0, PI * 0.5f, 1.0f, n) < 0 ? '*' : ' ');
        }
    return 0;
}
void color(short x)	//自定义函根据参数改变颜色 
{
    if (x >= 0 && x <= 15)//参数在0-15的范围颜色
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);	//只有一个参数，改变字体颜色 
    else//默认的颜色白色
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}


