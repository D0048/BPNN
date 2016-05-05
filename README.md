# Back Propagation Neural Network    --By mwsht
## Feature:
	-There is a momentum term in the weight 
	adjustment formula.
	-Range of sigmoid(x) is from -0.5 to 0.5 .
	-It have delta theta.

## Parameter description:
	-w[][][]:Connection weights between neurons
	-level:Number of neuron layer
	-num[]:Number of neurons in each neuron layer
	-eta:Learning efficiency
	-alpha:Weight of connection weights on last time

## Variable description:
	-net[][]:General output of neurons
	-o[][]:Output of neurons
	-y[]:Output of the neural network
	-theta[][]:Threshold of neurons
	-lw[][][]:Connection weights on last time
	-delta[][]:Process variable which is in order to calculate delta theta and delta w
	-x[]:Input of the neural network
	-d[]:Desired output of the neural network

## Function description:
	-BP(level,*num,inital_w,inital_eta,inital_alpha): Initialization
	-sigmoid(x):S type function
	-calculate_net(*x):Calculate the output of neurons and the output of the neural network
	-calculate_delta_and_theta(*d):Calculate delta and theta
	-show(*x):Print the output of the neural network on the screen
	-train(*x,*d):Train the neural network
