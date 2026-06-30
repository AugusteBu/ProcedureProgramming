	.file	"main.c"
	.section .rdata,"dr"
LC0:
	.ascii "%d\0"
	.text
	.globl	_fillArray
	.def	_fillArray;	.scl	2;	.type	32;	.endef
_fillArray:
LFB19:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$36, %esp
	.cfi_offset 3, -12
	movl	12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_scanf
	movl	$0, -12(%ebp)
	jmp	L2
L3:
	movl	-12(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	8(%ebp), %eax
	leal	(%edx,%eax), %ebx
	call	_rand
	movl	%eax, (%ebx)
	addl	$1, -12(%ebp)
L2:
	movl	12(%ebp), %eax
	movl	(%eax), %eax
	cmpl	-12(%ebp), %eax
	jg	L3
	nop
	addl	$36, %esp
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE19:
	.section .rdata,"dr"
LC1:
	.ascii "%d \0"
	.text
	.globl	_printArray
	.def	_printArray;	.scl	2;	.type	32;	.endef
_printArray:
LFB20:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	$0, -12(%ebp)
	jmp	L5
L6:
	movl	-12(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	addl	$1, -12(%ebp)
L5:
	movl	12(%ebp), %eax
	movl	(%eax), %eax
	cmpl	-12(%ebp), %eax
	jg	L6
	movl	$10, (%esp)
	call	_putchar
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE20:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC2:
	.ascii "save2.bin\0"
LC3:
	.ascii "anotherfile.bin\0"
LC4:
	.ascii "%d %d\12\0"
LC5:
	.ascii "All good\0"
LC6:
	.ascii "Something's wrong\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB21:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	movl	$980032, %eax
	call	___chkstk_ms
	subl	%eax, %esp
	call	___main
	leal	20028(%esp), %eax
	movl	%eax, 4(%esp)
	leal	660032(%esp), %eax
	movl	%eax, (%esp)
	call	_fillArray
	leal	20024(%esp), %eax
	movl	%eax, 4(%esp)
	leal	340032(%esp), %eax
	movl	%eax, (%esp)
	call	_fillArray
	leal	20020(%esp), %eax
	movl	%eax, 4(%esp)
	leal	20032(%esp), %eax
	movl	%eax, (%esp)
	call	_fillArray
	movl	$LC2, 8(%esp)
	leal	20028(%esp), %eax
	movl	%eax, 4(%esp)
	leal	660032(%esp), %eax
	movl	%eax, (%esp)
	call	_saveToFile
	movl	$LC2, 8(%esp)
	leal	20020(%esp), %eax
	movl	%eax, 4(%esp)
	leal	20032(%esp), %eax
	movl	%eax, (%esp)
	call	_saveToFile
	movl	$LC2, 8(%esp)
	leal	20028(%esp), %eax
	movl	%eax, 4(%esp)
	leal	660032(%esp), %eax
	movl	%eax, (%esp)
	call	_loadFromFile
	movl	$LC3, 8(%esp)
	leal	20024(%esp), %eax
	movl	%eax, 4(%esp)
	leal	340032(%esp), %eax
	movl	%eax, (%esp)
	call	_saveToFile
	movl	$LC3, 8(%esp)
	leal	20020(%esp), %eax
	movl	%eax, 4(%esp)
	leal	20032(%esp), %eax
	movl	%eax, (%esp)
	call	_saveToFile
	movl	$LC2, 8(%esp)
	leal	20024(%esp), %eax
	movl	%eax, 4(%esp)
	leal	340032(%esp), %eax
	movl	%eax, (%esp)
	call	_loadFromFile
	movl	_loadCount, %edx
	movl	_saveCount, %eax
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	movl	_saveCount, %eax
	cmpl	$3, %eax
	jne	L8
	movl	_loadCount, %eax
	cmpl	$3, %eax
	jne	L8
	movl	$LC5, (%esp)
	call	_printf
	jmp	L9
L8:
	movl	$LC6, (%esp)
	call	_printf
L9:
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE21:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_rand;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_putchar;	.scl	2;	.type	32;	.endef
	.def	_saveToFile;	.scl	2;	.type	32;	.endef
	.def	_loadFromFile;	.scl	2;	.type	32;	.endef
