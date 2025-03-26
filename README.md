# DATA-COMPRESSION-TOOL

 **COMPANY** : CODTECH SOLUTIONS

 **NAME** : VASAMSETTI GRACE SHYNI

 **INTERN ID**  : CT08WBU

 **DOMAIN** : C PROGRAMMING

 **DURATION** : 4 WEEKS 

 **MENTOR** : NEELA SANTHOSH KUMAR

**DESCRIPTION**

**What is Run Length Encoding?**

Run Length Encoding is a lossless data compression algorithm that encodes consecutive occurrences of the same character or number into a single instance of that character, followed by the count of its repetition. For example, the string `"AAAABBBCCDAA"` is encoded into `"A4B3C2D1A2"`. This method is simple yet effective for compressing data with repetitive patterns.

RLE is widely used in scenarios like:
1. **Image Compression**: Works well with black-and-white or simple-color images.
2. **Text Compression**: Reduces size for repetitive content in documents.
3. **Binary Data**: Compresses patterns of zeros and ones in binary files.

**How RLE Works**

1. **Initialization**: Start from the first character of the input data.
2. **Counting Repeats**: Count consecutive occurrences of the same character.
3. **Encoding**: Replace the repeated sequence with the character followed by the count.
4. **Traversal**: Move to the next unique character and repeat the process until the entire input is processed.

To implement RLE in C, the program will perform the following steps:
1. **Take Input**: Read the input string to be compressed.
2. **Compress Data**: Use RLE to generate the compressed version of the string.
3. **Output Result**: Display the original and compressed strings.

 **Explanation of the Code**
1. **Input Handling**: The program reads a string from the user using `scanf()`. This serves as the input data for compression.
2. **Character Counting**: Inside the loop, the program compares each character with the next one (`input[i] == input[i + 1]`). If they match, the count is incremented, and the loop continues until a different character is found.
3. **Encoding**: After counting, the character and its frequency are printed immediately in a compressed format (`%c%d`).
4. **Edge Case**: If the input string contains no repeated characters, the program outputs each character with a count of 1.

 **Advantages of RLE**

1. **Simplicity**: The algorithm is easy to implement and understand.
2. **Lossless Compression**: No data is lost during compression; the original data can be perfectly reconstructed.
3. **Efficiency**: Works well for repetitive data, significantly reducing its size.

 **Limitations**

1. **Non-repetitive Data**: If the input has no repetitive patterns (e.g., `"ABCDE"`), RLE can increase the data size instead of compressing it (`"A1B1C1D1E1"`).
2. **Fixed Character Count**: It does not support variable-length encoding schemes for higher compression ratios.
 **Applications of Run Length Encoding**

**CONCLUSION**
Run Length Encoding is a foundational compression algorithm that demonstrates the power of pattern recognition in reducing data size.

**OUTPUT**

![Image](https://github.com/user-attachments/assets/806b445c-5f6c-433d-8db2-728ab9f7acdb)

