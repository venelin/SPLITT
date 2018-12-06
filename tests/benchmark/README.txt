The test-trees and simulated trait data are stored in the file 'Trees.RData'. The script runCluster.R contains the code for running the performance benchmark on a high-performance cluster. The file runAllInOneJob.sh contains shell instructions to run all cases of the benchmarks in a single parallel job. 

To run a single job on the cluster with <n> cpus execute the following commands:

export OMP_NUM_THREADS=<n>
export OMP_PROC_BIND=FALSE
bsub -n <n> R --vanilla --slave -f runCluster.R --args <n>

Wait for the job to start before changing the variables OMP_NUM_THREADS and OMP_PROC_BIND.

