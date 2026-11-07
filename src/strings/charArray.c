#include "local.h"


unsigned long soduum_charArray_getLenght(char *arr) {
        unsigned long i = 0;
        for (; arr[i] != '\0'; i++) {}
        return i;
}

unsigned long soduum_charArray_getLenghtWithConfiguredEnd(char *arr, char end) {
	unsigned long i = 0;
	for (; arr[i] != end; i++) {} return i;
}


bool soduum_charArray_equals(char *f, char *s) {
        unsigned long i = 0;
        while (f[i] != '\0') {
                if (f[i] == s[i]) { i++; }
                else { return false; }
        }
        if (s[i] != '\0') { return false; }
        return true;
}


unsigned long soduum_charArray_find(char *sub, unsigned long lenOfSub, char *str, unsigned long lenOfStr) {
	
	if (lenOfStr < lenOfSub) { return ULONG_MAX; }
       	else if (lenOfStr == lenOfSub) {	
		answer = soduum_charArray_equals(sub, str); 
		
		if (answer) { return 0; }
		return ULONG_MAX;
	}
	
	unsigned long posAtStr = 0, posAtSub = 0, count = 0;
	
	// if lenOfStr > lenOfSub 
	while (sub[posOfSub] != '\0') {
		if (count == lenOfSub)
		if (sub[posOfSub] == str[posOfStr]) { count++; }
	
	} 

} // BAD


// i forgot is there is a \0 at end of sub and str













