using System;
using System.Windows.Forms;

namespace HelloWorldApp
{
    public class HelloWorldForm : Form
    {
        private Button buttonClose;
        private Button buttonPrint;

        public HelloWorldForm()
        {
            // Configura la ventana
            this.Text = "Hola Mundo";
            this.Size = new System.Drawing.Size(300, 200);

            // Crea y configura el botón de cierre
            buttonClose = new Button();
            buttonClose.Text = "Close";
            buttonClose.Location = new System.Drawing.Point(10, 10);
            buttonClose.Click += new EventHandler(buttonClose_Click);
            this.Controls.Add(buttonClose);

            // Crea y configura el botón de impresión
            buttonPrint = new Button();
            buttonPrint.Text = "Imprime Hola Mundo";
            buttonPrint.Location = new System.Drawing.Point(10, 40);
            buttonPrint.Click += new EventHandler(buttonPrint_Click);
            this.Controls.Add(buttonPrint);
        }

        // Manejador de eventos para el botón de cierre
        private void buttonClose_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        // Manejador de eventos para el botón de impresión
        private void buttonPrint_Click(object sender, EventArgs e)
        {
            Console.WriteLine("Hola Mundo");
        }

        // Punto de entrada principal para la aplicación
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.Run(new HelloWorldForm());
        }
    }
}
