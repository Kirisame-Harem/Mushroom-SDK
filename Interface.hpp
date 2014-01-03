#ifndef INTERFACE_HPP
#define INTERFACE_HPP
#include <boost/python.hpp>
#include<GameWindow.hpp>
BOOST_PYTHON_MODULE(Mushroom)
{
	boost::python::class_<Mushroom::GameWindow>( "GameWindow" )
			.def( "Destroy", & Mushroom::GameWindow::Destroy )
			.def( "Hide", & Mushroom::GameWindow::Hide )
			.def( "Show", & Mushroom::GameWindow::Show )
			.def( "Resize", & Mushroom::GameWindow::Resize )
			.def( "ShowMaximized", & Mushroom::GameWindow::ShowMaximized )
			.def( "ShowMinimized", & Mushroom::GameWindow::ShowMinimized )
			.def( "ShowNormal", & Mushroom::GameWindow::ShowNormal );
}
#endif // INTERFACE_HPP
