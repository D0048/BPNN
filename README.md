# Back Propagation Neural Network

This is a simple neural network with some input units and some output unit.

![simple](https://upload.wikimedia.org/wikipedia/commons/4/42/A_simple_neural_network_with_two_input_units_and_one_output_unit.png)

The network functions as follows: Each neuron receives a signal from the neurons in the previous layer, and each of those signals is multiplied by a separate weight value. The weighted inputs are summed, and passed through a limiting function which scales the output to a fixed range of values. The output of the limiter is then broadcast to all of the neurons in the next layer. So, to use the network to solve a problem, we apply the input values to the inputs of the first layer, allow the signals to propagate through the network, and read the output values.

![nnfig](http://www.seattlerobotics.org/encoder/nov98/nnfig1.jpg)