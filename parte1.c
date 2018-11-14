#include <mpi.h>
#include <stdio.h>

int main( argc, argv )
int argc;
char **argv;
{
ierr = MPI_Init( &argc, &argv );
printf( "Hello" );
ierr = MPI_Comm_rank(MPI_COMM_WORLD, &my_id);
ierr = MPI_Comm_size(MPI_COMM_WORLD, &num_procs);
num_rows_to_send = 2;
an_id = 1;
p = 3;
ierr = MPI_Send( &num_rows_to_send, 1 , MPI_INT,an_id, send_data_tag, MPI_COMM_WORLD);
ierr = MPI_Recv( &p, 1, MPI_LONG, MPI_ANY_SOURCE,
return_data_tag, MPI_COMM_WORLD, &status);
MPI_Finalize();
return 0;
}
