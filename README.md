# SysY-Compiler

## 介绍 
SysY语言编译器

## 软件架构
本编译器采用了前端ANTLR+后端MLIR的总体架构，当前完成了前端到AST的生成，具体文件结构如下。

```shell
sys-y-compiler
├── LICENSE
├── Makefile
├── README.en.md
├── README.md
├── build
├── doc
│   ├── SysY语言定义.pdf
│   └── SysY运行时库.pdf
├── include
│   └── sysy
│       ├── Frontend
│       │   ├── Ast.h
│       │   ├── AstTramsform.h
│       │   ├── AstType.h
│       │   ├── Frontend.h
│       │   ├── Location.h
│       │   ├── SysYLexer.h
│       │   ├── SysYOp.h
│       │   ├── SysYParser.h
│       │   ├── SysYParserBaseVisitor.h
│       │   ├── SysYParserVisitor.h
│       │   ├── SysYVisitor.h
│       │   └── SysyContext.h
│       └── Support
│           ├── CommandLine.h
│           ├── common.h
│           └── debug.h
├── lib
│   └── Frontend
│       ├── Ast.cpp
│       ├── AstTramsform.cpp
│       ├── Frontend.cpp
│       ├── Location.cpp
│       ├── SysYLexer.cpp
│       ├── SysYLexer.g4
│       ├── SysYParser.cpp
│       ├── SysYParser.g4
│       ├── SysYParserBaseVisitor.cpp
│       ├── SysYParserVisitor.cpp
│       ├── SysYVisitor.cpp
│       └── SysyContext.cpp
├── scripts
│   └── config.mk
├── sysyc
├── sysyc.cpp
└── test.sy
```

## 安装说明
可以使用发行版

## 软件使用
```shell
sysyc <filename> [opt, ..]

# 打印源代码
sysyc <filename> --gen=src

# 打印CST
sysyc <filename> --gen=cst

# 打印AST
sysyc <filename> --gen=ast
```