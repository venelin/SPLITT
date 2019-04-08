#!sh

# runAllInOneJob.sh
# SPLITT
# 
# Copyright 2017-2019 Venelin Mitov
# 
# This file is part of SPLITT: a generic C++ library for Serial and Parallel
# Lineage Traversal of Trees.
# 
# SPLITT is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as
# published by the Free Software Foundation, either version 3 of
# the License, or (at your option) any later version.
# 
# SPLITT is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Lesser General Public License for more details.
# 
# You should have received a copy of the GNU Lesser General Public
# License along with SPLITT.  If not, see
# <http://www.gnu.org/licenses/>.
# 
# @author Venelin Mitov


export OMP_NUM_THREADS=1
export OMP_PROC_BIND=FALSE
R --vanilla --slave -f runCluster.R --args 1 1
R --vanilla --slave -f runCluster.R --args 1 0

export OMP_NUM_THREADS=2
export OMP_PROC_BIND=FALSE
R --vanilla --slave -f runCluster.R --args 2 1
R --vanilla --slave -f runCluster.R --args 2 0

for n in `seq 4 4 24`
do
export OMP_NUM_THREADS="$n"
export OMP_PROC_BIND=FALSE
R --vanilla --slave -f runCluster.R --args "$n" 1
R --vanilla --slave -f runCluster.R --args "$n" 0
done


