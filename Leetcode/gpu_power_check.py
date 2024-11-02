import tensorflow as tf
import time

# Check if TensorFlow is using the GPU
if tf.test.gpu_device_name():
    print(f"GPU detected: {tf.test.gpu_device_name()}")
else:
    print("No GPU detected, using CPU instead.")

# Load the MNIST dataset
mnist = tf.keras.datasets.mnist
(x_train, y_train), (x_test, y_test) = mnist.load_data()

# Normalize the data
x_train, x_test = x_train / 255.0, x_test / 255.0

# Define a simple neural network model
model = tf.keras.models.Sequential([
    tf.keras.layers.Flatten(input_shape=(28, 28)),
    tf.keras.layers.Dense(512, activation='relu'),
    tf.keras.layers.Dropout(0.2),
    tf.keras.layers.Dense(10, activation='softmax')
])

# Compile the model
model.compile(optimizer='adam',
              loss='sparse_categorical_crossentropy',
              metrics=['accuracy'])

# Train the model and measure training time
start_time = time.time()
model.fit(x_train, y_train, epochs=10, verbose=2)
end_time = time.time()

print(f"Training completed in: {end_time - start_time:.2f} seconds")

# Evaluate the model
model.evaluate(x_test, y_test, verbose=2)
