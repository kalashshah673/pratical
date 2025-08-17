#include <stdio.h>
#include <unistd.h> // for sleep()

void main() {
    int min, sec, choice;

menu: // label to restart timer
    printf("Enter number of minutes from where you want to start the timer: ");
    scanf("%d", &min);
    printf("Enter number of seconds from where you want to start the timer: ");
    scanf("%d", &sec);

    if (min >= 0 && sec >= 0 && sec < 60) { // validate
        for (int m = min; m >= 0; m--) {
            for (int s = (m == min ? sec : 59); s >= 0; s--) {
                printf("Countdown %d:%d\n", m, s);
                sleep(1); // 1 second delay
            }
        }
        printf("Countdown Completed!\n");
    } else {
        printf("Invalid input. Seconds should be between 0 and 59.\n");
    }

    printf("If you want to start the timer again, enter 1, else any number: ");
    scanf("%d", &choice);

    if (choice == 1) {
        goto menu; // restart
    } else {
        printf("Timer stopped.\n");
    }
}
