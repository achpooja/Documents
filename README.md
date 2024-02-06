## This repo contains the all practical program of C++ that i have done in my 2nd semester


# Pneumonia Detection Application

## Description
This application is designed to detect pneumonia in chest X-ray images using a pre-trained deep learning model. It provides a user interface for uploading an image and predicting whether the patient is affected by pneumonia or not.

## Getting Started
To run the application, make sure you have Python installed on your system along with the necessary dependencies listed below. Run the main file `main.py` to launch the application.

### Prerequisites
- Python 3.x
- PyQt5
- TensorFlow
- Keras
- Matplotlib
- NumPy
- Win32com (for Windows platform)

Install the dependencies using the following command:

pip install pyqt5 tensorflow keras matplotlib numpy pypiwin32


## Usage
1. Launch the application by running the `main.py` file.
2. Click on the "Upload Image" button to select a chest X-ray image.
3. Once the image is uploaded, click on the "Predict" button to predict whether the patient is affected by pneumonia or not.
4. The application will display the prediction result and also read it aloud if the system supports text-to-speech functionality.

## Model Training
- The deep learning model used for prediction is based on the VGG16 architecture.
- The model has been trained on a dataset of chest X-ray images to classify them into normal and pneumonia classes.
- Training code and dataset are not provided in this repository.

## Credits
- This project utilizes the VGG16 pre-trained model available in Keras.
- The dataset used for training the model is not provided.

## License
This project is licensed under the [MIT License](LICENSE).
