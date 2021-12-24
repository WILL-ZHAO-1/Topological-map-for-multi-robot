#pragma once
#pragma once
#include <iostream>
#include <fstream>
#include "opencv2/opencv.hpp"
#include <deque>
#include <string>
#include "globa.h"
#include "data_struct.h"

using namespace std;
using namespace cv;

const int dis = sim_dis;

class node_simplify
{
public:
	node_simplify(deque<NODE> &n);
	//��ÿ�нڵ�ϡ�軯
	void Simplify ();
	//��ÿ��ϡ���Ľڵ�������ն���(������ÿ�нڵ��ϡ�軯)
	void deque_full();

	//��ȡ��һ�νڵ����
	//void read();

	//�ǵ��ȡ
	void ang_point_read();
	//�ڵ�ƥ��
	void choose();

	~node_simplify();


	//�ж�ͷ�ڵ�
	NODE m_top;
	//�����ж�
	int m_dis;
	//ԭʼ�ڵ����
	deque<NODE> ori_node_deq;
	//�򻯺�Ľڵ����
	deque<NODE> fin_node_deq;
	//��ʱ����
	deque<NODE> temp_deq;

	//��ǵ��ж��й�
	//�����ж�
	int m_ang_dis;
	//�ǵ��б�
	deque<NODE> ang_point;
	//�����ڵ��б�
	deque<NODE> type_node;
};