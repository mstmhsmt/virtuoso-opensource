/*
 *  $Id$
 *
 *  This file is part of the OpenLink Software Virtuoso Open-Source (VOS)
 *  project.
 *
 *  Copyright (C) 1998-2022 OpenLink Software
 *
 *  This project is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation; only version 2 of the License, dated June 1991.
 *
 *  This program is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 *
 */

//package virtuoso_driver;

import java.util.*;

import org.apache.jena.query.*;
import org.apache.jena.rdf.model.RDFNode;
import org.apache.jena.graph.Node;
import org.apache.jena.graph.Triple;
import org.apache.jena.graph.*;

import virtuoso.jena.driver.*;

public class VirtuosoSPARQLExample3
{
    public static void main(String[] args)
    {
	String url;

	if(args.length == 0)
	    url = "jdbc:virtuoso://localhost:1111";
	else
	    url = args[0];

	Node foo1 = NodeFactory.createURI("http://example.org/#foo1");
	Node bar1 = NodeFactory.createURI("http://example.org/#bar1");
	Node baz1 = NodeFactory.createURI("http://example.org/#baz1");

	Node foo2 = NodeFactory.createURI("http://example.org/#foo2");
	Node bar2 = NodeFactory.createURI("http://example.org/#bar2");
	Node baz2 = NodeFactory.createURI("http://example.org/#baz2");

	Node foo3 = NodeFactory.createURI("http://example.org/#foo3");
	Node bar3 = NodeFactory.createURI("http://example.org/#bar3");
	Node baz3 = NodeFactory.createURI("http://example.org/#baz3");

	List triples = new ArrayList();

	VirtGraph graph = new VirtGraph ("Example3", url, "dba", "dba");

	graph.clear ();

	System.out.println("graph.isEmpty() = " + graph.isEmpty());
	System.out.println("Add 3 triples to graph <Example3>.");

	graph.add(new Triple(foo1, bar1, baz1));
	graph.add(new Triple(foo2, bar2, baz2));
	graph.add(new Triple(foo3, bar3, baz3));

	System.out.println("graph.isEmpty() = " + graph.isEmpty());
	System.out.println("graph.getCount() = " + graph.getCount());

	triples.add(new Triple(foo1, bar1, baz1));
	triples.add(new Triple(foo2, bar2, baz2));

	graph.isEmpty();

	System.out.println("Remove 2 triples from graph <Example3>");
	graph.remove(triples);
	System.out.println("graph.getCount() = " + graph.getCount());
	System.out.println("Please check result with isql tool.");

	/* EXPECTED RESULT:

SQL> sparql select ?s ?p ?o from <Example3> where {?s ?p ?o};
s                                                                                 p                                                                                 o
VARCHAR                                                                           VARCHAR                                                                           VARCHAR
_______________________________________________________________________________

http://example.org/#foo3                                                          http://example.org/#bar3                                                          http://example.org/#baz3

1 Rows. -- 26 msec.
SQL>

*/

	}
}

