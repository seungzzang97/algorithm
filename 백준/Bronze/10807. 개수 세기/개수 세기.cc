#include <stdio.h>
#include <string.h>


int cnt[201], w = 100;
int main()
{
	int n, v;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &v);
		cnt[v + w]++;
	}
	scanf("%d", &v);
	printf("%d\n", cnt[v + w]);

}