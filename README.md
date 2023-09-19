# SW Optimizations for WiFi-6 (HEW) SoC
> Microprocessor-Application Term project (Park Jonghyuk, Ko Ryeowook)

# 0. Key objectives of this Term project 
### __Optimizing reference QR Decomposition & LDPC Decoding C code__
  * Pure-SW implementation (No HW block allowed to accelerate the function)

## > Evaluation Criteria
* Reproduibility
* Accuracy (NSR)
* Performance (How fast it got compared to the reference)
* Novelty

## > Things provided in class
* Reference C code of QR Decomposition, LDPC Decoding algorithm
* Benchmarking C code

## > What we considered
* Accuracy and time
* Understanding of reference C code
* Debugged into assembly level to find the part that takes long time.

# 1. Programming language & S/W tools & FPGA used
* __C__ programming language
* Vivado 2017.4, Vivado SDK
* ZYNQ Z7-20

# 2. Our idea
## LDPC Decoding
* Loop optimization (Loop order change, loop merge) - best performance improvement
* Declared new variables in every loop
* Minimize access to external global H arrays
* Used temporary variables

## QR Decomposition
* Changed every multiply & division operation into shift operation
* Reciprocal the variable and converted it into multiplication.
* Used temporary variables (best performance improvement)
* Utilized faster "sqrt()" algorithm (Float square root approximation)
* Loop unrolling, loop order change
* Tried to apply loop tiling, but showed low performance improvement.

- More details : 16team_final.pdf

# 3. Result

## LDPC Decoding result

<img src="/images/ldpcd_result.png" width="80%" height="80%" title="ldpcd_result" alt="ldpcd_result"></img>

* **5.44** times faster than the reference with NSR of -inf [dB]

## QR Decomposition

<img src="/images/qrd_result.png" width="80%" height="80%" title="lqrd_result" alt="qrd_result"></img>

* **2.16** times faster than the reference with NSR of -57.682 [dB]

- More details : 16team_final.pdf

# 4. What I have learned
* SW implementation on ZYNQ Z7-20
* Usage of Vivado SDK
* Improved my C programming skills
* Learning of ways to optimize C code
  + Cache optimization
  + Loop optimization
  + Assembly level coding
  + Temporary variables
* Understanding of assembly language (+ Neon)
* Read IEEE articles related to software optimization
