# DynamicNew

动态申请内存

编写一个函数用于为一个二维数组申请空间，该函数的原型为：

`double ** RequestAMatrix(int row,int col);`

其中函数的两个参数规定了二维数组的行数和列数。有了此函数，当需要一个二维数组时，不再需要如下的语句(比如要定义一个200x100的二维数组)：

`double x[200][100];`

而可以用如下的方式定义二维数组：

`double **x= RequestAMatrix(200,100);`