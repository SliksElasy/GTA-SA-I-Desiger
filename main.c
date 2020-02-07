#include <stdio.h>
#include <gtk/gtk.h> 
#include <string.h>
#include <sqlite3.h>
#include "include/textures.h"

/* Window property */
#define MAIN_WINDOW_SIZE 300

// Global windows
GtkWidget *main_window;

int main(int argc, char *argv[])
{
	// Object rotate variables
	double rx = 0.00, ry = 0.00, rz = 0.00; 
	gtk_init(&argc, &argv);
	main_window_action(0);
	gtk_main();  
	return 0;
}

int main_window_action(int action_id) 
{
	main_window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	// Window setups
	gtk_window_set_resizable(GTK_WINDOW(main_window), FALSE); 
	gtk_window_set_title(GTK_WINDOW(main_window), "IEST 0.1 alpha");
	gtk_widget_set_size_request(GTK_WIDGET(main_window), 400, 300);
	g_signal_connect(G_OBJECT(main_window), "destroy", G_CALLBACK(gtk_main_quit), NULL);
	switch(action_id){
		case 0:
		gtk_widget_show_all(main_window); 
		break;
		case 1: // 
		gtk_main_quit();
		gtk_widget_hide(main_window);
		break;
	}
	return 0;
}