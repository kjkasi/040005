/* ==> Do not modify this file!!  It is created automatically
   from bsd_callg_bl.m using the gen-c-prog.awk script.  <== */

#include <stdio.h>
#include "ansidecl.h"

void bsd_callg_blurb (FILE *);
void
bsd_callg_blurb (file)
     FILE *file;
{
  fputs ("\n", file);
  fputs ("\n", file);
  fputs ("\n", file);
  fputs ("call graph profile:\n", file);
  fputs ("          The sum of self and descendents is the major sort\n",
	 file);
  fputs ("          for this listing.\n", file);
  fputs ("\n", file);
  fputs ("          function entries:\n", file);
  fputs ("\n", file);
  fputs ("index     the index of the function in the call graph\n", file);
  fputs ("          listing, as an aid to locating it (see below).\n", file);
  fputs ("\n", file);
  fputs ("%time     the percentage of the total time of the program\n", file);
  fputs ("          accounted for by this function and its\n", file);
  fputs ("          descendents.\n", file);
  fputs ("\n", file);
  fputs ("self      the number of seconds spent in this function\n", file);
  fputs ("          itself.\n", file);
  fputs ("\n", file);
  fputs ("descendents\n", file);
  fputs ("          the number of seconds spent in the descendents of\n",
	 file);
  fputs ("          this function on behalf of this function.\n", file);
  fputs ("\n", file);
  fputs ("called    the number of times this function is called (other\n",
	 file);
  fputs ("          than recursive calls).\n", file);
  fputs ("\n", file);
  fputs ("self      the number of times this function calls itself\n", file);
  fputs ("          recursively.\n", file);
  fputs ("\n", file);
  fputs ("name      the name of the function, with an indication of\n", file);
  fputs ("          its membership in a cycle, if any.\n", file);
  fputs ("\n", file);
  fputs ("index     the index of the function in the call graph\n", file);
  fputs ("          listing, as an aid to locating it.\n", file);
  fputs ("\n", file);
  fputs ("\n", file);
  fputs ("\n", file);
  fputs ("          parent listings:\n", file);
  fputs ("\n", file);
  fputs ("self*     the number of seconds of this function's self time\n",
	 file);
  fputs ("          which is due to calls from this parent.\n", file);
  fputs ("\n", file);
  fputs ("descendents*\n", file);
  fputs ("          the number of seconds of this function's\n", file);
  fputs ("          descendent time which is due to calls from this\n", file);
  fputs ("          parent.\n", file);
  fputs ("\n", file);
  fputs ("called**  the number of times this function is called by\n", file);
  fputs ("          this parent.  This is the numerator of the\n", file);
  fputs ("          fraction which divides up the function's time to\n",
	 file);
  fputs ("          its parents.\n", file);
  fputs ("\n", file);
  fputs ("total*    the number of times this function was called by\n", file);
  fputs ("          all of its parents.  This is the denominator of\n", file);
  fputs ("          the propagation fraction.\n", file);
  fputs ("\n", file);
  fputs ("parents   the name of this parent, with an indication of the\n",
	 file);
  fputs ("          parent's membership in a cycle, if any.\n", file);
  fputs ("\n", file);
  fputs ("index     the index of this parent in the call graph\n", file);
  fputs ("          listing, as an aid in locating it.\n", file);
  fputs ("\n", file);
  fputs ("\n", file);
  fputs ("\n", file);
  fputs ("          children listings:\n", file);
  fputs ("\n", file);
  fputs ("self*     the number of seconds of this child's self time\n", file);
  fputs ("          which is due to being called by this function.\n", file);
  fputs ("\n", file);
  fputs ("descendent*\n", file);
  fputs ("          the number of seconds of this child's descendent's\n",
	 file);
  fputs ("          time which is due to being called by this\n", file);
  fputs ("          function.\n", file);
  fputs ("\n", file);
  fputs ("called**  the number of times this child is called by this\n",
	 file);
  fputs ("          function.  This is the numerator of the\n", file);
  fputs ("          propagation fraction for this child.\n", file);
  fputs ("\n", file);
  fputs ("total*    the number of times this child is called by all\n", file);
  fputs ("          functions.  This is the denominator of the\n", file);
  fputs ("          propagation fraction.\n", file);
  fputs ("\n", file);
  fputs ("children  the name of this child, and an indication of its\n",
	 file);
  fputs ("          membership in a cycle, if any.\n", file);
  fputs ("\n", file);
  fputs ("index     the index of this child in the call graph listing,\n",
	 file);
  fputs ("          as an aid to locating it.\n", file);
  fputs ("\n", file);
  fputs ("\n", file);
  fputs ("\n", file);
  fputs ("          * these fields are omitted for parents (or\n", file);
  fputs ("          children) in the same cycle as the function.  If\n",
	 file);
  fputs ("          the function (or child) is a member of a cycle,\n", file);
  fputs ("          the propagated times and propagation denominator\n",
	 file);
  fputs ("          represent the self time and descendent time of the\n",
	 file);
  fputs ("          cycle as a whole.\n", file);
  fputs ("\n", file);
  fputs ("          ** static-only parents and children are indicated\n",
	 file);
  fputs ("          by a call count of 0.\n", file);
  fputs ("\n", file);
  fputs ("\n", file);
  fputs ("\n", file);
  fputs ("          cycle listings:\n", file);
  fputs ("          the cycle as a whole is listed with the same\n", file);
  fputs ("          fields as a function entry.  Below it are listed\n",
	 file);
  fputs ("          the members of the cycle, and their contributions\n",
	 file);
  fputs ("          to the time and call counts of the cycle.\n", file);
  fputs ("\n", file);
}
