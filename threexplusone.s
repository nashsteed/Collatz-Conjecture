; Nash Steed _ ucq8hz _ Apr 9 2022 _ "threexplusone.s"
; optimizations:
; use "test" to check for parity (line 16) : https://c9x.me/x86/html/file_module_x86_id_315.html
; use lea to do 3*rdi+1
; inc rax instead of r11
; use bit shifts for division


	global threexplusone

	section .text

threexplusone:
	cmp rdi, 1
	je done
	test rdi, 1
	jnz odd
even:
	shr rdi, 1
	call threexplusone
	inc rax
	ret
odd:
	lea rdi, [3*rdi+1]
	call threexplusone
	inc rax
	ret
done:
	mov rax, 0
	ret