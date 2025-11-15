# 导入必要的库
from sklearn.datasets import load_iris
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score

# 1. 加载Iris数据集
iris = load_iris()
X = iris.data  # 特征
y = iris.target  # 目标变量（类别）

# 2. 将数据集分为训练集和测试集
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# 3. 创建逻辑回归模型
# 这里使用默认参数，multi_class='auto'会自动检测多分类问题
model = LogisticRegression(max_iter=200)  # 增加迭代次数确保收敛

# 4. 训练模型
model.fit(X_train, y_train)

# 5. 预测测试集
y_pred = model.predict(X_test)

# 6. 评估模型
accuracy = accuracy_score(y_test, y_pred)
print(f"模型准确率: {accuracy:.2f}")

# 7. 查看模型对前5个测试样本的预测
print("\n前5个测试样本的预测结果:")
print("真实类别:", y_test[:5])
print("预测类别:", y_pred[:5])