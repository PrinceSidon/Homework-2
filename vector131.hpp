template<typename T>

//Creates a dynamic array
class vector131 {
  int length; //Length of the dynamic array
  T *dynamicArray; //Declares the dynamic array

  public:

    //Creates a dynamic array with a length of iLen
    vector131(int iLen) {
      length = iLen;
      dynamicArray = new T[length];
    }

    /*
    //Creates a dynamic array with predefined values
    vector131(int arr[]) {
      length = arr.size();
      dynamicArray = new int[length];
      for (int i = 0; i < arr.size(); i++) {
        
      }
    }
    */

    //Returns the length of the dynamic array
    int getLength() {
      return length;
    }

    //Returns the value of the dynamic array at a certain index
    int get(int index) {
      return dynamicArray[index];
    }

    //Sets the value of the dynamic array at a certain index
    void set(int index, int val) {
      dynamicArray[index] = val;
    }

    //Resizes the dynamic array to a length of newLen
    void resize(int newLen) {
      
      //Saves the values of the old array and deletes the old array
      int oldArray[length];
      for (int i = 0; i < length; i++) {
        oldArray[i] = dynamicArray[i];
      }
      delete[] dynamicArray;

      //Creates a new array with a length of newLen and fills it with the values of the old array. If the old array is bigger than the new one, the extra values are cut off
      dynamicArray = new int[newLen];
      if (newLen > length) {
        for (int i = 0; i < length; i++) {
          dynamicArray[i] = oldArray[i];
        }
      }
      else if (length > newLen) {
        for (int i = 0; i < newLen; i++) {
          dynamicArray[i] = oldArray[i];
        }
      }
      length = newLen;
    }

    //Increases the size of the dynamic array by 1 and adds a new value at the end
    void push_back(int val) {
      resize(length + 1);
      dynamicArray[-1] = val;
    }

    //Increases the size of the dynamic array by 1 and adds a new value at the front
    void push_front(int val) {
      
      //Saves the values of the old array and resizes
      int oldArray[length];
      for (int i = 0; i < length; i++) {
        oldArray[i] = dynamicArray[i];
      }
      resize(length + 1);

      //Pushes the old values forward and sets the value at index 0 to val
      for (int i = 0; i < length - 1; i++) {
        dynamicArray[i+1] = oldArray[i];
      } 
      dynamicArray[0] = val;
    }

    /*
    //Increases the size of the dynamic array by 1 and adds a new value at a certain index
    void insert() {
      
    }
    */

    /*
    //Decreases the size of the dynamic array by 1 and removes a value at a certain index
    void remove() {
      
    }
    */

};