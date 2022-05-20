# 21程设Ⅱ-周14-课后1

## 题目描述

深度神经网络由若干不同类型的层组成。每一层可以视为一个函数，方便起见，在本题中我们设定所有层的输入和输出都是长度为 $n$ 的一维向量，即 $\mathbf x\in\mathbb R^n$。为了方便地搭建深度神经网络，你需要先在 layer.hpp 中设计一个表示层的抽象基类`Layer`，所有具体的层类型都继承自该基类，并且所有具体的层类型都要有一个 `forward` 方法，用以计算前向结果。在 linear.hpp 中已经实现了一个 `Linear` 层，你可以参考该层的实现来设计 `Layer`。`Linear` 层的数学定义如下：

$$
\mathrm{Linear}(\mathbf x) = W\mathbf x+\mathbf b
$$

其中 $W\in\mathbb R^{n\times n}, \mathbf b\in\mathbb R^n$ 为参数，应当在构造 `Linear` 层时输入。

然后，你需要再在 conv.hpp 中实现一个 `Conv` 层，该层的数学定义如下：

$$
\mathrm{Conv}_i(\mathbf x) = \sum_{j=0}^{2m}\mathbf k_j\mathbf x_{i-m+j}
$$

其中 $\mathbf k\in\mathbb R^{2m+1}$ 为参数，应当在构造 `Conv` 层时输入。

例如，当$m=1$时，$output$的其中一个维度，如$output[2]=k[0]*x[1]+k[1]*x[2]+k[2]*x[3]$。
注意若有超出范围的部分则不需要计算，例如$output[0]=k[1]*x[0]+k[2]*x[1]$，这里不存在$x[-1]$就不用算它。

