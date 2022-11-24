Lisp (Scheme):
(define fatorial
   (lambda (n)
     (let f ((i n) (result 1))
       (if (= i 0)
         result
         (f (- i 1) (* result i))))))

(fatorial 10)