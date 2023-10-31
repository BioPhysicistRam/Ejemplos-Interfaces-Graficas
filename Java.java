import javax.swing.*;  // Importa todo el paquete javax.swing para la interfaz gráfica
import java.awt.event.*;  // Importa el paquete java.awt.event para manejar eventos

public class HelloWorldGUI extends JFrame {  // Define una clase que hereda de JFrame

    public HelloWorldGUI() {  // Constructor de la clase
        // Configura la ventana
        setTitle("Hola Mundo");  // Establece el título de la ventana
        setSize(300, 200);  // Establece el tamaño de la ventana
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);  // Establece la operación de cierre por defecto

        // Crea un botón para imprimir "Hola Mundo"
        JButton printButton = new JButton("Imprime Hola Mundo");  // Crea un nuevo botón
        printButton.addActionListener(new ActionListener() {  // Añade un ActionListener al botón
            public void actionPerformed(ActionEvent e) {  // Define qué hacer cuando se hace clic en el botón
                System.out.println("Hola Mundo");  // Imprime "Hola Mundo" en la consola
            }
        });

        // Crea un botón para cerrar la ventana
        JButton closeButton = new JButton("Close");  // Crea un nuevo botón
        closeButton.addActionListener(new ActionListener() {  // Añade un ActionListener al botón
            public void actionPerformed(ActionEvent e) {  // Define qué hacer cuando se hace clic en el botón
                System.exit(0);  // Cierra la aplicación
            }
        });

        // Crea un panel para contener los botones
        JPanel panel = new JPanel();  // Crea un nuevo JPanel
        panel.add(printButton);  // Añade el botón de imprimir al panel
        panel.add(closeButton);  // Añade el botón de cerrar al panel

        // Añade el panel a la ventana
        add(panel);  // Añade el panel a la ventana

        // Hace la ventana visible
        setVisible(true);  // Establece la ventana como visible
    }

    public static void main(String[] args) {  // Método main, punto de entrada de la aplicación
        new HelloWorldGUI();  // Crea una nueva instancia de HelloWorldGUI, lo que muestra la ventana
    }
}
