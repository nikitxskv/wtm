# Tutorials

## Python tutorials

* Main CatBoost tutorial with base features demonstration:
    * __kaggle_titanic_catboost_demo.ipynb__
        * This tutorial shows how to train a model on Titanic kaggle dataset. Examples of cross validation, parameter tunning and overfitting detection are provided.
    * __catboost_base_functions.ipynb__
        * This tutorial shows different usages of CatBoost including training with custom error function, using different classes for training, using weights and others.

* CatBoost perfomance at different competition:
    * __kaggle_paribas.ipynb__
        * This tutorial shows how to get to a 9th place on paribas competition with only few lines of code and training a CatBoost model.

    * __mlbootcamp_v_tutorial.ipynb__
        * This is an actual 7th place solution by Mikhail Pershin. Solution is very simple and is based on CatBoost.

    * __sberbank\_catboost\_example\_robust\_.ipynb__
        * This tutorial is another example of using CatBoost on a kaggle machine learning competition.

* CatBoost and Tensorflow:
    * __quora_catboost_w2v.ipynb__
        * This tutorial shows how to use CatBoost together with Tensorflow if you have text as input data.

* CatBoost and CoreML:
    * __catboost_coreml_export_tutorial.ipynb__
        * This tutorial shows how to convert CatBoost model to CoreML format and use it on an iPhone.

## R tutorials

* Main CatBoost tutorial with base features demonstration:
    * __catboost\_r\_tutorial.\*__
         * This tutorial shows how to train a model on Titanic dataset. Examples of cross validation and parameter tunning.


## Catboost comand line tutorial
### Train and apply classification model

Train classification model with default params in silent mode.
Calc model predictions on custom data set, output will contain evaluated class1 probability:

```
catboost fit --learn-set train.tsv --test-set test.tsv --column-description train.cd  --loss-function Logloss
catboost calc -m model.bin --input-path custom\_data --cd train.cd -o custom\_data.eval -T 4 --prediction-type Probability
```

### Train regression model on csv file with header

Train classification model with 100 trees on comma separated pool with header:
```
catboost fit --learn-set train.csv --test-set test.csv --column-description train.cd  --loss-function RMSE --iterations 100 --delimiter=',' --has-header
```

### Train classification model in verbose mode with multiple error functions

It is possible to calc additional info while learning, such as current error on learn and current plus best error on test error. Remaining and passed time information is also displayed in verbose mode.
Custom loss functions parmeter allow to log additional error functions on learn and test for each iteration.
```
catboost fit --learn-set train --test-set test --column-description train.cd  --loss-function Logloss --custom-loss="AUC,Precision,Recall" -i 4 --verbose --print-trees
```
Example test\_error.tsv result:
```
iter    Logloss AUC     Precision       Recall
0       0.6638384193    0.8759125663    0.8537374221    0.9592193809
1       0.6350880554    0.8840660536    0.8565563873    0.9547779273
2       0.6098460477    0.8914710667    0.8609022556    0.9554508748
3       0.5834954183    0.8954216255    0.8608579414    0.9534320323
```

### Train classification with max used memory hint

Ctr computation on large pools can lead to out of memory problems, in such case it is possible to give catboost a hint about available memory size.
For example:
```
catboost fit --learn-set train.tsv --test-set test.tsv --column-description train.cd  --loss-function Logloss --used-ram-limit 4GB
```

### Random subspace method

To enable rsm for feature bagging use --rsm parameter:
```
catboost fit --learn-set train.tsv --test-set test.tsv --column-description train.cd  --loss-function Logloss --rsm 0.5
```

### Params file

For more convenience, you can create the params file:
```
{
    "thread_count": 4,
    "loss_function": "Logloss",
    "iterations": 400
}
```
And run the algorithm as follows:
```
catboost fit --learn-set train.tsv --test-set test.tsv --column-description train.cd --params-file params_file.txt
```
