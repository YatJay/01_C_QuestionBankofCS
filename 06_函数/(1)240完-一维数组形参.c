/*程序 P240.c 已编写部分代码（见文件内容） ，请根据程序中的要求完善程序（在指定的位置添加代码或将__________换成代码）。
	程序的功能是：分 3 次调用自定义函数实现从键盘为数组 arrayA、 arrayB、 arrayC 分别读入 6、 10、15 个数并计算每一组数的和，
	然后分别输出每一数组头尾两个元素的值及所有元素的和。*/
	
/*
数组名作为函数形参：
 实质是地址的传递，将数组的首地址传给形参，形参和实参共用同一存储空间，形参的变化就是实参的变化。
 用数组名作函数参数时，则要求形参和相对应的实参都必须是类型相同的数组，都必须有明确的数组说明。
 当形参和实参二者不一致时，即会发生错误。
 在用数组名作函数参数时，不是进行值的传送，即不是把实参数组的每一个元素的值都赋予形参数组的各个元素。
 因为实际上形参数组并不存在，编译系统不为形参数组分配内存。

数组名就是数组的首地址, 因此在数组名作函数参数时所进行的传送只是地址的传送，也就是说把实参数组的首地址赋予形参数组名； 
形参数组名取得该首地址之后，也就等于有了实在的数组。实际上是形参数组和实参数组为同一数组，共同拥有一段内存空间。
*/

#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
int sumArray(int array[],int n);  //______________________________

int main(void)
{
	int arrayA[6], arrayB[10], arrayC[15], sumA, sumB, sumC;
	//>>>每次传递实参进来，函数--对这段内存空间进行操作进而改变变量的值--比如这里的arrayA[6], arrayB[10], arrayC[15]
	//>>>切记定义函数时将数组大小待定，传递实参后确定；传实参时第一个必须传递数组名arrayA，本质上是指针，千万别传 arrayA[6]这样的，这个标记本质上是数组元素 
	sumA=sumArray(arrayA,6);  		//______________________________  /* userCode(<50字符): 调用函数读 6个数到arrayA中，并计算和 */
	sumB=sumArray(arrayB,10);		//______________________________  /* userCode(<50字符): 调用函数读10个数到arrayB中，并计算和 */
	sumC=sumArray(arrayC,15);		//______________________________  /* userCode(<50字符): 调用函数读15个数到arrayC中，并计算和 */

	printf("\narrayA[0]=%3d, arrayA[ 5]=%3d, sum(arrayA)=%d", arrayA[0], arrayA[5], sumA);
	printf("\narrayB[0]=%3d, arrayB[ 9]=%3d, sum(arrayB)=%d", arrayB[0], arrayB[9], sumB);
	printf("\narrayC[0]=%3d, arrayC[14]=%3d, sum(arrayC)=%d\n", arrayC[0], arrayC[14], sumC);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
//>>>形参数组array[]没有给出长度，而由n值动态地表示数组的长度。n的值由主调函数的实参进行传送。---待定数组，传递实参后确定 
int sumArray(int array[],int n){  
	int i,sum=0;

	printf("Please input %d numbers: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<n;i++){
		sum+=array[i];
	}
	
	return sum;	
}
