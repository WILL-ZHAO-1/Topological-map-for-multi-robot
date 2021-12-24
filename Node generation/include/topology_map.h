#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <stack>
#include "globa.h"
#include "data_struct.h"

using namespace std;
const int MAX = 56; //�������
//�������ͼ���ݽṹ
class Graph {
public:
	Graph();
	//��ʼ���ڽӾ���
	void initial();
	//�����߹�ϵ
	void creat_arc();
	float calculate_weight(graph_node &g1, graph_node &g2);
	//ɾ����
	void delete_arc(int a, int b);
	//��ȡ�߼�
	void read();
	void print();
	//���·���㷨
	void short_path(int s, int f);
	//����ʽ�㷨
	void Heuristically_path(int s, int f);
	//����ǰ������ֵ
	float calculate_forwardcost(int s, int n);

	//�����
	//vector<graph_node> 
	//�ڽӾ���
	float m_matrix[MAX][MAX];
	//�����
	vector<graph_node> m_vertable;
	multimap<graph_node, graph_node, Cmp> arc_set;
};