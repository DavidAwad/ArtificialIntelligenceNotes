typedef struct perceptron{
  int inputOne; // input
  int inputTwo; // input
  int output;   // decision
}perceptron;


typedef struct node{
  int weight;  // weight of the decision
  int boolean; // true or false
  node *next;  // pointer to the next input node
}node;


typedef struct neuron{
  int output;    // int output
  int bias ;     //bias of this particular neuron
	node *input;   // linked list of input struct nodes
}neuron;




int main(int argc, char **argv){
  // will soon contain some code that will do things.
  neuron *temp = malloc(sizeof(neuron));


  return 0 ; // crash and burn... with success.
}
