struct Stack {
  private:
    int* stack;
    int size;
    int capacity;
  public:
    Stack() : size(0), capacity(10) {
        stack = new int[10];
    }
    void push(int x) {
        if (size == capacity) {
            int* temp = new int[2 * capacity];
            for(int i = 0; i < capacity; i++) {
                temp[i] = stack[i];
            }
            delete[] stack;
            stack = temp;
            capacity *= 2;

            stack[size] = x;
        }

        else {
            stack[size] = x;
            size++;
        }

    }

    void pop() {
        --size;
    }

    int top() {
        return stack[size - 1];
    }

    int get_capacity() {
        return capacity;
    }

    int get_size() {
        return size;
    }
};
