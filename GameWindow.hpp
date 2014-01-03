#ifndef GAMEWINDOW_HPP
#define GAMEWINDOW_HPP
#include <QMainWindow>
#include <QApplication>
namespace Mushroom
{
	struct BackGround
	{ double l,r,h,w; };

	struct CharacterTemplate
	{
		double Hp, Mp;
	};

	struct Character
	{
		const CharacterTemplate * Template;
		double Hp, Mp;
		void initalize( )
		{
			Hp = Template->Hp;
			Mp = Template->Mp;
		}
	};

	struct singleton : QWidget
	{
		Q_OBJECT
		friend class GameWindow;
		explicit singleton( QWidget * parent = 0 ) : QWidget( parent ) { show( ); }
		~singleton( ) { }
	};

	struct GameWindow
	{
		static singleton & get( )
		{
			static singleton ret;
			return ret;
		}
		void Destroy( ) { get( ).destroy( ); }
		void Hide( ) { get( ).hide( ); }
		void Show( ) { get( ).show( ); }
		void Resize( int w, int h ) { get( ).resize( w, h ); }
		void ShowMaximized( ) { get( ).showMaximized( ); }
		void ShowMinimized( ) { get( ).showMinimized( ); }
		void ShowNormal( ) { get( ).showNormal( ); }
		GameWindow( ) { }
	};

}

#endif // GAMEWINDOW_HPP
