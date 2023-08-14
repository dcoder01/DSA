int majorityElement(vector<int> arr) {
  // Write your code hereint
  int count = 0, el;
  for (int i = 0; i < arr.size(); i++) {
    if (count == 0) {
      count = 1;
      el = arr[i];

    } else if (el == arr[i])
      count++;
    else
      count--;
  }
  int tc = 0;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == el)
      tc++;
  }
  if (tc > arr.size() / 2) {
    return el;
  }
  return -1;
}
