#include "stdafx.h"
#include "stdlib.h"
#include <iostream>

//���������ļ��Ǳ��δ�����Ҫ�Ŀ��ļ�
#include "rapidxml/rapidxml.hpp"       
#include "rapidxml/rapidxml_utils.hpp"
#include "rapidxml/rapidxml_print.hpp"

int CreateXml();
int ReadAndChangeXml();
int _tmain(int argc, _TCHAR* argv[])
{
	//��������
	CreateXml();
	//��������
	ReadAndChangeXml();
	system("pause");
	return 0;
}
//����һ������Ϊconfig2.xml�ļ�
int CreateXml()
{
	rapidxml::xml_document<> doc;
	rapidxml::xml_node<>* rot = doc.allocate_node(rapidxml::node_pi, doc.allocate_string("xml version='1.0' encoding='utf-8'"));
	doc.append_node(rot);
	rapidxml::xml_node<>* node = doc.allocate_node(rapidxml::node_element, "config", "information");
	doc.append_node(node);
	rapidxml::xml_node<>* color = doc.allocate_node(rapidxml::node_element, "color", NULL);
	node->append_node(color);
	color->append_node(doc.allocate_node(rapidxml::node_element, "red", "0.1"));
	color->append_node(doc.allocate_node(rapidxml::node_element, "green", "0.1"));
	color->append_node(doc.allocate_node(rapidxml::node_element, "blue", "0.1"));
	color->append_node(doc.allocate_node(rapidxml::node_element, "alpha", "1.0"));
	rapidxml::xml_node<>* size = doc.allocate_node(rapidxml::node_element, "size", NULL);
	size->append_node(doc.allocate_node(rapidxml::node_element, "x", "640"));
	size->append_node(doc.allocate_node(rapidxml::node_element, "y", "480"));
	node->append_node(size);
	rapidxml::xml_node<>* mode = doc.allocate_node(rapidxml::node_element, "mode", "screen mode");
	mode->append_attribute(doc.allocate_attribute("fullscreen", "false"));
	node->append_node(mode);
	std::string text;
	rapidxml::print(std::back_inserter(text), doc, 0);
	std::cout << text << std::endl;
	std::ofstream out("../config/config1.xml");
	out << doc;

	return 0;
}


//��ȡ���޸�config3.xml
int ReadAndChangeXml()
{
	rapidxml::file<> fdoc("../config/config2.xml");
	std::cout << fdoc.data() << std::endl;
	rapidxml::xml_document<> doc;
	doc.parse<0>(fdoc.data());
	std::cout << doc.name() << std::endl;
	//! ��ȡ���ڵ�
	rapidxml::xml_node<>* root = doc.first_node();
	std::cout << root->name() << std::endl;
	//! ��ȡ���ڵ��һ���ڵ�
	rapidxml::xml_node<>* node1 = root->first_node();
	std::cout << node1->name() << std::endl;
	rapidxml::xml_node<>* node11 = node1->first_node();
	std::cout << node11->name() << std::endl;
	std::cout << node11->value() << std::endl;
	//! �޸�֮���ٴα���
	rapidxml::xml_node<>* size = root->first_node("size");
	size->append_node(doc.allocate_node(rapidxml::node_element, "w", "1"));
	size->append_node(doc.allocate_node(rapidxml::node_element, "h", "1"));
	std::string text;
	rapidxml::print(std::back_inserter(text), doc, 0);
	std::cout << text << std::endl;
	std::ofstream out("../config/config2.xml");
	out << doc;

	return 0;
}