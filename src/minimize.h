// vim:sw=4:ts=4
/*
   This file is part of mist.

   mist is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   mist is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with mist; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

   Copyright 2003, 2004, Pierre Ganty 2007, Laurent Van Begin
 */

#ifndef __MINIMIZE_H
#define __MINIMIZE_H

#include "def.h"
#include "proc.h"
#include "remove.h"
#include "basis.h"


/*
 * As explained in [Gan02] the ISTs do not have a canonical from. (However CST
 * have.) In this module we implemented functions that try however to shrink
 * the size of the ISTs by pruning some paths insides the trees. Obviously,
 * these functions do not affect the denotation of the tree.
 */

/* Exact minimization of the tree, i.e. we use necessary and sufficient
 * condition to prune paths
 */
ISTSharingTree *ist_compute_subsumed_paths(ISTSharingTree *ST1, ISTSharingTree *ST2) ;
ISTSharingTree *ist_remove_subsumed_paths(ISTSharingTree *S, ISTSharingTree *T) ;
ISTSharingTree *ist_remove_subsumed_paths_restricted(ISTSharingTree *S, ISTSharingTree *T);
ISTSharingTree *ist_compute_who_subsumes(ISTSharingTree *ST1,ISTSharingTree *ST2);
ISTSharingTree *ist_compute_subsumed_paths_within_tree(ISTSharingTree *S) ; //use our simulation relation
ISTSharingTree *ist_minimal_form(ISTSharingTree *S) ; // used to have our minimal elements

/* Minimization approximated with the simulation relation */
void ist_minimal_form_sim_based(ISTSharingTree *S);
boolean ist_prune_within_tree_sim_based(ISTSharingTree *S);
void ist_prune_tree_sim_based( ISTSharingTree *S, ISTSharingTree *T);

/*minimization with our simuation relation */
static ISTNode *SubsumedPathsWithinTreeNAT_RCT(ISTNode *node1, ISTNode *node2, boolean DifferentNode, struct LOC_ist_method *LINK, boolean is_nat);
/*for tasks request predecessors*/
ISTNode *predecessorPathsWithinTreeRequest(ISTNode *node1, int *period, struct LOC_ist_method *LINK, int pos);
ISTSharingTree *ist_compute_predecessor_paths_tree_request(ISTSharingTree *S, int* period);  
/*for tick-horloge predecessors*/
ISTNode *predecessorPathsWithinTreeRun(ISTNode *node1, int *period, struct LOC_ist_method *LINK, int pos);
ISTSharingTree* ist_compute_predecessor_paths_tree_run(ISTSharingTree* S, int* period);   



boolean ist_exact_subsumption_test(ISTSharingTree *T,ISTSharingTree *S);

/* merge contiguous intervals */
ISTSharingTree * ist_merge_intervals(ISTSharingTree *ST);

/* particular methods */
ISTSharingTree *ist_prune_a_uc_ist_with_a_dc_ist(ISTSharingTree *uc, ISTSharingTree *dc);
#endif
