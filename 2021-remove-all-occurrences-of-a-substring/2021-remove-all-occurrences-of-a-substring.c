char* removeOccurrences(char* s, char* part) {
    // strstr() finds the first occurence of a character
    //  memove(), moves a block of code from the source to the destination,
    // even when the memory overlaps
    // Arguments: memmove(destination, source, number_of_bytes)
    // It copies n bytes from source to destination, even if they overlap.
    int len_part = strlen(part);
    char* pos;
    while ((pos = strstr(s, part)) != NULL) {
        memmove(pos, pos + len_part, strlen(pos + len_part)+1);
    }

    return s;
}
