def compress(word):
    comp = ''
    n = len(word)
    i = 0

    while i < n:
        char = word[i]
        count = 0
        
        while i < n and word[i] == char:
            count += 1
            i += 1
        
        while count > 0:
            # If count is more than 9, append '9' and reduce count
            if count >= 9:
                comp += '9' + char
                count -= 9
            else:
                comp += str(count) + char
                count = 0

    return comp

# Example usage
s = input("Enter the string to compress: ")
print(compress(s))


int count(struct node* node, int count) {
    if (node != NULL) {
        // Increment the count for this node
        count += 1;

        // Recursively count left and right subtrees
        count = count(node->left, count);
        count = count(node->right, count);
    }

    return count;
}
