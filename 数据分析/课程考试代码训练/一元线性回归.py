import numpy as np
import matplotlib
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error

# 设置字体为黑体，解决中文显示问题
plt.rcParams['font.sans-serif'] = ['SimHei']  # 'SimHei' 是黑体字体（Windows 自带）
plt.rcParams['axes.unicode_minus'] = False  # 解决负号显示问题（'-' 符号显示正常）

# 设置 Matplotlib 后端为 TkAgg，确保图形生成和显示
matplotlib.use('TkAgg')  # 或 'Qt5Agg'，这个后端是确保图形能正常显示的重要配置

# ————————————————————————以上为准备工作————————————————————————


# 生成模拟数据
np.random.seed(42)  # 设置随机种子，确保每次生成的随机数一致
X = np.random.rand(100, 1) * 10  # 随机生成 100 个输入特征，范围从 0 到 10
y = 3 * X + 5 + np.random.randn(100, 1) * 2  # y = 3x + 5 + 噪声，噪声是服从正态分布的随机变量
# 初始化线性回归模型
model = LinearRegression()  # 创建一个 LinearRegression 实例，默认使用最小二乘法

# 训练模型
model.fit(X,y)  # 用 X 和 y 数据训练线性回归模型，X 为输入特征，y 为目标变量

# 预测
y_pred = model.predict(X)  # 使用训练好的模型对输入特征 X 进行预测，得到预测的 y 值

# 计算均方误差 mean_squared_error(y,y_pred)
mse = mean_squared_error(y, y_pred)  # 计算实际 y 和预测 y_pred 之间的均方误差（Mean Squared Error）
print(f"均方误差 (MSE): {mse:.2f}")  # 打印均方误差

# 输出模型参数
print(f"斜率 (w1): {model.coef_[0][0]:.2f}")  # 输出线性回归模型的斜率，coef_ 是一个二维数组
print(f"截距 (w0): {model.intercept_[0]:.2f}")  # 输出线性回归模型的截距，intercept_ 是一个一维数组






# 可视化结果
plt.scatter(X, y, color='blue', label='数据点')  # 绘制实际数据点，X 为输入特征，y 为实际值，蓝色表示
plt.plot(X, y_pred, color='red', label='拟合直线')  # 绘制预测的拟合直线，红色表示
plt.xlabel('X')  # 设置 X 轴标签
plt.ylabel('y')  # 设置 y 轴标签
plt.title('线性回归')  # 设置图表标题
plt.legend()  # 显示图例
plt.show()  # 显示图形

# plt.scatter(X,y,color='blue',label='数据点') plt.plot(X,y_pred,color='red',labe='拟合直线')
# plt.xlable('X') plt.ylabel('y') plt.title('线性回归') plt.legend() plt.show()