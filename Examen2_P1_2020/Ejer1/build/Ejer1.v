
module AsyncROM (
  input [9:0] addr,
  input en,
  output [52:0] read_data
);
  reg [52:0] memory[0:1023] /*verilator public*/;

  assign read_data = en? memory[addr] : 32'hz;
endmodule 



module CompUnsigned #(
    parameter Bits = 1
)
(
    input [(Bits -1):0] a,
    input [(Bits -1):0] b,
    output \> ,
    output \= ,
    output \<
);
    assign \> = a > b;
    assign \= = a == b;
    assign \< = a < b;
endmodule


module Ejer1 (
  input [31:0] addr,
  output [31:0] data,
  output hit
);
  wire [9:0] index;
  wire [52:0] s0;
  wire [19:0] s1;
  wire [19:0] tag;
  wire s2;
  wire [1:0] byte_offset;
  assign byte_offset = addr[1:0];
  assign index = addr[11:2];
  assign tag = addr[31:12];
  AsyncROM cache_mem (
    .addr( index ),
    .en( 1'b1 ),
    .read_data( s0 )
  );

  assign data = s0[31:0];
  assign s1 = s0[51:32];
  CompUnsigned #(
    .Bits(20)
  )
  CompUnsigned_i1 (
    .a( s1 ),
    .b( tag ),
    .\= ( s2 )
  );
  assign hit = (s0[52] & s2);
endmodule
