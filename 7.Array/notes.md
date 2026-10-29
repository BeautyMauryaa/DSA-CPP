# Array:
- it is linear data structure that stores elements of same data type in contiguous memory location
- each element can be accessed by its index


### linear data structure means:
- every element comes one after another
- ex: 10 20 30 40 50

### contiguous memory location means:
- one single block unbroken memory location
- for ex : array of integers int arr[5]
- assume the first element starts at address 1000
- memory looks like this: (because integer is 4 byte size)
1000 -> arr[0]
1004 -> arr[1]
till 1016 -> arr[4]



### why array stored contiguously?
- for fast access
- for fast insertion and deletion
- no need to shift elements when inserting or deleting or check every element to find the position or element
- instead it calculates:
- address of  arr[i] = Base Address + (Index * Size of element)
- ex: Base = 1000 Index =4 
- Size =4 bytes
- address = 1000+(4*4)=1016 (directly jumps to 1016) 
- this is the reason array takes 0(1) time


### index: 
- every element has a unique position called index
- start from 0
- end with n-1




### Characteristics of array:
- fixed size
- stores elements of same data type
- direct access using index
- fast insertion and deletion
- linear data structure


