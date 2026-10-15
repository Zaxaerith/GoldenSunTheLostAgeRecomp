# GoldenSunTheLostAgeRecomp（黄金太阳：失落的时代 原生静态转译版）

[English](README.md) | [简体中文](README.zh-CN.md)

基于 [GBARecomp](https://github.com/mstan/gbarecomp) 与 [recomp-ui](https://github.com/mstan/recomp-ui) 构建的 **《黄金太阳：失落的时代》（美版/欧版，游戏代号：AGFE，厂商编号：01，版本：Revision 0）** Windows x64 原生静态转译集成项目。

> **v0.1.0-preview — 实验性预览版本**  
> 本项目为非官方、非商业性的玩家与技术研究项目，与任天堂（Nintendo）或 Camelot Software Planning 无任何从属、授权或关联关系。玩家必须自行提供合法获取的 GBA 游戏 ROM 与零售版 GBA BIOS。游戏尚未对全部隐藏支线和最终迷宫进行穷尽性通关测试。

《黄金太阳：失落的时代》（*Golden Sun: The Lost Age*）是 Camelot 与任天堂在 Game Boy Advance 平台上推出的经典奇幻 RPG 续作。本项目将原本的 17,041 个 ARM/Thumb 游戏函数直接转译为原生 Windows x64 机器码，在完全保留原版游戏帧率、战斗特效、伪 3D Mode-7 镜头调度、精灵/精神力系统与卡带 Flash 存档的前提下，为玩家带来现代化的桌面启动器与低延迟游戏体验。

---

## 已验证游戏范围与当前状态

* [x] **冷启动与标题界面**：直接加载启动器，验证通过后直达游戏标题画面与存档档案界面（`Continue`、`New Game`、`Battle`）。
* [x] **序章剧情与过场动画**：维纳斯灯塔（Venus Lighthouse）的逃亡与坍塌、加西亚（Felix）、洁娜（Jenna）、西芭（Sheba）及斯库拉登（Kraden）的对话流程，以及浮岛（Idejima）漂流叙事。
* [x] **世界地图与神殿探索**：达伊拉村（Daila）登陆、遗迹探索、坎多拉神殿（Kandorean Temple）与德汉高原（Dehkan Plateau）大地图探索。
* [x] **回合制战斗与 3D 战斗引擎**：伪 3D Mode-7 旋转战场、首场无赖（Ruffian）遭遇战、队伍指令（攻击、精神力、精灵、道具、防御）及招式特效。
* [x] **卡带 Flash512 存档机制**：完整支持 Macronix `MX29L512` 64 KB Flash 芯片协议（`0x1CC2`、`FLASH_V123`），写入与重新加载均通过验收（支持 `saves/gs2.sav` 及根目录旧存档无损读取）。
* [x] **音频子系统**：MP2K 音频驱动模拟与硬件定时器合成，3,000 帧有窗口战斗实测无音频欠载（underrun）。
* [x] **现代化原生玩家启动器**：集成 `recomp-ui` 图形界面，支持 ROM/BIOS 选择、哈希校验、键位与手柄映射、窗口整数缩放、音量调节与配置记忆。
* [x] **纯净 Windows 图形子系统**：采用 `-mwindows` / `WinMain` 启动，双击运行不弹出黑框控制台终端窗口。
* [x] **保持 HLE BIOS 默认启动路径**：保留 GS2 已充分验证的高级仿真 BIOS（`--bios-hle`）默认启动逻辑，避免引入不稳定的强制低级 BIOS 流程，同时提供可选的实验性 LLE BIOS 模式。

### 开放社区测试范围

本预览版提供了稳定可玩的本地基准。以下后期章节与高级功能欢迎玩家社区长测反馈：
* 跨越大海原、进入雷姆利亚（Lemuria）、西海探索及最终火星灯塔（Mars Lighthouse）的全程战役通关。
* 高阶召唤兽动画（大灾变 Catastrophe、代达罗斯 Daedalus、阿祖尔 Azul、卡隆 Charon、伊莉丝 Iris）及多目标复合精神力特效。
* 与前作《黄金太阳：开启的封印》的有线/密码数据继承联动及竞技场通信对战。
* 跨越不同城镇、洞穴和大地图长时间游玩的综合稳定性。

---

## 玩家快速上手指南

无需安装任何编译器或开发工具（如 CMake、Ninja、GCC、Python 等）：

1. **获取发行包**：下载解压 `GoldenSunTheLostAgeRecomp-windows-x64-v0.1.0-preview.zip`。
2. **解压目录**：解压至本地任意具有写入权限的文件夹（如 `D:\Games\GoldenSun2\`）。请确保 `GoldenSunTheLostAgeRecomp.exe`、运行库 DLL、`assets/` 资源目录、`game.toml` 及 `licenses/` 处于同一目录。
3. **启动游戏**：直接双击运行 `GoldenSunTheLostAgeRecomp.exe`。
4. **启动器配置**：
   * 点击 **Browse** 分别选择合法备份的 USA/Europe 版 ROM（`.gba`）和官方 GBA BIOS（`.bin`）。
   * 启动器将自动计算 SHA-1 并比对文件大小，校验通过后显示绿色对勾。
   * 在 **Input**、**Video**、**Audio** 标签页中调整按键、手柄、缩放倍率和音量。
5. **开始游玩**：点击界面中央的 **Play** 按钮即可进入游戏！

> [!TIP]
> 您的路径与参数设置会自动持久化保存至 `rom.cfg`、`bios.cfg`、`config.ini` 及 `keybinds.ini`。如果您勾选了 “Skip Launcher”（跳过启动器），日后若需重新打开配置界面，只需为 EXE 创建快捷方式并添加 `--launcher` 参数，或在命令行中运行 `GoldenSunTheLostAgeRecomp.exe --launcher` 即可。

---

## 必需私有文件说明

本项目严禁且不分发任何受版权保护的原始商业游戏文件，玩家必须自备合法提取的镜像：

| 文件类型 | 推荐版本与代号 | 文件精确大小 | SHA-1 校验和 | CRC-32 |
|---|---|---:|---|---|
| **游戏 ROM** | 《黄金太阳：失落的时代》（美版/欧版，代码 `AGFE`，厂商 `01`） | 16,777,216 字节 (16 MiB) | `b500663220cb9bf56b9f8e8c0c544f1d6fa3a824` | `606A1C4D` |
| **GBA BIOS** | 官方零售版 Game Boy Advance BIOS | 16,384 字节 (16 KiB) | `300c20df6731a33952ded8c436f7f186d25d3492` | — |

> [!WARNING]
> 日版 ROM、修改版 ROM（ROM Hack）或非标准 Dump 文件将被启动器严格拒绝。仅修改文件名称无法绕过内置的 SHA-1 强身份门禁。

---

## BIOS 启动策略：HLE 默认与 LLE 实验模式

与前作 GS1 采用强制 LLE BIOS 启动不同，《黄金太阳：失落的时代》大量依赖精密的中断与时序交互：

* **HLE BIOS 模式（默认推荐）**：启动时自动注入 `--bios-hle`。游戏跳过繁琐的 BIOS 开机动画，所有核心系统调用均由经过深度验证的高级仿真接口直接响应，运行最流畅稳定。
* **LLE 真实 BIOS 模式（实验性）**：通过 `--no-bios-hle` 运行原生 BIOS 机器码。目前该路径仅验证至开场叙事阶段。如需测试此模式，可在命令行附带 `--no-bios-hle` 或 `--experimental-lle`，亦可在 `config.ini` 的 `[Launcher]` 小节中添加 `experimental_lle = 1`。

无论采用哪种模式，运行时均需要检测到合法的 16 KiB GBA BIOS 文件以构建总线内存镜像与向量回退表。

---

## 控制、画面与音效设置

### 默认键盘按键映射

| GBA 按键 | PC 默认按键 | 功能说明 |
|---|---|---|
| **十字键 (D-Pad)** | `W / A / S / D` 或 `↑ / ↓ / ← / →` | 角色移动 / 菜单光标选择 |
| **A** | `Z` / `J` | 确认 / 对话 / 互动 / 调查 |
| **B** | `X` / `K` | 取消 / 跑步（长按移动） |
| **L** | `Q` / `U` | 精神力快捷键 L / 菜单向左翻页 |
| **R** | `E` / `I` | 精神力快捷键 R / 菜单向右翻页 |
| **START** | `Enter (回车)` | 打开主菜单（状态、精神力、精灵、物品） |
| **SELECT** | `Backspace (退格)` / `Tab` | 打开大地图 / 辅助功能 |

### 游戏手柄支持

通过 SDL2 原生支持主流现代游戏控制器，包括 Xbox 控制器（XInput）、PlayStation DualShock 4 / DualSense、Nintendo Switch Pro 手柄以及各类标准 DirectInput 游戏手柄。可在启动器 **Input** 面板中一键绑定或恢复默认手柄按键。

### 画面与声音选项

* **画面倍率**：支持 1x 至 6x 整数倍窗口缩放，并支持无边框全屏切换（`F11` 或 `Alt+Enter`）。
* **画幅比例**：严格锁定 GBA 原生 3:2 画面比例（240 × 160 分辨率像素完美映射），避免画面变形拉伸。
* **音频输出**：主音量滑块调节，输出标准 16 位 44.1 kHz 立体声音频。

---

## 存档持久化与兼容机制

* **默认存档位置**：通过启动器或双击运行时，新存档默认写入程序目录下的 **`saves/gs2.sav`**。
* **旧存档无损兼容**：如果您的程序根目录下已存在旧版存档（如 `Golden Sun - The Lost Age(UE)(Nintendo)(128Mb).sav` 或 `gs2.sav`），程序将自动检测并优先加载该文件，绝不覆盖、不转换、不删除您的宝贵游玩进度。
* **硬件模拟真实性**：底层准确模拟 Macronix `MX29L512` 64 KB 闪存芯片（`0x1CC2`、`FLASH_V123`），支持原始扇区擦除与编程协议。生成的 `.sav` 文件与实机卡带及主流模拟器（如 mGBA）完全通用。
* **配置持久化**：玩家在图形界面中所做的所有设置均保存在同目录下的 `config.ini` 与 `keybinds.ini` 中。

---

## 本地编译构建（开发者）

开发者如需在本地进行调试或二次开发，可参考以下命令：

### 环境要求
* 操作系统：Windows 10 / 11 x64
* 编译器：MinGW-w64 GCC/G++ 11+（支持 C++20）
* 构建系统：CMake 3.20+、Ninja 1.10+
* 依赖库：SDL2 2.30+ MinGW 开发包

### 编译命令
```powershell
# 1. 恢复依赖树（gbarecomp、recomp-ui、toml++）
.\scripts\setup-deps.ps1

# 2. 增量构建玩家宿主程序（默认并行度 2）
.\build.ps1 -Jobs 2

# 3. 构建并运行启动器门禁自动化测试
.\build.ps1 -Jobs 2 -BuildContractTest
```

生成的可执行程序及启动器资源将输出至 `build/host/`。

---

## 项目技术架构

```text
GoldenSunTheLostAgeRecomp/
├── .deps/tomlplusplus/         toml++ 解析库
├── reference/gbarecomp/        静态转译框架与 GBA 硬件抽象层
├── recomp-ui/                  Dear ImGui 图形启动器前端
├── src/
│   ├── main.cpp                Windows 图形子系统主入口（WinMain / 存档解析）
│   ├── game_launcher_boot.cpp  启动器适配缝隙与 ROM/BIOS 校验门禁
│   ├── patches/                GS2 专属运行时补丁
│   │   ├── interpreter.cpp     ARM/Thumb 解释器回退
│   │   ├── gba_save.cpp        Macronix 512 Kbit 芯片协议
│   │   ├── runtime.cpp         运行时循环与输入泵
│   │   └── runtime_arm_default_aborts.cpp
│   ├── game/                   静态转译生成的游戏 C++ 源码（17,041 个函数）
│   └── generated_bios/         转译生成的 GBA BIOS C++ 源码（666 个函数）
├── tests/
│   └── launcher_contract.cpp   启动器契约与配置持久化门禁测试
└── tools/
    ├── build-host.ps1          增量构建脚本
    ├── common.ps1              公用校验工具函数
    └── make-release.ps1        本地独立发行候选包打包脚本
```

---

## 许可证与致谢

* **转译宿主与集成源码**：遵循 [PolyForm Noncommercial License 1.0.0](LICENSE) 商业限制许可证。
* **recomp-ui 与 Dear ImGui**：遵循 [MIT License](licenses/RecompUI.txt)。
* **GBARecomp 框架**：遵循 PolyForm Noncommercial 1.0.0 / MPL-2.0 / MIT 许可证。
* **SDL2 媒体库**：遵循 [zlib License](licenses/SDL2.txt)。
* **第三方开源组件详细声明**：请参见 [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md)。

*《黄金太阳》及《黄金太阳：失落的时代》的全部版权、商标、剧情、角色形象及音频美术素材均归 **任天堂株式会社（Nintendo）** 与 **Camelot Software Planning** 所有。本项目仅供技术探索与个人备份研究，不包含任何商业代码授权。*
