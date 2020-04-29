## Analysis of Algorithms for Solving the Travelling Salesman Problem (TSP)

In this project, the task undertaken was to compare the algorithmic efficiency of two commonly used algorithms for solving this permutation-based NP-hard problem, namely: the Genetic Algorithm and the Nearest Neighbor Algorithm. The efficiency of these algorithms was compared with respect to:
1. the time taken for successful run of the algorithm, and
2. the accuracy of the optimal solution obtained.

Both of the algorithms were implemented successfully in C++. The results obtained were:



Nearest Neightbour Algorithm:

![NN algorithm](https://github.com/ApurvaSaumya/Analysis-of-Algorithms-for-Solving-the-Travelling-Salesman-Problem/blob/master/nearest-neighbor-output.png?raw=true)


Genetic Algorithm:
![GA algorithm](https://github.com/ApurvaSaumya/Analysis-of-Algorithms-for-Solving-the-Travelling-Salesman-Problem/blob/master/genetic-algorithm-output.png?raw=true)



Conclusion:

1. The Nearest Neighbor Algorithm took relatively less amount of time to calculate the minimum cost of visiting the same number of cities (vertices) by the Travelling Salesman as compared to the Genetic Algorithm. This can be an important fact in algorithm designing, as the difference between the running times of the two algorithms will increase with increase in the size of the input (number of vertices i.e. cities); and the Genetic Algorithm may thus become inefficient for larger inputs.

2. However, the Genetic Algorithm provided a more optimal solution for the given problem as compared to the Nearest Neighbor Algorithm, as the minimum cost obtained by the Genetic Algorithm was smaller than the minimum cost obtained by the Nearest Neighbor Algorithm. Thus, if the accuracy of results is considered, the Genetic Algorithm is clearly more efficient than the Nearest Neighbor Algorithm.


The choice of the most suitable algorithmic solution for a given problem, thus, depends on which particular criterion is chosen as the deciding factor: the speed of the algorithm, or the accuracy of the results obtained by the algorithm.