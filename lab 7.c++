// Q1. Write a program to input a string and find its length using strlen().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter string: ";
    cin.getline(str, 100);

    cout << "Length = " << strlen(str);
    return 0;
}
```

// Q2. Write a program to count the number of vowels in a string.
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char str[100];
    int count = 0;

    cout << "Enter string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch=='a' || ch=='e' || ch=='i' ||
            ch=='o' || ch=='u')
            count++;
    }

    cout << "Vowels = " << count;
    return 0;
}
```

// Q3. Write a program to copy one string to another using strcpy().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100], b[100];

    cout << "Enter string: ";
    cin.getline(a, 100);

    strcpy(b, a);
    cout << "Copied string = " << b;
    return 0;
}
```

// Q4. Write a program to check whether two strings are equal.
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100], b[100];

    cout << "Enter first string: ";
    cin.getline(a, 100);
    cout << "Enter second string: ";
    cin.getline(b, 100);

    if (strcmp(a, b) == 0)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";

    return 0;
}
```

// Q5. Write a program to concatenate two strings using strcat().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[200], b[100];

    cout << "Enter first string: ";
    cin.getline(a, 200);
    cout << "Enter second string: ";
    cin.getline(b, 100);

    strcat(a, b);
    cout << "Joined string = " << a;
    return 0;
}
```

// Q6. Write a program to join first name and last name using strcat().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first[100], last[50];

    cout << "Enter first name: ";
    cin.getline(first, 100);
    cout << "Enter last name: ";
    cin.getline(last, 50);

    strcat(first, " ");
    strcat(first, last);

    cout << "Full name = " << first;
    return 0;
}
```

// Q7. Write a program to compare two strings using strcmp().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100], b[100];

    cout << "Enter first string: ";
    cin.getline(a, 100);
    cout << "Enter second string: ";
    cin.getline(b, 100);

    int result = strcmp(a, b);

    if (result == 0)
        cout << "Strings are equal";
    else if (result < 0)
        cout << "First string is smaller";
    else
        cout << "First string is greater";

    return 0;
}
```

// Q8. Write a program to check if two strings are equal (case-insensitive).
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char a[100], b[100];

    cout << "Enter first string: ";
    cin.getline(a, 100);
    cout << "Enter second string: ";
    cin.getline(b, 100);

    for (int i = 0; a[i]; i++)
        a[i] = tolower(a[i]);

    for (int i = 0; b[i]; i++)
        b[i] = tolower(b[i]);

    if (strcmp(a, b) == 0)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";

    return 0;
}
```

// Q9. Write a program to arrange an array of strings in alphabetical order using strcmp().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[5][50], temp[50];

    for (int i = 0; i < 5; i++) {
        cout << "Enter word: ";
        cin >> s[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(s[i], s[j]) > 0) {
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    cout << "Alphabetical order:\n";
    for (int i = 0; i < 5; i++)
        cout << s[i] << endl;

    return 0;
}
```

// Q10. Write a program to reverse a string.
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], temp;

    cout << "Enter string: ";
    cin.getline(str, 100);

    int n = strlen(str);

    for (int i = 0; i < n / 2; i++) {
        temp = str[i];
        str[i] = str[n-1-i];
        str[n-1-i] = temp;
    }

    cout << "Reverse = " << str;
    return 0;
}
```

// Q11. Write a program to check if a string is palindrome.
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], rev[100];

    cout << "Enter word: ";
    cin >> str;

    strcpy(rev, str);
    int n = strlen(rev);

    for (int i = 0; i < n / 2; i++) {
        char temp = rev[i];
        rev[i] = rev[n-1-i];
        rev[n-1-i] = temp;
    }

    if (strcmp(str, rev) == 0)
        cout << "Palindrome";
    else
        cout << "Not palindrome";

    return 0;
}
```

// Q12. Write a program to find the first occurrence of a character using strchr().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], ch;

    cout << "Enter string: ";
    cin.getline(str, 100);
    cout << "Enter character: ";
    cin >> ch;

    char *p = strchr(str, ch);

    if (p != NULL)
        cout << "Position = " << p-str+1;
    else
        cout << "Character not found";

    return 0;
}
```

// Q13. Write a program to find the last occurrence of a character using strrchr().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], ch;

    cout << "Enter string: ";
    cin.getline(str, 100);
    cout << "Enter character: ";
    cin >> ch;

    char *p = strrchr(str, ch);

    if (p != NULL)
        cout << "Last position = " << p-str+1;
    else
        cout << "Character not found";

    return 0;
}
```

// Q14. Write a program to find a substring using strstr().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], sub[50];

    cout << "Enter main string: ";
    cin.getline(str, 100);
    cout << "Enter substring: ";
    cin.getline(sub, 50);

    if (strstr(str, sub) != NULL)
        cout << "Substring found";
    else
        cout << "Substring not found";

    return 0;
}
```

// Q15. Write a program to check if one string is present in another using strstr().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100], b[50];

    cout << "Enter main string: ";
    cin.getline(a, 100);
    cout << "Enter search string: ";
    cin.getline(b, 50);

    if (strstr(a, b) != NULL)
        cout << "String is present";
    else
        cout << "String is not present";

    return 0;
}
```

// Q16. Write a program to count the number of words in a string.
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char str[200];
    int words = 0;
    bool inside = false;

    cout << "Enter sentence: ";
    cin.getline(str, 200);

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            if (!inside)
                words++;
            inside = true;
        } else {
            inside = false;
        }
    }

    cout << "Words = " << words;
    return 0;
}
```

// Q17. Write a program to remove all vowels from a string.
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char str[100];
    int j = 0;

    cout << "Enter string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if (ch!='a' && ch!='e' && ch!='i' &&
            ch!='o' && ch!='u') {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';
    cout << "String without vowels = " << str;
    return 0;
}
```

// Q18. Write a program to copy only the first 5 characters using strncpy().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100], b[6];

    cout << "Enter string: ";
    cin.getline(a, 100);

    strncpy(b, a, 5);
    b[5] = '\0';

    cout << "Copied string = " << b;
    return 0;
}
```

// Q19. Write a program to join multiple strings into one sentence using strcat().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char sentence[300] = "";
    char word[100];

    for (int i = 0; i < 3; i++) {
        cout << "Enter word: ";
        cin >> word;

        if (i > 0)
            strcat(sentence, " ");

        strcat(sentence, word);
    }

    cout << "Sentence = " << sentence;
    return 0;
}
```

// Q20. Write a program to check whether two strings are anagrams.
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char a[100], b[100];
    int count[26] = {0};

    cout << "Enter first word: ";
    cin >> a;
    cout << "Enter second word: ";
    cin >> b;

    if (strlen(a) != strlen(b)) {
        cout << "Not anagrams";
        return 0;
    }

    for (int i = 0; a[i]; i++) {
        count[tolower(a[i]) - 'a']++;
        count[tolower(b[i]) - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            cout << "Not anagrams";
            return 0;
        }
    }

    cout << "Anagrams";
    return 0;
}
```
