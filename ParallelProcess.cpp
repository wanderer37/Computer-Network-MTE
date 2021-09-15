#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv){
    //Initialize the MPI Environment
    int world_rank, size_Of_Cluster;

    MPI_Init(&argc, &argv);

    //Get the number of processess
    int world_rank;
    MPI_Comm_size(MPI_COMM_WORLD, &size_Of_Cluster);


    //Get the name of the processor
    int name_len;
    MPI_Comm_rank(MPI_COMM_WORLD, &process_Rank);

    //Printing off a message
    printf("Computer Networks Innovative Project %s rank %d out of %d\n",
                process_name, world_rank, world_size);

    //Finalize the MPI Environment
    MPI_Finalize();
    return 0;
}