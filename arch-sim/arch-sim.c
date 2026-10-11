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
// - Confirm that the only valid instruction is a 0
// - Confirm that a no op makes no changes
// - Separate test code from model code
// - Separate architecture model from the main module

#include <assert.h>

short int nothing_register;

// Public Interface

// Loads a starting value into the 'nothing' register.
// Returns 0 on success, 1 otherwise.
int load_nothing_register(int value) {
    if (value == 0 || value == 1) {
        nothing_register = value;
        return 0;
    }
    
    return 1;
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

void test_nothing_register_is_one_bit() {
    assert(load_nothing_register(-1) == 1);
    assert(load_nothing_register(0)  == 0);
    assert(load_nothing_register(1)  == 0);
    assert(load_nothing_register(2)  == 1);
    assert(load_nothing_register(3)  == 1);
}

void test_running_an_instruction() {
    run(0);
}

int main() {
    test_loading_starting_state_into_nothing_register();
    test_nothing_register_is_one_bit();
    test_running_an_instruction();
    return 0;
}
