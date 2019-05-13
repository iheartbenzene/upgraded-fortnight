import tensorflow as tf
from tensorflow import keras
import numpy as np

data = keras.datasets.imdb

(train_data, train_label), (test_data, test_label) = data.load_data(num_words=80000)

