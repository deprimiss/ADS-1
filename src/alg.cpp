// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
	// вставьте код функции
for (int k = 2; k < sqrt(value); k++)
        if (value % k == 0)
            return false;
    return true;
}

uint64_t nPrime(uint64_t n) {
	// вставьте код функции
	int k = 2;
	for (int i = 0;i < n;k++)
		if (checkPrime(k))
			i++;
	return --k;
}

uint64_t nextPrime(uint64_t value) {
	// вставьте код функции
for (int k = (value + 1);checkPrime(k) == 0;k++)
		return --k;
}

uint64_t sumPrime(uint64_t hbound) {
	int sum = 0;
	for (int i = 2;i < hbound;i++)
		if (checkPrime(i))
			sum += i;
	return sum;
}
