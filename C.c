#include <gtk/gtk.h>
#include <stdio.h>

// Función para manejar el evento del botón de imprimir
void on_print_button_clicked(GtkWidget *widget, gpointer data) {
    printf("Hola Mundo\n");
}

// Función para manejar el evento del botón de cerrar
void on_close_button_clicked(GtkWidget *widget, gpointer data) {
    gtk_main_quit();
}

int main(int argc, char *argv[]) {
    // Inicializa GTK
    gtk_init(&argc, &argv);

    // Crea una nueva ventana
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Hola Mundo");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Crea un contenedor vertical box
    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    // Crea un botón de imprimir
    GtkWidget *print_button = gtk_button_new_with_label("Imprime Hola Mundo");
    g_signal_connect(G_OBJECT(print_button), "clicked", G_CALLBACK(on_print_button_clicked), NULL);
    gtk_box_pack_start(GTK_BOX(vbox), print_button, TRUE, TRUE, 0);

    // Crea un botón de cerrar
    GtkWidget *close_button = gtk_button_new_with_label("Close");
    g_signal_connect(G_OBJECT(close_button), "clicked", G_CALLBACK(on_close_button_clicked), NULL);
    gtk_box_pack_start(GTK_BOX(vbox), close_button, TRUE, TRUE, 0);

    // Muestra todos los widgets
    gtk_widget_show_all(window);

    // Entra en el bucle principal de GTK
    gtk_main();

    return 0;
}
