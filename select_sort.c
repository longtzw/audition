//选择排序，工作原理如下：
//首先在未排序序列中找到最小元素，存放在排序序列的起始位置，继续未排序元素
//中寻找最小元素，然后放在已排序序列末尾，以此类推，直到所有的元素均排序完
//毕

//具体c语言实现如下：

void SlctSort(int * data, int count)
{
	int i, j, min, tmp;

	for (i = 0; i < count; i++){	//排序
		min = i;	//i为已排序序列末尾的位置
		for(j = i + 1; i < count; j++){	//寻找最小元素
			if(data[j] < data[min]){
				min = j;
			}
		}
		
		tmp = data[min]; //暂存最小值
		data[min] = data[i]; 
		data[i] = tmp; //将最小值放到已排序序列的末尾
	}
}

