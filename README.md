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

| type   |                                                        |
| ------ | ------------------------------------------------------ |
| string | Variable length, Disable random access, UTF-8 Internal |
| enum   |                                                        |
| struct |                                                        |
| class  |                                                        |
| tuple  |                                                        |
| array  |                                                        |





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
auto sum(f32 lhs, f32 rhs) { lhs + rhs }
int main(string[] args) {
    println(sum(1, 2));
}
```

Control Flow

```

int main(string[] args) {
	i32 a = 0;
	f32 b = a;
    if a == 1 {
    	b = 1;
    } else {
    	b = 5;
    }
    
    if (b > 1) {
    	
    }
    
    
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

Enum

```rust
enum Color {
    Red,
    Yellow,
    Green,
    Blue
}

enum Object {
    Float(f32),
    Integer(i32),
	Boolean(bool),
    Complex(f32, f32),
}

Object getObject(f32 number) { Object::Float(number) }
Object getObject(i32 number) { Object::Integer(number) }
Object getObject(f32 real, f32 imag) { Object::Complex(real, imag) }

f64 toDouble(Object o) {
    match(o) {
        Object::Float(f) => f as f64,
        Object::Integer(i) => i as f64,
        Object::Boolean(b) => {
            if b {1} else {0}
        }
        _ => throw std.except.RuntimeException("Can not convert Complex to double")
    }
}

enum Character {
    zhongli{name: string, age: i32},
    venti{name: string, age: i32},
	raiden_shogun{name: string, age: i32},
}
```

Tuple

```c#
(i32, f32) tuple1 = (8i32, 9f32);
auto tuple2 = (1, 2);
auto tuple3 = ("hello", 4, 8f32);
```



Struct Class example

```rust
class User {
	public string _name;
	public string _password;
    
    static User create() {
        new User()
    }
	
	public Person(string name, string password)
   	{
		_name = lastName;
		_password = password;
  	}
}

auto user = new User();

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
