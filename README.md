caes_crypto
===========

Caeser encryption program

Caesar's cipher encrypts (i.e., scrambles in a reversible way) messages by "rotating" each letter by k positions, wrapping around from Z to A as needed (cf. http://en.wikipedia.org/wiki/Caesar_cipher). In other words, if p is some plaintext (i.e., an unencrypted message), pi is the ith character in p, and k is a secret key (i.e., a non-negative integer), then each letter, ci, in the ciphertext, c, is computed as:

ci = (pi + k) % 26

I wrote a program a program that encrypts messages using Caesar's cipher. My program accepts a single command-line argument: a non-negative integer and calls it key. If the program is executed without any command-line arguments or with more than one command-line argument, the program tells the user "I need 1 postive integer to incrypt" and return a value of 1 (which signifies an error).

Otherwise, the program proceed to prompt the user for a string of plaintext and then outputs that text with each alphabetical character "rotated" by key positions; non-alphabetical characters should be outputted unchanged. If nearing the end of the alphabet and the key is longer than the end of the alphabet, the letter rotates around the alphabet to the beginning landing on the corresponding letter.

(Example) if key is 2, and the letter "A" is received, C is given. if key is 2 and an " ' " or "/" or " . " is given, all are returned unchanged. If the key is 3 and the current letter is Z, the corresponding letter would be C because it starts at the beginning and rotates to the third spot in the alphabet which is C.

After outputting the ciphertext, the program exits, with main returning 0.

This program was configured for the purpose of solving one of two problems apart of problem set 2 of cs50.
