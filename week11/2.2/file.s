	.file	"file.c"
	.globl	_saveCount
	.bss
	.align 4
_saveCount:
	.space 4
	.globl	_loadCount
	.align 4
_loadCount:
	.space 4
	.section .rdata,"dr"
LC0:
	.ascii "wb\0"
LC1:
	.ascii "%d \0"
	.text
	.globl	_saveToFile
	.def	_saveToFile;	.scl	2;	.type	32;	.endef
_saveToFile:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	_saveCount, %eax
	addl	$1, %eax
	movl	%eax, _saveCount
	movl	$LC0, 4(%esp)
	movl	16(%ebp), %eax
	movl	%eax, (%esp)
	call	_fopen
	movl	%eax, -16(%ebp)
	movl	12(%ebp), %eax
	movl	(%eax), %eax
	movl	%eax, 8(%esp)
	movl	$LC1, 4(%esp)
	movl	-16(%ebp), %eax
	movl	%eax, (%esp)
	call	_fprintf
	movl	$0, -12(%ebp)
	jmp	L2
L3:
	movl	-12(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, 8(%esp)
	movl	$LC1, 4(%esp)
	movl	-16(%ebp), %eax
	movl	%eax, (%esp)
	call	_fprintf
	addl	$1, -12(%ebp)
L2:
	movl	12(%ebp), %eax
	movl	(%eax), %eax
	cmpl	-12(%ebp), %eax
	jg	L3
	movl	-16(%ebp), %eax
	movl	%eax, (%esp)
	call	_fclose
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.section .rdata,"dr"
LC2:
	.ascii "rb\0"
LC3:
	.ascii "%d\0"
	.text
	.globl	_loadFromFile
	.def	_loadFromFile;	.scl	2;	.type	32;	.endef
_loadFromFile:
LFB11:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	_loadCount, %eax
	addl	$1, %eax
	movl	%eax, _loadCount
	movl	$LC2, 4(%esp)
	movl	16(%ebp), %eax
	movl	%eax, (%esp)
	call	_fopen
	movl	%eax, -16(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	$LC3, 4(%esp)
	movl	-16(%ebp), %eax
	movl	%eax, (%esp)
	call	_fscanf
	movl	$0, -12(%ebp)
	jmp	L5
L6:
	movl	-12(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movl	%eax, 8(%esp)
	movl	$LC3, 4(%esp)
	movl	-16(%ebp), %eax
	movl	%eax, (%esp)
	call	_fscanf
	addl	$1, -12(%ebp)
L5:
	movl	12(%ebp), %eax
	movl	(%eax), %eax
	cmpl	-12(%ebp), %eax
	jg	L6
	movl	-16(%ebp), %eax
	movl	%eax, (%esp)
	call	_fclose
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE11:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_fopen;	.scl	2;	.type	32;	.endef
	.def	_fprintf;	.scl	2;	.type	32;	.endef
	.def	_fclose;	.scl	2;	.type	32;	.endef
	.def	_fscanf;	.scl	2;	.type	32;	.endef
