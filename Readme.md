## 1 Intoduction

- We can directly access stack and main memory but not the heap memory so we use pointers for accessing to heap memory
- Pointers for accessing resources, passing parameters
- Every variable decleared it will be inside stack memory
- For allocating memory on heap we use **malloc** function
- There are References in cpp lang not c lang
- In monolitic programming all codes are in one block
- Modular or Procedural programming means that seperate main function to small functions and use them
- If we create a class for int type and if we need this class functions to use over another type we can use Templates in Cpp lang.
- For any type of data is called as generic class and that is defined as a template

## 2 Data Structers

- There are 2 types of data structers: Physical and Logical
- Physical Data Structers

  - Use for Storing data
  - Array: It can be created on stack or heap memory and its size is fixed
  - Linked List: It always created on Heap memory. Its size can be increase or decrease

- Logical Data Structers

  - Disclipline about memory management
  - Stack, Queques, Trees , Graph, Hash table

  | Linear        | Non-Linear | Other      |
  | ------------- | ---------- | ---------- |
  | Stack(LIFO)   | Trees      | Hash Table |
  | Queques(FIFO) | Graph      | -          |

### Time and Space Complexity

- If we have an array and its size is n so it takes n time and its size is depends on its element number n

#### Finding Time functions of Code

Examples

> 1

```
void swap(int  x,int y){
    int t;
    t=x;  // takes 1
    x=y;  // takes 1
    y=t;  // takes 1
}

f(n) = 3*(n^0)
order of n = 0 so it is O(n^0) = O(1)
```

> 2

```
int sum(int A[] ,int n){
    int s,i;

    s=0;  // takes 1

    for(i=0;i<n;i++){ // n+1 explanation is below about for loop condition
        s=s+A[i]; takes n
    }
    return s; // takes 1
}

i=0 => takes 1
i<n => takes n+1 because if any error occur it will be called again so it is not n it is n+1
n++ => takes n because we have n element

In text books for loop need only n+1 so generally it is n+1 but here we take 2*(n+1)

f(n) = 1 + 2*(n+1) + n + 1 = 3n+4
order of n = 1 so it is O(n^1) = O(n)
```

> 3

```
void add(int n){
    int i,j,res;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            res = i+j;
        }
    }
}

first for loop condition takes n+1 (In textbooks it usually shown n+1)

second for loop condition initially takes n time because first for loop has n cycle

and res = i+j takes n time because first for loop has n cycle

so there is one more loop it is second loop

second for loop condition takes n+1 (In textbooks it usually shown n+1)

and res = i+j takes n time because second for loop has n cycle

finally:
first  for loop condition = n+1
second for loop condition = n*(n+1)
res variable = n*(n)

f(n) = n+1 + n*(n+1) + n*(n) = 2n^2 + 2n + 1

order of n = 2 so it is O(n^2) = O(n^2)

```

## 3 Recursion

- Recursion functions uses stack memory
- If function call itself this is recursive function
- Recursive functions are memory consuming functions

  | Types of Recursion |     |
  | ------------------ | --- |
  | Tail Recursion     |     |
  | Head Recursion     |     |
  | Tree Recursion     |     |
  | Indirect Recursion |     |
  | Nested Recursion   |     |

> Tail Recursion:

- If recursive function calls itself at the last position statement in the function so this is tail Recursion.After that call nothing performed.
- All operations inside the function will be performed at calling time only. Function will not be performed any operation at returning time

  > Example

  ```
  void tail(int n)
  {
      if (n > 0)
      {
          printf("%d ", n);
          tail(n - 1);
      }
  }
  ```

  - This function will performe same thing with above tail

  ```
  void fun(int n)
  {
      while (n > 0)
      {
          printf("%d ", n);
          n--;
      }
  }
  ```

  - Difference between tail and fun

  | Name | Space | Time |
  | ---- | ----- | ---- |
  | tail | O(n)  | O(n) |
  | fun  | O(1)  | O(n) |

> Head Recursion:

- If recursive function calls itself at the first position statement in the function so this is head Recursion.
- There is no statement before the function call
- All operations inside the function will be performed at returning time only. Function will not be performed any operation at calling time

  > Example

  ```
  void head(int n)
  {
      if (n > 0)
      {
          head(n - 1);
          printf("%d ", n);
      }
  }
  ```

  - This function performed same thing with above head

  ```
  void fun(int n)
  {
      int i=1;
      while (i<=n)
      {
          printf("%d ", n);
          i++;
      }
  }
  ```

  - Difference between head and fun1

  | Name | Space | Time |
  | ---- | ----- | ---- |
  | head | O(n)  | O(n) |
  | fun  | O(1)  | O(n) |

> Tree Recursion:

- If function calls itself more than 1 that is Tree Recursion
- Time(n)= 2^n = O(2^n)
- Space = height of the tree = n+1 = O(n)

  > Example

  ```
  void tree(int n)
  {
      if (n > 0)
      {
          printf("%d ", n);
          tree(n - 1);
          tree(n - 1);
      }
  }
  ```

> Indirect Recursion:

- If there are 2 or more function and this are calls each other this become a cyle that is Indirect Recursion

  > Example

  ```
  void functionA(int n)
  {
      if (n > 0)
      {
          printf("%d ", n);
          functionB(n - 1);
      }
  }

  void functionB(int n)
  {
      if (n > 1)
      {
          printf("%d ", n);
          functionA(n / 2);
      }
  }
  ```

> Nested Recursive:

- A recursive function will pass parameter as a recursive call

  > Example

  ```
  int nested(int n)
  {
      if (n > 100)
          return n - 10;

      return nested(nested(n + 11));
  }
  ```
