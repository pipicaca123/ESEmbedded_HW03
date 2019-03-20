HW03
===
This is the hw03 sample. Please follow the steps below.

# Build the Sample Program

1. Fork this repo to your own github account.

2. Clone the repo that you just forked.

3. Under the hw03 dir, use:

	* `make` to build.

	* `make clean` to clean the ouput files.

4. Extract `gnu-mcu-eclipse-qemu.zip` into hw03 dir. Under the path of hw03, start emulation with `make qemu`.

	See [Lecture 02 ─ Emulation with QEMU] for more details.

5. The sample is a minimal program for ARM Cortex-M4 devices, which enters `while(1);` after reset. Use gdb to get more details.

	See [ESEmbedded_HW02_Example] for knowing how to do the observation and how to use markdown for taking notes.

# Build Your Own Program

1. Edit main.c.

2. Make and run like the steps above.

3. Please avoid using hardware dependent C Standard library functions like `printf`, `malloc`, etc.

# HW03 Requirements

1. How do C functions pass and return parameters? Please describe the related standard used by the Application Binary Interface (ABI) for the ARM architecture.

2. Modify main.c to observe what you found.

3. You have to state how you designed the observation (code), and how you performed it.

	Just like how you did in HW02.

3. If there are any official data that define the rules, you can also use them as references.

4. Push your repo to your github. (Use .gitignore to exclude the output files like object files or executable files and the qemu bin folder)

[Lecture 02 ─ Emulation with QEMU]: http://www.nc.es.ncku.edu.tw/course/embedded/02/#Emulation-with-QEMU
[ESEmbedded_HW02_Example]: https://github.com/vwxyzjimmy/ESEmbedded_HW02_Example

--------------------

- [x] **If you volunteer to give the presentation next week, check this.**

--------------------

**★★★ Please take your note here ★★★**
1.從main.o檔和qemu中觀察幾個register發現各個程式的任務：

	1.r3適用於兩函數間數值之傳遞。

	2.r7功用在於地址的取值與存值進入地址的連結,其中r0/sp類似其輔助。另外，r7還有另外的任務用於協助兩函數	地址的存放。

	3.lr（linker register)與一般用法一樣，作為兩函數間branch的媒介。

2.因為我設計的的程式因素，所以觀察其main.o中bl/bx/b.n的關係：程式會在這以下地址不段輪迴---00000000,00000026

3.程式截圖：
！[1st_time_in_fn_try](https://github.com/pipicaca123/ESEmbedded_HW03/blob/master/000.png)

！[after_first_end_of_fn_try](https://github.com/pipicaca123/ESEmbedded_HW03/blob/master/001.png)

