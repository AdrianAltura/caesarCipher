The Caesar Cipher is an old encrpytion method used by Julius Caesar to conceal confidential message by shifting each letter
by some number of places. This is not secure and not used by modern standards. but back in caesars days, this might be the 
most secure encryption method.

For example, he might write the letter 'D' as 'E', 'E' as 'F', 'F' as 'G' and 'Z' as 'A' wrapping around the alphabet.
so writing someone, say for example, a "hello" message, caesar would write this as "mjqqt" and the receiver would have to 
decrypt this message by shifting the letters in the opposite direction by same number of places.

In the example above, the plaintext "hello" with a key of 5 will get you the ciphertext "mjqqt" because each letter of the
plaintext will be shifted to the right by 5,

Alphabet: ABCDEFGHIJKLMNOPQRSTUVWXYZ
plaintext: hello
key: 5
ciphertext: mjqqt

plaintext      ciphertext
h          ->  m
e          ->  j
l          ->  q
l          ->  q
o          ->  t

get each letter of the plaintext, then, count by the number of shift starting from the letter of the plaintext to the right
so 'h' would become 'm', 'e' would become 'j' and so forth.

To decrypted, the receiver must know the shift amount (key) then count at the opposite direction so letter
'm' would become 'h' and so forth.

Upper case plaintext letters would remain upper case, same with lower case plaintext letters. Non-alphabetical characters 
would not be encrypted and will remain in its position in the plaintext.
