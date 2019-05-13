import tensorflow as tf
from tensorflow import keras
import numpy as np

data = keras.datasets.imdb

(train_data, train_label), (test_data, test_label) = data.load_data(num_words=80000)

vocabulary_index = data.get_word_index()

vocabulary_index = {k:(v + 3) for k, v in vocabulary_index.items()}
vocabulary_index["<PAD>"] = 0
vocabulary_index["<START>"] = 1
vocabulary_index["<UNK>"] = 2
vocabulary_index["<UNUSED>"] = 3

reverse_vocabulary_index = dict([(value, key) for (key, value) in vocabulary_index.items()])

def decode_review(text):
    return " ".join([reverse_vocabulary_index.get(i, "?") for i in text])

# print(decode_review(test_data[0]))