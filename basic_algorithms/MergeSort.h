void Merge(int* B, int b, int* C, int c, int* A, int a) {
     int i = 0;
     int j = 0;
     int p = 0;

     while (i < b && j < c) {
        if (B[i] < C[j]) {
            A[p++] = B[i++];
        }

        else {
            A[p++] = C[j++];
        }
     }

     while (i < b) {
        A[p++] = B[i++];
     }

     while (j < c) {
        A[p++] = B[j++];
     }
}

void MergeSort(int* A, int n) {
    int j = 0;
    int* B = new int[n/2];
    for (int i = 0; i < n/2; i++) {
        B[j] = A[i];
        j++;
    }

    j = 0;
    int* C = new int[n - n/2];
    for (int i = n/2; i < n; i++) {
        C[j] = A[i];
        j++;
    }

    MergeSort(B, n/2);
    MergeSort(C, n/2);
    Merge(B, n/2, C, n - n/2, A, n);
}
