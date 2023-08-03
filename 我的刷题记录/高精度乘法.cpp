#include <iostream>
#include <cstring>
using namespace std;

const int MAXN = 10010;  // ������󳤶�
int a[MAXN], b[MAXN], c[MAXN];  // ��������ֱ�洢���������ͽ��

int main() {
    string s1, s2;  // ���ַ���������������
    cin >> s1 >> s2;

    int len1 = s1.size(), len2 = s2.size();  // �������������ĳ���
    for (int i = 0; i < len1; i++) a[i] = s1[len1-1-i] - '0';  // ���ַ���ת��Ϊ��������
    for (int i = 0; i < len2; i++) b[i] = s2[len2-1-i] - '0';

    memset(c, 0, sizeof(c));  // ��ʼ���������

    for (int i = 0; i < len1; i++) {  // ��λ���
        for (int j = 0; j < len2; j++) {
            c[i+j] += a[i] * b[j];
        }
    }

    int len = len1 + len2 - 1;  // ����������ĳ���
    for (int i = 0; i < len; i++) {  // �����λ
        c[i+1] += c[i] / 10;
        c[i] %= 10;
    }

    while (len > 0 && c[len] == 0) len--;  // ȥ��ǰ��0

    for (int i = len; i >= 0; i--) cout << c[i];  // ������

    return 0;
}
