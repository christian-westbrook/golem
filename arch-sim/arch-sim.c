// Simulator for a test-driven computer architecture.
//
// Register | Bitwidth | Purpose
// ---------|----------|------------
// Nothing  | 1        | Not used for anything.
//
// Instruction | Bit Pattern | Description
// ------------|-------------|-----------------------
// No Op       | 0           | Performs no work.

// TODO
// - Load a starting value into the Nothing register
// - Confirm that a no op makes no changes

#include <assert.h>

short int nothing_register;

void load_nothing_register(int x) {
    nothing_register = x;
}

// Tests
void test_loading_starting_state_into_nothing_register() {
    load_nothing_register(0);
    assert(nothing_register == 0);
    load_nothing_register(1);
    assert(nothing_register == 1);
}

int main() {
    test_loading_starting_state_into_nothing_register();
    return 0;
}
