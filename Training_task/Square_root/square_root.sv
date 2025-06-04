module sqrt;

  real number = 8.0;
  real result;

  function real sqrt(real n);
    real low, high, mid;
    real precision;

    begin
      if (n < 0.0) begin
        sqrt = -1.0; 

        return;
      end

      low = 0.0;
      high = (n >= 1.0) ? n : 1.0;
      precision = 1e-6;

      while ((high - low) > precision) begin
        mid = (low + high) / 2.0;
        if ((mid * mid) > n)
          high = mid;
        else
          low = mid;
      end

      sqrt = (low + high) / 2.0;
    end
  endfunction

  initial begin
    result = sqrt(number);
    $display("Square root of %0f is  %0.6f", number, result);
  end

endmodule