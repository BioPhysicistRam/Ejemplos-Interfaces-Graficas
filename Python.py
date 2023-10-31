import tkinter as tk  # Importa la biblioteca Tkinter como tk

def print_hello():  # Define una función para imprimir "Hola Mundo" en la consola
    print("Hola Mundo")

def close_window():  # Define una función para cerrar la ventana
    root.destroy()

# Crea una ventana principal
root = tk.Tk()  # Crea una nueva ventana
root.title("Hola Mundo")  # Establece el título de la ventana

# Crea una etiqueta que dice "Hola Mundo"
label = tk.Label(root, text="Hola Mundo")  # Crea una nueva etiqueta
label.pack()  # Añade la etiqueta a la ventana

# Crea un botón para imprimir "Hola Mundo"
print_button = tk.Button(root, text="Imprime Hola Mundo", command=print_hello)  # Crea un nuevo botón
print_button.pack()  # Añade el botón a la ventana

# Crea un botón para cerrar la ventana
close_button = tk.Button(root, text="Close", command=close_window)  # Crea un nuevo botón
close_button.pack()  # Añade el botón a la ventana

# Inicia el bucle principal de Tkinter
root.mainloop()  # Inicia el bucle principal de Tkinter
