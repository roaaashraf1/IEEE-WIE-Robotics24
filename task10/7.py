def is_palindrome(text): #defain function to test if the word palindrome
 length = len(text) #count the length of the alpha.
 for i in range(0, length // 2):
     if text[i] != text[length - i - 1]:
         return False
 return True
text = input('Enter a word: ')
print("Is the word palindrome?",is_palindrome(text))
