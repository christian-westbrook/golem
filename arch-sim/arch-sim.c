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
// - Confirm that the nothing register is restricted to representing
//   a one-bit register
// - Confirm that a no op makes no changes
// - Separate test code from model code

#include <assert.h>

short int nothing_register;

// Public Interface

void load_nothing_register(int value) {
    nothing_register = value;
}

void run(int x) {
    ;
}

// Tests
void test_loading_starting_state_into_nothing_register() {
    load_nothing_register(0);
    assert(nothing_register == 0);
    load_nothing_register(1);
    assert(nothing_register == 1);
}

void test_running_an_instruction() {
    run(0);
}

int main() {
    test_loading_starting_state_into_nothing_register();
    test_running_an_instruction();
    return 0;
}
