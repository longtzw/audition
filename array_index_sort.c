// 这是一道有趣的面试题
// 题目：随机生成10个100以内的整数，把数据从小到大排序，而且算法复杂度只能是1
// 算法原理：首先建立一个数组B，其元素个数为数组A的最大元素值加1，然后用A的元素作为B的数组下标，然后给存在的B元素赋值，
// 这样就可以用循环把下标输出出来

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RANDOM(x) (rand() % x)

int main(void)
{
	int len_a, len_b, i;
	int array_a[10];
	int array_b[101];

	srand(time(NULL));
	len_a = sizeof(array_a) / sizeof(array_a[0]);
	len_b = sizeof(array_b) / sizeof(array_b[0]);

	for (i = 0; i < 10; i++){
		array_a[i] = RANDOM(100);
		printf("%d\n", array_b[i]);
	}

	for (i = 0; i < len_a; i++){
		array_b[array_a[i]] = 101;	//101可以换成其他值
	}

	for (i = 0; i < len_b; i++){	//输出排序后的数组
		if (101 == array_b[i]){
			printf("%d\n", i);
		}
	}

	return 0;
}
