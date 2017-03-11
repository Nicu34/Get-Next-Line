# Get-Next-Line

# A function that returns a line which ends with a end line ('\n') from a file descriptor.
# The line will be returned as a parameter of function. Function get next line returns 1 if the line was
# read, 0 if the reading is over or -1 if there was an error. An loop call of this function allows to read all
# the file, line with line until the end of file. The function can read from one or more files in a loop without
# loosing the remainder lines.
