	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	$0, -4(%rbp)
	leaq	L_.str(%rip), %rdi
	callq	_cJSON_Parse
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rdi
	callq	_cJSON_Print
	leaq	L_.str.1(%rip), %rdi
	movq	%rax, %rsi
	movb	$0, %al
	callq	_printf
	movq	-16(%rbp), %rsi
	movq	16(%rsi), %rsi
	movq	56(%rsi), %rsi
	leaq	L_.str.2(%rip), %rdi
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movq	-16(%rbp), %rsi
	movq	16(%rsi), %rsi
	movq	32(%rsi), %rsi
	leaq	L_.str.1(%rip), %rdi
	movl	%eax, -24(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	xorl	%ecx, %ecx
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"{\"name\":\"Allen\"}"

L_.str.1:                               ## @.str.1
	.asciz	"%s\n"

L_.str.2:                               ## @.str.2
	.asciz	"%s="


.subsections_via_symbols
