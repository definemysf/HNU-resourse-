#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int grades[n];
    for (int i = 0; i < n; i++)
        cin >> grades[i];

    int grades_num[101] = {0};
    for (int i = 0; i < n; i++) {
        grades_num[grades[i]]++;
    }
    for (int i = 100; i >= 0; i--) {
        if (grades_num[i] > 0) {
            cout << i << " " << grades_num[i] << endl;
        }
    }
}

/*
【问题描述】已知全省有n个学生参加计算机等级考试，其成绩值均为0-100之间的整数值，且成绩中有很多值重复出现，统计各个分数值重复出现的次数。
【输入形式】
  　　输入的第一行包含一个整数n。
  　　第二行包含n个整数，用空格分隔，分别表示n个整数。
【输出形式】
  　　输出多行数据，每行数据包含2个整数，分别表示分数和出现次数，以空格分开，按分数从高到底顺序输出。
【样例输入】
    10
    98 88 77 65 34 65 86 77 91 82
【样例输出】
    98 1
    91 1
    88 1
    86 1
    82 1
    77 2
    65 2
    34 1
【样例说明】
【评分标准】
评测用例规模与约定
所有评测用例满足：1 ≤ n ≤ 100000，成绩是不超过100的非负整数。
 */