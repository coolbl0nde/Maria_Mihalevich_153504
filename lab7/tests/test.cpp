#include "pch.h"

double f1(double nm) {
    bool minus = false;
    double number = 0;
    int pwr = -1;

    if (nm < 0) {
        nm *= -1;
        minus = true;
    }

    int intg = (int)nm;
    double flt = nm - (int)nm;

    while (intg > 0) {
        ++pwr;
        number += intg % 3 * pow(10, pwr);
        intg /= 3;
    }

    if (flt != 0) {
        pwr = 0;

        for (int i = 0; i < 10; ++i) {
            --pwr;
            number = number + pow(10, pwr) * (int)(flt * 3);
            flt = flt * 3 - (int)(flt * 3);
        }
    }

    if (minus) number *= -1;

    return number;
}

std::string f2(std::string s) {
    if (s[0] == '0') {
        return s;
    }
    else {

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == '1')
                s[i] = '0';
            else
                s[i] = '1';
        }

        std::string a = "1";

        for (int i = s.size() - 1, j = 1; i > 0; i--, j++) {
            if (a[j - 1] == '1' && s[i] == '1') {
                a += "1";
                s[i] = '0';
            }
            else if (a[j - 1] == '0' && s[i] == '0') {
                a += "0";
                s[i] = '0';
            }
            else {
                a += "0";
                s[i] = '1';
            }
        }
        return s;
    }
}

//task1
TEST(test1, task1) {
    EXPECT_EQ(110, f1(12));
    EXPECT_TRUE(true);
}
TEST(test2, task1) {
    EXPECT_EQ(-110, f1(-12));
    EXPECT_TRUE(true);
}

//task2
TEST(test1, task2) {
    EXPECT_EQ("10110010", f2("11001110"));
    EXPECT_TRUE(true);
}
TEST(test2, task2) {
    EXPECT_EQ("01001110", f2("01001110"));
    EXPECT_TRUE(true);
}

//task3
TEST(test1, task3) {
    EXPECT_EQ("10110010", f2("11001110"));
    EXPECT_TRUE(true);
}
TEST(test2, task3) {
    EXPECT_EQ("01001110", f2("01001110"));
    EXPECT_TRUE(true);
}