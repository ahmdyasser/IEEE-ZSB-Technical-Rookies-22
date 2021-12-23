def count_substring(string, sub_string):
    it = len(string) - len(sub_string) + 1
    counter = 0

    for i in range (0, it):
        if string[i:len(sub_string)+ i] == sub_string:
            counter += 1     
        
    return counter
