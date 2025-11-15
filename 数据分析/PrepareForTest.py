import numpy as np
from sklearn.linear_model import LinearRegression

# 准备数据
x = np.array([[1], [2], [3], [4]])
y = np.array([2, 4, 6, 8])

# 创建并训练模型
model = LinearRegression()
model.fit(x, y)

# 预测 x=5 时的 y 值
x_new = np.array([[5]])
y_pred = model.predict(x_new)

print("预测结果:", y_pred)