# ArtificialIntelligenceNotes
These are just some notes on a book I'm reading. It's called Neural Networks and Deep Learning by Michael Nielsen, you can find the book [here](neuralnetworksanddeeplearning.com).


If you look inside of artificial.c, that's where my C implementations of most of the topics I'm going to cover here are.


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
