

# 1. String questions

## 1.1 Check palindrome without `reverse()`

```
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int left = 0;
    int right = (int)s.length() - 1;
    bool palindrome = true;

    while (left < right) {
        if (s[left] != s[right]) {
            palindrome = false;
            break;
        }
        left++;
        right--;
    }

    cout << (palindrome ? "Palindrome" : "Not Palindrome");
    return 0;
}
```

## 1.2 Reverse a string manually

```
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int left = 0;
    int right = (int)s.length() - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }

    cout << s;
    return 0;
}
```

## 1.3 Count vowels and consonants

```
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int vowels = 0, consonants = 0;

    for (char ch : s) {
        ch = tolower(static_cast<unsigned char>(ch));

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Vowels: " << vowels << '\n';
    cout << "Consonants: " << consonants << '\n';

    return 0;
}
```

Spaces, digits, and punctuation are ignored.

## 1.4 Remove duplicate characters and sort alphabetically

Example: `programming` → `agimnopr`

```
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Sort characters using nested loops.
    for (int i = 0; i < (int)s.length() - 1; i++) {
        for (int j = 0; j < (int)s.length() - 1 - i; j++) {
            if (s[j] > s[j + 1]) {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    // Keep one occurrence of each character.
    string result = "";

    for (int i = 0; i < (int)s.length(); i++) {
        if (i == 0 || s[i] != s[i - 1]) {
            result += s[i];
        }
    }

    cout << result;
    return 0;
}
```

This version uses manual Bubble Sort rather than `sort()`.

# 2. Array questions

## 2.1 Find the third-largest distinct element

Example: `[10, 5, 20, 8, 15]` → `10`

This solution uses one traversal and handles duplicate values and even `INT_MIN` correctly.

```
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;

    bool hasFirst = false;
    bool hasSecond = false;
    bool hasThird = false;

    for (int i = 0; i < n; i++) {
        int x = arr[i];

        if ((hasFirst && x == first) ||
            (hasSecond && x == second) ||
            (hasThird && x == third)) {
            continue;
        }

        if (!hasFirst || x > first) {
            third = second;
            hasThird = hasSecond;

            second = first;
            hasSecond = hasFirst;

            first = x;
            hasFirst = true;
        }
        else if (!hasSecond || x > second) {
            third = second;
            hasThird = hasSecond;

            second = x;
            hasSecond = true;
        }
        else if (!hasThird || x > third) {
            third = x;
            hasThird = true;
        }
    }

    if (hasThird) {
        cout << "Third largest: " << third;
    } else {
        cout << "Third-largest distinct element does not exist";
    }

    return 0;
}
```

- Time complexity: \\(O(n)\\)
- Auxiliary space: \\(O(1)\\)
- Interview point: Explain how the largest and second-largest values shift when a new maximum is found.

# 3. Pattern printing

For these problems, the outer loop controls the rows, and the inner loop controls what gets printed in each row.

## 3.1 Square star pattern

For `n = 4`:

```
****
****
****
****
```

```
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << '\n';
    }

    return 0;
}
```

## 3.2 Right-angled triangle

For `n = 4`:

```
*
**
***
****
```

```
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << '\n';
    }

    return 0;
}
```

## 3.3 Inverted triangle

For `n = 4`:

```
****
***
**
*
```

```
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << '\n';
    }

    return 0;
}
```

## 3.4 Number triangle

For `n = 4`:

```
1
12
123
1234
```

```
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << '\n';
    }

    return 0;
}
```

## 3.5 Pyramid pattern

For `n = 4`:

```
   *
  ***
 *****
*******
```

```
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << '\n';
    }

    return 0;
}
```

What to practise: Understand why the number of spaces decreases and the number of stars increases. That same logic helps you create many variations without memorizing every pattern.

# 4. Recursion questions

Recursion means a function calls itself. Every recursive solution needs a base case to stop the calls.

## 4.1 Factorial using recursion

Example: `5` → `120`

```
#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        cout << "Factorial is undefined for negative integers";
    } else {
        cout << factorial(n);
    }

    return 0;
}
```

Time complexity: \\(O(n)\\). Recursion stack: \\(O(n)\\).

This version is intended for nonnegative inputs whose factorial fits in `long long`.

## 4.2 Print numbers from 1 to N

Example: `5` → `1 2 3 4 5`

```
#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n == 0) {
        return;
    }

    printNumbers(n - 1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;

    if (n >= 1) {
        printNumbers(n);
    }

    return 0;
}
```

Key point: The output happens after the recursive call, so the numbers print in ascending order.

To print from `N` to `1`, move `cout << n << " ";` before `printNumbers(n - 1);`.

## 4.3 Sum of digits using recursion

Example: `1234` → `10`

```
#include <iostream>
using namespace std;

int sumDigits(int n) {
    if (n == 0) {
        return 0;
    }

    return n % 10 + sumDigits(n / 10);
}

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        n = -n; // Assumes n is not INT_MIN.
    }

    cout << sumDigits(n);
    return 0;
}
```

Time complexity: \\(O(d)\\), where \\(d\\) is the number of digits. Recursion stack: \\(O(d)\\).

For a production-grade implementation, take care with `INT_MIN`, whose positive magnitude cannot fit in an `int`.

## 4.4 Reverse a string using recursion

Example: `hello` → `olleh`

```
#include <iostream>
#include <string>
using namespace std;

void reverseString(string &s, int left, int right) {
    if (left >= right) {
        return;
    }

    char temp = s[left];
    s[left] = s[right];
    s[right] = temp;

    reverseString(s, left + 1, right - 1);
}

int main() {
    string s;
    getline(cin, s);

    reverseString(s, 0, (int)s.length() - 1);

    cout << s;
    return 0;
}
```

Time complexity: \\(O(n)\\). Recursion stack: \\(O(n)\\).

# 5. Linked-list questions

A singly linked list contains nodes. Each node stores a value and a pointer to the next node.

We'll use this structure for all the following programs:

```
struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};
```

## 5.1 Create and traverse a linked list

This program creates three nodes and prints their values.

```
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    Node* current = head;

    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    // Free allocated memory.
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
```

Output: `10 20 30`

Important: `current = current->next` moves to the next node. The loop stops when the pointer becomes `nullptr`.

## 5.2 Insert a node at the beginning

```
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

void insertBeginning(Node*& head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = new Node(20);
    head->next = new Node(30);

    insertBeginning(head, 10);
    printList(head);

    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
```

Output: `10 20 30`

Why `Node*& head`? It allows the function to update the original head pointer, not just a local copy.

## 5.3 Insert a node at the end

```
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

void insertEnd(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* current = head;

    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = newNode;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);

    insertEnd(head, 30);
    printList(head);

    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
```

Output: `10 20 30`

Time complexity: \\(O(n)\\) without a tail pointer, because we traverse to the last node.

## 5.4 Delete a node by value

This deletes the first occurrence of the requested value.

```
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

void deleteValue(Node*& head, int value) {
    if (head == nullptr) {
        return;
    }

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;

    while (current->next != nullptr &&
           current->next->data != value) {
        current = current->next;
    }

    if (current->next != nullptr) {
        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
    }
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    deleteValue(head, 20);
    printList(head);

    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
```

Output: `10 30`

Interview concept: When deleting a middle node, update the previous node's `next` pointer to skip the deleted node, then free the removed node's memory.

## 5.5 Reverse a linked list

This is the most important linked-list problem in this collection.

Input: `10 → 20 → 30 → NULL`

Output: `30 → 20 → 10 → NULL`

```
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;

    while (current != nullptr) {
        Node* nextNode = current->next;

        current->next = prev;

        prev = current;
        current = nextNode;
    }

    return prev;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    head = reverseList(head);
    printList(head);

    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
```

Output: `30 20 10`

- Time complexity: \\(O(n)\\)
- Auxiliary space: \\(O(1)\\)

Remember these three pointers:

- `prev` — the already-reversed part.
- `current` — the node being processed.
- `nextNode` — saves the next node so you don't lose the rest of the list.

