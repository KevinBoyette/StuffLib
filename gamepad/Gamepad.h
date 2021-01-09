#pragma once

#include <cstdint>

typedef unsigned char byte;
typedef uint32_t GamepadInput;
struct Gamepad {
    uintptr_t somePtr;
    GamepadInput buttons;
    byte unkBytes[12];
    float leftStickX;
    float leftStickY;
    float rightStickX;
    float rightStickY;
    float rightStickMagnitude;
    float leftStickMagnitude;
    float leftTriggerMagnitude;
    float rightTriggerMagnitude;
    float pressDuration[32];
};

static uint32_t Buttons[32] = {
    0x00000001,
    0x00000002,
    0x00000004,
    0x00000008,
    0x00000010,
    0x00000020,
    0x00000040,
    0x00000080,
    0x00000100,
    0x00000200,
    0x00000400,
    0x00000800,
    0x00001000,
    0x00002000,
    0x00004000,
    0x00008000,
    0x00010000,
    0x00020000,
    0x00040000,
    0x00080000,
    0x00100000,
    0x00200000,
    0x00400000,
    0x00800000,
    0x01000000,
    0x02000000,
    0x04000000,
    0x08000000,
    0x10000000,
    0x20000000,
    0x40000000,
    0x80000000
};

enum Button {
    Select,
    L3,
    R3,
    Start,
    DPadUp,
    DPadRight,
    DPadDown,
    DPadLeft,
    L1,
    R1,
    L2,
    R2,
    Triangle,
    Circle,
    Cross,
    Square,
    LUp,
    LRight,
    LDown,
    LLeft,
    RUp,
    RRight,
    RDown,
    RLeft,

    Test = 0
};