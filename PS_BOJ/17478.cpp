#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<string>
#define fore(i, n) for (int i = 0; i != (n); ++i)
#define FAST cin.sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
using namespace std;

int N;


void prtdash(int n) {
    for (int i = 0; i != n; ++i) cout << "____";
}
main() { FAST
    cin >> N;
    cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
    for (int i = 0; i != N; ++i) {
        prtdash(i); cout << "\"����Լ��� ������?\"\n";
        prtdash(i); cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
        prtdash(i); cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
        prtdash(i); cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
    }
    prtdash(N); cout << "\"����Լ��� ������?\"\n";
    prtdash(N); cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
    prtdash(N); cout << "��� �亯�Ͽ���.\n";
    for (int i = N - 1; i >= 0; --i) {
        prtdash(i); cout << "��� �亯�Ͽ���.\n";
    }
}