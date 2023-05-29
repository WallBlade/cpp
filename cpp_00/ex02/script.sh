#!/bin/bash

# Extract the second column from the first file
awk '{NR $2}' file1.log > file1_col2.log

# Extract the second column from the second file
awk '{NR $2}' file2.log > file2_col2.log

# Perform the diff between the extracted columns
diff file1_col2.log file2_col2.log > diff.txt

# Clean up temporary files
rm file1_col2.log file2_col2.log
