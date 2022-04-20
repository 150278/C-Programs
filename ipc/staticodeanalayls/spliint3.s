	.file	"spliint3.c"
	.text
	.section	.rodata
.LC0:
	.string	"one"
.LC1:
	.string	"two"
.LC2:
	.string	"three"
.LC3:
	.string	"less than 1 or more than 3"
	.text
	.globl	int_string
	.type	int_string, @function
int_string:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	cmpl	$3, -20(%rbp)
	je	.L2
	cmpl	$3, -20(%rbp)
	jg	.L3
	cmpl	$1, -20(%rbp)
	je	.L4
	cmpl	$2, -20(%rbp)
	je	.L5
	jmp	.L3
.L4:
	leaq	.LC0(%rip), %rax
	movq	%rax, -8(%rbp)
	jmp	.L6
.L5:
	leaq	.LC1(%rip), %rax
	movq	%rax, -8(%rbp)
.L2:
	leaq	.LC2(%rip), %rax
	movq	%rax, -8(%rbp)
	jmp	.L6
.L3:
	leaq	.LC3(%rip), %rax
	movq	%rax, -8(%rbp)
	nop
.L6:
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	int_string, .-int_string
	.section	.rodata
.LC4:
	.string	"into_string(2)=%s"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$2, %edi
	call	int_string
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
