# HuTao
HuTao编程语言，名字来源于往生堂第七十七代堂主 - 胡桃。  
Programming language HuTao. The name is inspired from the 77th Director of the Wangsheng Funeral Parlor - Hu Tao.  



## 安装 Install




## 设计 Design

### Basic types

| type                | size   |
| ------------------- | ------ |
| bool, u8, i8        | 8-bit  |
| u16, i16, f16       | 16-bit |
| u32, i32, char, f32 | 32-bit |
| u64, i64, f64       | 64-bit |

### Other types

| type   |      |
| ------ | ---- |
| string |      |
|        |      |
|        |      |





## 例子 Example

Hello World

```c#
using std.io;
int main() {
    println("Hello world!");
}
```

Two number sum

```c#
using std.io;
i32 sum(i32 lhs, i32 rhs)
{
    return lhs + rhs;
}
auto sum(f32 lhs, f32 rhs) { return lhs + rhs; }
int main(string[] args) {
    println(sum(1, 2));
}
```

Pointer

```c#
using std.io;
void main() {
    i32 num = 5;
    i32 num2 = num.clone();
    i32 num3;
    num3.clone_from(num);
}
```



Lambda

```c#
using std.io;
void main() {
    // Anonymous functions
    auto addFn2 = (f32 lhs, f32 rhs) => {lhs + rhs}
}
```

Sort Array

```rust
import std.io.*;
void sort(i32[] arry) {
	for i in 0..arry.length {
        for j in i..arry.length {
            let tmp = arry[i];
            arry[i] = arry[j];
            arry[j] = tmp;
        }
    }
}
fn main() {
    let myArray = new i32[15];
    for i in 0..myArray.length { myArray[i] = 0 ; }
    println(sumsortmyArray))
}
```

Class example

```rust
class User {
	public string name;
	public string password;
    
    static User create() {
        User()
    }
	
	void __init__() {
		this.name = "user";
		this.password = "123";
	}

	void __del__() {

	}
}

let user = new User();

```

Template example

```rust

```





## 协议 License

> Copyright 2021 Xia Han
>
> Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
>
> The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
>
> THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
