from collections import Counter #We use collection module for function counter


def count_word_frequency(text):
    # Split the text into words
    words = text.split()

    #We Use Counter to count the frequency of each word
    word_freq = Counter(words)

    return word_freq

#Input from the user
input_string = input("Enter a string: ")
freq= count_word_frequency(input_string)
print("Word Frequency:", freq)
