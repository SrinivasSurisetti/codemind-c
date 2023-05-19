#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool checkDecimalString(char *string) {
    while (*string) {
        if (!isdigit(*string)) {
            return false;
        }
        string++;
    }
    return true;
}

int main() {
    int num_cases;
    scanf("%d", &num_cases);

    while (num_cases--) {
        char input_string[10001];
        scanf("%s", input_string);

        bool is_decimal = checkDecimalString(input_string);
        printf("%s
", is_decimal ? "True" : "False");
    }

    return 0;
}
