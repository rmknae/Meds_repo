module exponential_tb;
  real z = -500;
  real result;

  function real exponential(real z);
    real x, sum_items, precision, x_by_n, fac_n, abs_x_by_n;
    int n;
    begin
      x = (z < 0) ? -z : z;
      sum_items = 0.0;
      n = 0;
      precision = 1e-10;
      x_by_n = 1.0;
      fac_n = 1.0;
      abs_x_by_n = 1.0;

      while (abs_x_by_n > precision) begin
        sum_items += x_by_n;
        n += 1;
        fac_n *= n;
        x_by_n = (x ** n) / fac_n;
        abs_x_by_n = (x_by_n < 0) ? -x_by_n : x_by_n;
      end

      if (z > 0)
        exponential = sum_items;
      else
        exponential = 1.0 / sum_items;
    end
  endfunction

  initial begin
    result = exponential(z);
    $display("exp(%0f) = %0.20f", z, result);
  end
endmodule