#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isSecure(char s[]) {
    int n = strlen(s);

    // Condition 5: length at least 10
    if (n < 10)
        return 0;

    int lower = 0;
    int upper = 0;
    int digit = 0;
    int special = 0;

    // Check all characters
    for (int i = 0; i < n; i++) {

        // Lowercase can be anywhere
        if (s[i] >= 'a' && s[i] <= 'z')
            lower = 1;

        // Uppercase, digit and special must be strictly inside
        if (i > 0 && i < n - 1) {

            if (s[i] >= 'A' && s[i] <= 'Z')
                upper = 1;

            if (s[i] >= '0' && s[i] <= '9')
                digit = 1;

            if (s[i] == '@' || s[i] == '#' ||
                s[i] == '%' || s[i] == '&' ||
                s[i] == '?')
                special = 1;
        }
    }

    return lower && upper && digit && special;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char s[1005];
        scanf("%s", s);

        if (isSecure(s))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
