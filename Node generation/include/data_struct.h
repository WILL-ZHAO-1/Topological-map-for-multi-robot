#pragma once
//�ڵ����ݽṹ��
struct NODE {
	//�ڵ����������
	int y, x;//(�У���)
};

//���˵�ͼ�еĽڵ�
struct graph_node
{
	//�ڵ�����
	int g_x, g_y;
	//�ڵ����
	int g_name;
	//�ڵ����Ȩ��
	bool g_visit;

};
//�Զ������ݵ��������
struct Cmp
{
	bool operator () (graph_node const &a, graph_node const &b)const
	{
		if (a.g_y != b.g_y)
			return a.g_y<b.g_y;
		else if (a.g_x != a.g_x)
			return a.g_x<b.g_x;
		else return a.g_name < b.g_name;
	}
};