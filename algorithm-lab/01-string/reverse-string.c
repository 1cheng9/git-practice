#include <stdio.h>
#include <string.h>
#include <assert.h>

/* LeetCode 提交时只复制这个函数 */
void reverseString(char *s, int sSize)
{
    int left = 0;
    int right = sSize - 1;

    while (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

/* 以下只用于本地测试，提交 LeetCode 时不要复制 */
static void test(char *input, const char *expect)
{
    reverseString(input, (int)strlen(input));
    printf("%s\n", input);
    assert(strcmp(input, expect) == 0);
}

int main(void)
{
    char a[] = "hello";
    char b[] = "Hannah";
    char c[] = "a";

    test(a, "olleh");
    test(b, "hannaH");
    test(c, "a");

    printf("all tests passed\n");
    return 0;
}