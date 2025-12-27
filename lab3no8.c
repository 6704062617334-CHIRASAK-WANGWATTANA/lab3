#include <stdio.h>

int main() {
    int hour, minute, second;
    int nextMin;

    printf("Hour: ");
    scanf("%d", &hour);
    printf("Minute: ");
    scanf("%d", &minute);
    printf("Second: ");
    scanf("%d", &second);

    printf("Next minutes: ");
    scanf("%d", &nextMin);

    int totalMin = hour * 60 + minute + nextMin;
    int newHour = (totalMin / 60) % 24;
    int newMinute = totalMin % 60;
    int newSecond = second;
    printf("Hour: %d\nMinute: %d\nSecond: %d\n", newHour, newMinute, newSecond);

    return 0;
}
