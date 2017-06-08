// CountSort.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> original_array;
	vector<int> count_array(10);
	vector<int>::iterator iter;
	vector<int>::size_type i;
	cout << "Please enter than integers which you want to sort.The number must less than 10.(more than 9 to end the input)" << endl;
	int temp;
	//��������
	while (cin >> temp && temp<10){
		original_array.push_back(temp);
	}
	cout << "This is the input array:";
	for (iter = original_array.begin(); iter != original_array.end(); iter++){
		cout << (*iter) << ' ';
	}
	cout << endl;
	//ͳ��ÿ�������ж��ٸ�
	for (i = 0; i<original_array.size(); i++){
		count_array[original_array[i]]++;
	}
	//����ÿ��Ԫ��Ӧ�����ڵ�λ��
	cout << "This is the cout_array which is display where each number should stay:";
	for (i = 1; i<count_array.size(); i++){
		count_array[i] += count_array[i - 1];
		cout << count_array[i] << ' ';
	}
	cout << endl;
	//�����洢���������ĳ��ȸ���ʼ����һ����
	vector<int> result_array(original_array.size());
	for (i = 0; i <original_array.size(); i++){
		result_array[count_array[original_array[i]] - 1] = original_array[i];
		count_array[original_array[i]]--;
	}
	//������
	cout << "The sorted array:";
	for (iter = result_array.begin(); iter != result_array.end(); iter++){
		cout << (*iter) << ' ';
	}
	cout << endl;
	return 0;
}

