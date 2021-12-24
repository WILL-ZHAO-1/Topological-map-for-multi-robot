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

//ģ�����
const int ks = ker_size;
const int kr = (ker_size - 1) / 2;
const int leap_dis = Leap_dis;
//ͼ����
class node_generate
{
public:
	//��ʼ����ȡͼ��
	node_generate(string path);

	//ͼ����
	void image_processing();

	//ͼƬ��Ե����
	void Edge_trimming(Mat &m);
	void trimming(int r, int val, Mat &m);

	//��������ڵ�
	int traverse_node(int a, int b);

	//�ڵ�����
	deque<NODE> generate_node();

	//�޲��ڵ�
	//void fill_node();
	//int fill_match(int a,int b);

	//�ǵ���
	void ang_point();
	//�ǵ�ƥ��
	int match_ang_point(int a, int b);

	//��ʾ�ڵ�״̬
	void result();

	//��һ�����ɽڵ�д���ı�
	//void write(deque<NODE> &n);


	//ԭʼͼ�񱣴�
	Mat ori_map;
	//������ͼ��
	Mat node_map;
	Mat node_map2;
	//ͼ��ߴ�
	int m_row, m_cols;//(�У��У�
	//�޲��ߺ�ĳ�ʼ��
	int first;
	//�ڵ�����ģ��
	int kernel[ks][ks] = { 0 };
	//�ǵ���ģ��
	int k_point[3][3] = { 0 };
	//�ǵ������б�
	deque<NODE> point_list;
};