set term pdf
set output "fig.pdf"
set xlabel "N"
set ylabel "Diferencia relativa"
plot "datos.txt" u 1:2 w l