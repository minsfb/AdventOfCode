//
// Created by Matt Insley on 11/27/24.
//

#ifndef CUBECONUNDRUMTEST_H
#define CUBECONUNDRUMTEST_H

class CubeConundrumTest {
public:
    static const char* example1;
    static const char* example2;
    static const char* input;
};

const char* CubeConundrumTest::example1 = R"(Game 1: 3 blue, 4 red; 1 red, 2 green, 6 blue; 2 green
Game 2: 1 blue, 2 green; 3 green, 4 blue, 1 red; 1 green, 1 blue
Game 3: 8 green, 6 blue, 20 red; 5 blue, 4 red, 13 green; 5 green, 1 red
Game 4: 1 green, 3 red, 6 blue; 3 green, 6 red; 3 green, 15 blue, 14 red
Game 5: 6 red, 1 blue, 3 green; 2 blue, 1 red, 2 green)";

const char* CubeConundrumTest::example2 = R"()";

const char* CubeConundrumTest::input = R"(Game 1: 10 red, 7 green, 3 blue; 5 blue, 3 red, 10 green; 4 blue, 14 green, 7 red; 1 red, 11 green; 6 blue, 17 green, 15 red; 18 green, 7 red, 5 blue
Game 2: 13 green, 10 red; 11 green, 1 blue, 7 red; 5 red, 12 green, 1 blue; 12 green, 6 red; 8 green, 5 red; 12 green, 1 red
Game 3: 7 green, 1 blue; 1 blue, 3 green, 1 red; 1 green, 1 blue; 2 green; 1 blue, 7 green, 2 red; 2 green
Game 4: 7 green, 11 blue; 12 blue, 7 green; 1 green, 7 blue; 5 blue, 2 green; 5 red, 9 green, 14 blue
Game 5: 2 red, 6 blue, 6 green; 2 red, 6 green; 12 blue, 5 red, 3 green; 12 green, 5 red, 8 blue; 10 blue, 5 green; 2 red, 4 green
Game 6: 8 blue, 1 red, 17 green; 7 blue; 10 green, 6 blue; 5 blue, 1 red, 11 green
Game 7: 1 blue, 2 red, 2 green; 1 blue, 3 green; 3 green, 1 red, 3 blue; 2 blue, 3 green, 1 red
Game 8: 3 green, 10 red, 15 blue; 1 green, 9 red; 9 blue, 2 green, 12 red
Game 9: 4 green, 10 blue, 13 red; 16 red, 7 blue; 14 red, 1 green, 1 blue; 14 red, 4 blue, 1 green
Game 10: 6 blue, 9 red, 3 green; 9 green, 7 blue, 9 red; 2 red, 4 blue, 6 green; 12 green, 7 blue, 5 red
Game 11: 1 green, 6 blue, 6 red; 7 red, 1 blue; 1 green, 6 blue; 4 red, 1 green, 1 blue; 6 red, 9 green, 4 blue; 5 green, 7 red, 4 blue
Game 12: 18 green, 4 red, 12 blue; 7 green, 5 blue, 3 red; 7 green, 3 red; 8 green, 7 blue; 4 red, 7 green, 10 blue
Game 13: 1 red, 2 blue; 1 red, 6 green; 5 blue, 2 red, 12 green; 1 red, 11 green, 2 blue; 2 red, 8 green, 1 blue; 3 blue, 16 green, 1 red
Game 14: 3 blue, 2 green; 4 green, 1 red; 1 green, 1 red, 3 blue; 4 blue, 3 green; 5 blue, 1 green; 4 green, 2 blue, 1 red
Game 15: 12 blue, 3 red; 5 blue, 2 red, 1 green; 12 blue, 3 red, 2 green; 1 green, 5 red, 6 blue; 1 green, 5 blue, 3 red
Game 16: 8 red, 4 blue, 1 green; 15 blue, 5 red, 4 green; 3 green, 13 blue, 4 red; 4 red, 1 blue, 3 green; 1 green, 13 blue, 6 red
Game 17: 8 red, 7 green, 2 blue; 6 green, 1 blue, 12 red; 3 red; 4 green, 1 red; 7 red, 1 blue, 9 green
Game 18: 7 blue, 10 red, 3 green; 3 green, 1 blue; 7 red, 1 green, 7 blue; 7 blue, 4 red, 1 green; 2 green, 1 blue, 10 red; 3 blue, 11 red, 1 green
Game 19: 10 red, 10 blue; 13 red; 4 blue, 15 red, 3 green; 6 green, 11 red, 11 blue; 4 blue, 8 red
Game 20: 1 blue, 9 green, 2 red; 2 blue, 4 red, 4 green; 4 green, 2 red
Game 21: 13 green, 1 red; 3 red, 5 green, 11 blue; 1 blue, 2 red, 4 green; 7 blue, 3 red; 2 red, 1 blue, 3 green
Game 22: 2 red, 2 blue, 3 green; 10 red, 4 blue; 8 blue, 8 green, 11 red
Game 23: 1 red, 2 blue; 1 blue, 1 green; 1 green; 3 red, 1 blue, 1 green
Game 24: 12 green, 4 red, 2 blue; 8 green, 5 blue; 8 green, 2 blue, 2 red
Game 25: 3 red, 8 green; 1 red, 4 blue, 1 green; 6 green; 3 blue, 5 green, 3 red; 9 green, 3 blue, 5 red
Game 26: 1 green, 3 red, 2 blue; 7 red, 2 green, 11 blue; 7 blue, 4 red; 11 blue, 1 red, 1 green; 2 green, 10 blue, 1 red; 1 green, 7 red, 7 blue
Game 27: 5 green, 2 red, 4 blue; 5 red, 4 blue, 3 green; 5 green, 2 red, 7 blue; 7 red, 15 green, 5 blue
Game 28: 1 green, 7 blue, 14 red; 7 green, 6 blue, 3 red; 7 blue, 4 red, 10 green; 9 red, 11 green, 5 blue
Game 29: 4 red, 6 blue, 5 green; 12 red, 3 green, 1 blue; 6 blue, 11 red, 6 green; 2 green, 2 blue, 12 red
Game 30: 13 green, 11 red, 11 blue; 7 green, 9 blue, 7 red; 11 red, 1 blue, 11 green
Game 31: 14 green, 1 blue, 8 red; 1 green, 2 blue; 1 green, 1 red, 1 blue
Game 32: 7 blue, 2 green; 12 blue, 7 green; 4 red, 14 blue, 2 green; 14 green, 4 blue
Game 33: 5 blue, 12 red; 3 blue, 4 red, 1 green; 9 red, 2 blue; 11 red
Game 34: 1 blue; 3 blue; 1 blue, 1 red; 5 red, 2 blue; 4 red, 1 blue, 1 green
Game 35: 3 green, 2 blue, 1 red; 2 red, 8 green, 3 blue; 7 green, 2 red, 8 blue; 3 blue, 4 green
Game 36: 10 green, 9 blue, 2 red; 3 green, 7 blue, 7 red; 14 green, 13 blue; 8 green, 8 red, 2 blue
Game 37: 3 red, 1 blue, 14 green; 1 blue, 1 green; 5 red, 9 green; 1 red, 2 blue, 13 green; 11 red, 14 green, 2 blue
Game 38: 4 green, 3 red, 6 blue; 18 red, 15 blue, 1 green; 17 blue, 6 green, 19 red; 18 red, 15 blue; 1 green, 12 blue, 18 red
Game 39: 1 red; 10 blue, 6 red, 1 green; 1 green, 1 red, 9 blue; 17 red, 10 blue
Game 40: 5 red, 3 green, 9 blue; 8 red, 4 blue; 2 green, 3 blue, 4 red; 3 blue, 4 red, 6 green; 4 blue, 5 red, 2 green; 4 blue
Game 41: 6 green, 1 blue; 5 blue, 3 green, 6 red; 10 red, 1 blue; 6 green, 1 blue, 9 red
Game 42: 1 red, 5 green, 7 blue; 7 red, 4 blue, 4 green; 5 red, 2 green, 6 blue
Game 43: 1 green, 18 red, 8 blue; 7 red, 4 green, 5 blue; 1 blue, 18 red; 5 red, 8 blue
Game 44: 3 blue, 10 green; 5 green, 2 red, 1 blue; 6 blue, 14 green; 3 green, 5 blue, 5 red
Game 45: 12 red, 1 blue, 16 green; 1 red, 6 blue, 3 green; 5 red, 5 blue, 7 green; 8 red, 15 green; 3 green, 12 red, 7 blue
Game 46: 3 red, 1 green; 1 green, 17 blue, 10 red; 2 green, 17 blue; 3 green, 17 blue, 12 red; 2 green, 12 red
Game 47: 3 green, 9 red; 3 red, 1 blue, 6 green; 10 red, 9 green, 1 blue; 2 blue, 15 green; 7 red, 12 green, 3 blue
Game 48: 4 green, 13 red, 14 blue; 8 red, 8 green; 15 blue, 4 red, 11 green; 3 blue, 3 red, 4 green; 2 blue, 6 red, 4 green; 13 green, 12 blue, 11 red
Game 49: 15 blue, 2 green, 7 red; 1 green, 7 red, 7 blue; 13 blue; 3 blue, 2 red, 1 green
Game 50: 9 red; 5 green, 2 blue, 10 red; 5 red, 1 green
Game 51: 3 green, 1 blue, 3 red; 4 blue, 4 red; 4 green, 6 red, 5 blue; 4 red, 7 blue
Game 52: 10 green, 12 red, 2 blue; 2 green, 7 red; 18 green, 3 red, 3 blue; 6 red, 13 green, 2 blue
Game 53: 13 blue, 2 green; 2 green, 12 blue; 1 green, 11 blue, 1 red; 11 blue, 2 green, 8 red
Game 54: 5 red; 15 green, 17 red, 7 blue; 14 green, 5 red, 15 blue; 2 red, 10 blue, 16 green
Game 55: 1 blue, 1 red, 2 green; 5 green, 3 blue, 8 red; 6 red, 4 blue, 7 green; 2 blue, 10 green, 7 red
Game 56: 1 blue, 8 red, 7 green; 3 green, 7 blue, 5 red; 5 green, 7 blue; 3 blue, 12 red, 8 green; 3 blue; 2 blue, 3 green, 10 red
Game 57: 5 red, 13 green, 3 blue; 19 green, 7 red, 8 blue; 1 red, 12 green, 3 blue; 4 green, 10 blue, 4 red; 3 blue, 7 red, 20 green
Game 58: 8 blue, 5 red, 2 green; 4 red, 11 blue; 9 blue, 6 green, 8 red; 7 green, 11 blue
Game 59: 7 red, 7 green, 9 blue; 5 red, 4 green, 5 blue; 1 red, 2 blue, 6 green; 10 green, 12 blue, 3 red; 7 green, 18 blue, 4 red
Game 60: 12 blue, 7 red, 12 green; 18 green, 9 red; 13 green, 13 red, 12 blue; 14 red, 5 green, 13 blue; 17 green, 7 red, 13 blue
Game 61: 5 blue; 2 blue, 10 green, 2 red; 12 green, 2 red, 1 blue; 4 blue, 2 green; 2 red, 6 green; 6 green, 2 blue, 2 red
Game 62: 2 blue, 5 red, 4 green; 3 green, 6 blue, 7 red; 13 red, 5 blue, 1 green; 3 red, 3 blue, 1 green; 17 blue, 4 green, 3 red; 5 red, 13 blue, 3 green
Game 63: 1 red, 6 blue, 10 green; 1 red, 8 blue, 6 green; 7 red, 11 blue
Game 64: 11 blue, 13 red; 12 blue, 6 red; 1 green, 2 blue, 4 red
Game 65: 1 green, 9 red, 4 blue; 11 blue, 3 green; 2 blue, 1 green; 3 red, 2 green, 10 blue
Game 66: 8 red, 1 blue, 3 green; 1 green, 3 blue, 1 red; 2 blue, 9 green; 8 green, 3 blue, 6 red; 2 blue, 12 green, 7 red
Game 67: 5 green, 5 red, 10 blue; 12 blue, 13 green, 4 red; 6 red, 11 green, 3 blue; 8 blue, 4 red; 4 red, 14 green; 1 red, 1 blue, 14 green
Game 68: 7 green, 17 red; 14 green, 1 blue, 1 red; 11 green, 1 blue, 16 red
Game 69: 11 red, 2 green, 2 blue; 4 blue, 14 red; 2 red, 6 blue, 3 green; 6 red, 2 green; 5 red, 1 green, 4 blue; 7 red, 3 blue
Game 70: 18 blue, 4 red; 5 red, 14 blue; 17 blue, 9 red; 13 red, 17 blue, 1 green; 2 blue, 9 red
Game 71: 1 green, 6 red, 6 blue; 6 green, 4 blue, 5 red; 8 red, 3 blue, 7 green; 7 red, 2 blue, 1 green; 3 blue, 2 green, 3 red
Game 72: 11 green, 4 red, 2 blue; 2 blue, 6 green, 1 red; 3 red, 1 blue, 9 green; 4 blue, 12 green, 3 red; 2 red, 3 green, 1 blue
Game 73: 1 blue, 12 red; 14 green, 2 blue, 10 red; 6 blue, 8 red, 8 green; 7 green; 6 red, 10 green, 4 blue; 4 green, 9 red
Game 74: 5 green, 6 blue; 1 green, 12 blue; 2 blue, 2 green, 5 red; 5 green, 9 blue, 2 red
Game 75: 11 red, 7 blue, 12 green; 7 blue, 8 red, 9 green; 3 red, 17 green, 3 blue
Game 76: 1 green, 12 blue; 11 blue, 7 green, 10 red; 10 green, 12 blue, 1 red; 10 green, 12 red, 1 blue
Game 77: 2 blue, 17 green, 3 red; 10 red, 13 green; 12 green, 2 blue, 13 red; 12 green, 2 blue, 8 red; 14 green, 10 red, 1 blue
Game 78: 3 red, 8 green, 5 blue; 8 green, 3 blue; 2 green, 6 red; 4 red, 1 green, 4 blue; 4 red, 8 green, 6 blue; 1 red, 1 blue, 8 green
Game 79: 1 green, 2 blue, 2 red; 1 blue, 19 red, 1 green; 18 red; 1 green, 3 red, 5 blue; 15 red, 1 blue; 2 blue, 17 red, 1 green
Game 80: 13 red, 1 green; 15 red, 1 blue; 8 red, 1 green
Game 81: 1 blue, 1 red, 2 green; 1 red, 3 green, 2 blue; 1 blue, 4 green; 2 green, 2 blue
Game 82: 8 red, 4 green, 8 blue; 4 green, 6 red, 3 blue; 3 red, 3 blue; 2 blue, 1 green, 11 red; 2 green, 1 blue, 4 red
Game 83: 1 red, 15 green; 2 red, 6 blue, 12 green; 3 green, 10 blue, 14 red; 6 blue, 7 red, 1 green
Game 84: 2 blue, 12 red, 4 green; 1 red, 3 blue, 5 green; 6 blue, 5 green, 12 red; 2 red, 1 green; 2 red, 5 blue, 5 green
Game 85: 4 red; 3 red, 15 green, 2 blue; 15 green, 1 red, 2 blue; 4 green, 4 red, 2 blue
Game 86: 1 green, 3 red, 4 blue; 2 green, 7 red, 4 blue; 7 red, 4 green, 4 blue; 1 blue, 11 red, 4 green
Game 87: 5 green, 5 red, 15 blue; 4 blue, 12 red, 10 green; 3 green, 11 blue, 9 red; 3 red, 4 green, 16 blue; 3 red, 10 blue, 10 green; 15 blue, 9 green, 12 red
Game 88: 2 green, 10 blue; 4 blue, 8 green; 8 green, 1 blue; 13 blue, 1 red, 2 green; 2 green, 16 blue
Game 89: 5 blue, 7 red; 10 red, 11 blue, 6 green; 6 green, 3 red, 7 blue; 5 green, 3 red, 20 blue; 8 red, 6 green, 10 blue; 7 blue, 5 green, 10 red
Game 90: 4 red, 1 green, 4 blue; 9 red, 9 blue, 9 green; 4 green, 11 red; 9 red, 5 green, 3 blue; 9 red, 2 green, 2 blue
Game 91: 13 green, 13 blue; 3 red, 11 green, 5 blue; 10 blue, 3 green, 1 red; 3 blue, 10 green, 2 red; 5 blue, 2 green
Game 92: 8 blue, 1 green, 4 red; 3 blue, 6 red; 3 red, 1 green, 14 blue; 6 blue, 8 red; 15 blue, 9 red; 4 blue, 2 red
Game 93: 3 blue, 17 red, 2 green; 9 blue, 6 red; 6 blue, 2 green, 16 red; 1 green, 5 blue, 15 red; 3 blue, 2 green, 14 red
Game 94: 7 blue, 19 green, 1 red; 4 blue; 8 blue, 3 red, 4 green
Game 95: 2 green, 6 red, 13 blue; 5 red, 12 green, 12 blue; 18 blue, 8 red, 4 green; 7 red, 6 green, 17 blue; 4 green, 9 red, 6 blue; 10 red, 1 green, 4 blue
Game 96: 8 blue, 9 red; 9 red, 10 blue; 5 blue, 1 green, 2 red; 2 blue, 2 red
Game 97: 4 red, 1 blue, 2 green; 2 green, 11 red, 1 blue; 8 red, 1 green; 7 red, 3 green, 1 blue; 5 red, 1 green, 1 blue
Game 98: 6 green, 4 blue, 12 red; 3 blue, 13 red, 1 green; 2 blue, 12 green, 2 red; 13 green, 2 red, 1 blue; 10 red, 7 green, 1 blue
Game 99: 6 blue, 3 green, 5 red; 3 green, 6 red, 8 blue; 3 green, 11 blue, 14 red; 14 red, 5 green, 1 blue
Game 100: 16 red, 3 blue; 2 red, 5 green; 9 red; 1 blue, 3 green, 10 red; 1 red, 5 blue, 3 green; 12 blue, 9 red)";

#endif //CUBECONUNDRUMTEST_H
