#include "button_test.h"

button_test::button_test()
{
    button = new QPushButton("button1");
}

void button_test::setvisiable()
{
    button->setVisible(false);
}
