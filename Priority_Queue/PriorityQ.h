// insert
// remove
// getmin

#include <vector>

class PriorityQueue {
	vector<int> pq;

	public :
	
	PriorityQueue() {

        }

	bool isEmpty() {
		return pq.size() == 0;
}

//return size of PQueue

int getSize() {
 	return pq.size();
}

int getMIn(){
	if(isEmpty()) {
	   return 0;
}

	return pq[0];
}

void insert(int element) {
  pq.push_back(element);

  int childIndex = pq.size() - 1;

  while(childIndex > 0){
  int parentIndex = (childIndex - 1) / 2;

  if(pq[childIndex] < pq[parentIndex]){
	  int temp = pq[childIndex];
	  pq[childIndex] = pq[parentIndex];
	  pq[parentIndex] = temp;
  }
  childIndex = parentIndex;
}
};
