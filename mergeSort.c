
void merge(int* original, int lenO, int* left, int lenA, int *right, int lenB) {
    int i = 0,j = 0, k = 0;

    while (i < lenA && j < lenB) {
        if (left[i] <= right[j]) {
            original[k] = left[i];

            i++;
        }
        else {
            original[k] = right[j];
            j++;
        }

        k++;
    }
    while (i < lenA) {
        original[k] = left[i];
        i++;k++;
    }

    while (j < lenA) {
        original[k] = right[j];
        j++;k++;
    }



}





void mergeSort(int *originalArray, int len) {


    if (len < 2) {
        return;

    }
    int midIndx = len / 2;
    int leftHalf[midIndx];
    int righttHalf[len - midIndx];

    for (int i = 0; i < midIndx; ++i) {
        leftHalf[i] = originalArray[i];
    }

    for (int i = midIndx; i < len; ++i) {
        righttHalf[i-midIndx] = originalArray[i];
    }
    mergeSort(leftHalf, midIndx);
    mergeSort(righttHalf, len - midIndx);
    merge(originalArray,len,leftHalf, midIndx, righttHalf, len - midIndx);




}


