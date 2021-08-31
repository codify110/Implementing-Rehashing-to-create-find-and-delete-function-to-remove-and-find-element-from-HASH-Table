# Implementing-Rehashing-to-create-find-and-delete-function-to-remove-and-find-element-from-HASH-Table
## Rehashing:
As the name suggests, rehashing means hashing again. Basically, when the load factor increases to more than its pre-defined value (default value of load factor is 0.75), the complexity increases. So to overcome this, the size of the array is increased (doubled) and all the values are hashed again and stored in the new double sized array to maintain a low load factor and low complexity.

## Why rehashing?
Rehashing is done because whenever key value pairs are inserted into the map, the load factor increases, which implies that the time complexity also increases as explained above. This might not give the required time complexity of O(1). Hence, rehash must be done, increasing the size of the bucketArray so as to reduce the load factor and the time complexity.

## Output: 
![image](https://user-images.githubusercontent.com/69696459/131520378-90409fdc-03b0-4417-bcd3-bea99bda4ad6.png)
