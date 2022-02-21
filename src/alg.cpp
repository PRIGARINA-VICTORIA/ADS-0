// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    // поместить сюда текст реализации алгоритма (на С++)
    if (b != 0) {
        return gcd(b, a % b);
    } else {
        return a;
    }
}
