#include <iostream>
#include <cstring>
using namespace std;

const int MAXN = 10010;  // 数组最大长度
int a[MAXN], b[MAXN], c[MAXN];  // 三个数组分别存储两个乘数和结果

int main() {
    string s1, s2;  // 用字符串读入两个乘数
    cin >> s1 >> s2;

    int len1 = s1.size(), len2 = s2.size();  // 计算两个乘数的长度
    for (int i = 0; i < len1; i++) a[i] = s1[len1-1-i] - '0';  // 将字符串转换为整数数组
    for (int i = 0; i < len2; i++) b[i] = s2[len2-1-i] - '0';

    memset(c, 0, sizeof(c));  // 初始化结果数组

    for (int i = 0; i < len1; i++) {  // 逐位相乘
        for (int j = 0; j < len2; j++) {
            c[i+j] += a[i] * b[j];
        }
    }

    int len = len1 + len2 - 1;  // 计算结果数组的长度
    for (int i = 0; i < len; i++) {  // 处理进位
        c[i+1] += c[i] / 10;
        c[i] %= 10;
    }

    while (len > 0 && c[len] == 0) len--;  // 去掉前导0

    for (int i = len; i >= 0; i--) cout << c[i];  // 输出结果

    return 0;
}
