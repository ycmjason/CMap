void map(int (*f)(int), int *arr, int n){
  for(int i=0; i<n; i++){
    arr[i] = (*f)(arr[i]);
  }
}
