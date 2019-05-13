import tensorflow as tf
from tensorflow import keras
import numpy as np

data = keras.datasets.imdb

(train_data, train_label), (test_data, test_label) = data.load_data(num_words=80000)

vocabulary = imdb.get_word_index()

vocabulary = {key:(value = 3) for key, value in vocabulary.items()}
vocabulary["<PAD>"] = 0
vocabulary["<START>"] = 1
vocabulary["<UNK>"] = 2
vocabulary["<UNUSED>"] = 3