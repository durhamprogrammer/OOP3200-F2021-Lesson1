#include "Welcome.h"
#include <iostream>

Welcome::Welcome()
{
	std::cout << "Hello, World" << std::endl;

	m_name = "Tom";
}

Welcome::~Welcome()
{
}

void Welcome::Greeting()
{
	std::cout << "Greetings, " << m_name << std::endl;
}

