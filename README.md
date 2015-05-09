# ArtificialIntelligenceNotes
These are just some notes on a book I'm reading. It's called Neural Networks and Deep Learning by Michael Nielsen, you can find the book [here](neuralnetworksanddeeplearning.com).


If you look inside of [artificial.c](https://github.com/DavidAwad/ArtificialIntelligenceNotes/blob/master/artificial.c). That's where my C implementation of most of the topics here will be.


So we start out with the basic concept of a **perceptron**.

A perceptron is the building block of modern artificial intelligence and learning algorithms.

It takes any number of inputs and produces an output, or a *decision*. Pretty straightforward concept.

Here's an example of what a perceptron might look like,

```C
struct perceptron {
    int inputOne;
    int inputTwo;
    int output;
}
```

So our perceptrons take these inputs and make decisions based off of them. Now imagine a grid in which multiple perceptrons take inputs, which are the outputs of *other perceptrons*. This enables us to make some more subtle decisions! :D 

###Sigmoid Neurons
So we already know how the perceptron works, but *can we do better*?
Here's what we do, we have an improved version of the perceptron that doesn't take in binary 0's and 1's, but takes in any values inbetween, and outputs any values inbetween. 

