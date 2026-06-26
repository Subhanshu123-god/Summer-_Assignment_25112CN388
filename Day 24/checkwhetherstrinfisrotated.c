/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main() {
    char s1[] = "waterbottle";
    char s2[] = "erbottlewat";

    int len1 = 0;
    int len2 = 0;

    // 1. Find length of s1
    for (int i = 0; s1[i] != '\0'; i++) {
        len1++;
    }

    // 2. Find length of s2
    for (int i = 0; s2[i] != '\0'; i++) {
        len2++;
    }

    int result = 0; // 0 acts as false

    // 3. Quick length check
    if (len1 == len2 && len1 > 0) {
        
        // 4. Try every possible rotation starting index
        for (int start = 0; start < len1; start++) {
            int match = 1; // 1 acts as true

            // Check if s2 matches s1 rotated by 'start' positions
            for (int i = 0; i < len1; i++) {
                if (s1[(start + i) % len1] != s2[i]) {
                    match = 0; // mismatch found
                    break; 
                }
            }

            // If a full match is found, break outer loop
            if (match == 1) {
                result = 1;
                break;
            }
        }
    }

    // 5. Print final result
    if (result == 1) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}


