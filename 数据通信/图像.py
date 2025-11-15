import matplotlib
matplotlib.use('TkAgg')  # 设置后端为 TkAgg
import numpy as np
import matplotlib.pyplot as plt

# 设置中文字体
plt.rcParams['font.sans-serif'] = ['SimHei']
plt.rcParams['axes.unicode_minus'] = False

# 参数设置
fc = 10  # 载波频率 (Hz)
fs = 1000  # 采样频率 (Hz)
T = 1  # 信号持续时间 (s)
N = fs * T  # 采样点数
t = np.linspace(0, T, N, endpoint=False)  # 时间向量

# 生成二进制基带信号
bit_rate = 2  # 比特率 (bps)
bit_num = bit_rate * T  # 比特数
bits = np.random.randint(0, 2, bit_num)  # 随机生成二进制序列
bit_duration = int(fs / bit_rate)  # 每个比特的持续时间 (采样点数)

# 扩展基带信号
baseband = np.zeros(N)
for i in range(bit_num):
    baseband[i * bit_duration:(i + 1) * bit_duration] = bits[i]

# 1. 2ASK 信号
carrier = np.cos(2 * np.pi * fc * t)  # 载波信号
ask_signal = baseband * carrier  # 2ASK调制

# 2. 2PSK 信号
psk_bits = 2 * bits - 1  # 将 0/1 转换为 -1/1
psk_baseband = np.zeros(N)
for i in range(bit_num):
    psk_baseband[i * bit_duration:(i + 1) * bit_duration] = psk_bits[i]
psk_signal = psk_baseband * carrier  # 2PSK调制

# 3. 2DPSK 信号
dpsk_bits = np.zeros(bit_num, dtype=int)
dpsk_bits[0] = 1  # 第一个比特初始化为 1
for i in range(1, bit_num):
    if bits[i] == 1:
        dpsk_bits[i] = -dpsk_bits[i - 1]  # 当前比特为 1，相位翻转
    else:
        dpsk_bits[i] = dpsk_bits[i - 1]  # 当前比特为 0，相位不变
dpsk_baseband = np.zeros(N)
for i in range(bit_num):
    dpsk_baseband[i * bit_duration:(i + 1) * bit_duration] = dpsk_bits[i]
dpsk_signal = dpsk_baseband * carrier  # 2DPSK调制

# 绘制图形
plt.figure(figsize=(10, 8))

# 基带信号
plt.subplot(4, 1, 1)
plt.step(t, baseband, where='post', linewidth=1.5)
plt.title('二进制基带信号')
plt.xlabel('时间 (s)')
plt.ylabel('幅度')
plt.ylim(-0.2, 1.2)
plt.grid(True)

# 2ASK 信号
plt.subplot(4, 1, 2)
plt.plot(t, ask_signal, linewidth=1.5)
plt.title('2ASK 信号波形')
plt.xlabel('时间 (s)')
plt.ylabel('幅度')
plt.grid(True)

# 2PSK 信号
plt.subplot(4, 1, 3)
plt.plot(t, psk_signal, linewidth=1.5)
plt.title('2PSK 信号波形')
plt.xlabel('时间 (s)')
plt.ylabel('幅度')
plt.grid(True)

# 2DPSK 信号
plt.subplot(4, 1, 4)
plt.plot(t, dpsk_signal, linewidth=1.5)
plt.title('2DPSK 信号波形')
plt.xlabel('时间 (s)')
plt.ylabel('幅度')
plt.grid(True)

plt.tight_layout()
plt.show()