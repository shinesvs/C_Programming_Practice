#include <stdio.h>

// State and input definitions
#define WAIT_PRESS     0
#define WAIT_RELEASE   1

#define BUTTON_UP      0
#define BUTTON_DOWN    1

#define NO_ACTION      0
#define TOGGLE_LED     1

// Function prototype
int updateFSM(int *currentState, int buttonInput);

int main() {
    int state = WAIT_PRESS;
    int input;
    int output;

    // Simulated input sequence: button down -> button held -> button up
    int inputSequence[] = {BUTTON_UP, BUTTON_DOWN, BUTTON_DOWN, BUTTON_UP};
    int n = sizeof(inputSequence) / sizeof(inputSequence[0]);

    for (int i = 0; i < n; i++) {
        input = inputSequence[i];
        output = updateFSM(&state, input);

        if (output == TOGGLE_LED) {
            printf("Toggling LED at step %d\n", i);
        } else {
            printf("No action at step %d\n", i);
        }
    }

    return 0;
}

// FSM function using switch-case
int updateFSM(int *currentState, int buttonInput) {
    int output = NO_ACTION;

    switch (*currentState) {
        case WAIT_PRESS:
            if (buttonInput == BUTTON_DOWN) {
                output = TOGGLE_LED;
                *currentState = WAIT_RELEASE;
            }
            break;

        case WAIT_RELEASE:
            if (buttonInput == BUTTON_UP) {
                *currentState = WAIT_PRESS;
            }
            break;

        default:
            *currentState = WAIT_PRESS;  // Reset on invalid state
            break;
    }

    return output;
}
