# Read the words from both files and store them in a set to remove duplicates
def merge_files(file1, file2, output_file):
    unique_words = set()

    # Read first file and add words to the set
    with open(file1, 'r') as f1:
        for line in f1:
            unique_words.add(line.strip())

    # Read second file and add words to the set
    with open(file2, 'r') as f2:
        for line in f2:
            unique_words.add(line.strip())

    # Write the unique words to the output file
    with open(output_file, 'w') as out:
        for word in sorted(unique_words):  # Sort if you want alphabetical order
            out.write(word + '\n')

# Example usage
merge_files('words_old.txt', 'merged_output.txt', 'new_merged_output.txt')
