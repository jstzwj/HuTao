# HuTao
HuTao编程语言，名字来源于往生堂第七十七代堂主 - 胡桃。
Programming language HuTao. The name is inspired from the 77th Director of the Wangsheng Funeral Parlor - Hu Tao.



## 安装 Install





## 例子 Example

Hello World

```rust
import std.io.*;
fn main() {
    println("Hello world!")
}
```

Two number sum

```rust
import std.io.*;
fn sum(lhs: i32, rhs: i32) -> i32 { lhs + rhs }
fn main() {
    println(sum(1, 2))
}
```

Class example

```
class User {
	pub name: str;
	pub password: str;
	
	fn constructor() {
		self.name = "user";
		self.password = "123";
	}
}

let user = new User();

```



## 协议 License

> Copyright 2021 Xia Han
>
> Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
>
> The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
>
> THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
