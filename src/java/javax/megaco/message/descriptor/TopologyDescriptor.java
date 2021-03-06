// vim: sw=4 et tw=72 com=srO\:/**,mb\:*,ex\:*/,srO\:/*,mb\:*,ex\:*/,b\:TRANS,\://,b\:#,\:%,\:XCOMM,n\:>,fb\:-
/*
 @(#) src/java/javax/megaco/message/descriptor/TopologyDescriptor.java <p>
 
 Copyright &copy; 2008-2015  Monavacon Limited <a href="http://www.monavacon.com/">&lt;http://www.monavacon.com/&gt;</a>. <br>
 Copyright &copy; 2001-2008  OpenSS7 Corporation <a href="http://www.openss7.com/">&lt;http://www.openss7.com/&gt;</a>. <br>
 Copyright &copy; 1997-2001  Brian F. G. Bidulock <a href="mailto:bidulock@openss7.org">&lt;bidulock@openss7.org&gt;</a>. <p>
 
 All Rights Reserved. <p>
 
 This program is free software: you can redistribute it and/or modify it under
 the terms of the GNU Affero General Public License as published by the Free
 Software Foundation, version 3 of the license. <p>
 
 This program is distributed in the hope that it will be useful, but <b>WITHOUT
 ANY WARRANTY</b>; without even the implied warranty of <b>MERCHANTABILITY</b>
 or <b>FITNESS FOR A PARTICULAR PURPOSE</b>.  See the GNU Affero General Public
 License for more details. <p>
 
 You should have received a copy of the GNU Affero General Public License along
 with this program.  If not, see
 <a href="http://www.gnu.org/licenses/">&lt;http://www.gnu.org/licenses/&gt</a>,
 or write to the Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA
 02139, USA. <p>
 
 <em>U.S. GOVERNMENT RESTRICTED RIGHTS</em>.  If you are licensing this
 Software on behalf of the U.S. Government ("Government"), the following
 provisions apply to you.  If the Software is supplied by the Department of
 Defense ("DoD"), it is classified as "Commercial Computer Software" under
 paragraph 252.227-7014 of the DoD Supplement to the Federal Acquisition
 Regulations ("DFARS") (or any successor regulations) and the Government is
 acquiring only the license rights granted herein (the license rights
 customarily provided to non-Government users).  If the Software is supplied to
 any unit or agency of the Government other than DoD, it is classified as
 "Restricted Computer Software" and the Government's rights in the Software are
 defined in paragraph 52.227-19 of the Federal Acquisition Regulations ("FAR")
 (or any successor regulations) or, in the cases of NASA, in paragraph
 18.52.227-86 of the NASA Supplement to the FAR (or any successor regulations). <p>
 
 Commercial licensing and support of this software is available from OpenSS7
 Corporation at a fee.  See
 <a href="http://www.openss7.com/">http://www.openss7.com/</a>
 */

// vim: sw=4 et tw=72 com=srO\:/**,mb\:*,ex\:*/,srO\:/*,mb\:*,ex\:*/,b\:TRANS,\://,b\:#,\:%,\:XCOMM,n\:>,fb\:-
/*

   Overview Package  Class Tree Index Help
   JAIN^TM MEGACO API (RELEASE) - Version 1.0 - 22 December 2003
    PREV CLASS   NEXT CLASS FRAMES NO FRAMES
     _________________________________________________________________

javax.megaco.message.descriptor
Class TopologyDescriptor

java.lang.Object
    |
    +--javax.megaco.message.Descriptor
            |
            +--javax.megaco.message.descriptor.TopologyDescriptor

   All Implemented Interfaces:
          java.io.Serializable
     _________________________________________________________________

   public class TopologyDescriptor
   extends Descriptor

   The class extends JAIN MEGACO Descriptor. This class describes the
   topology descriptor.

   See Also:
          Serialized Form
     _________________________________________________________________

   Constructor Summary

   TopologyDescriptor (Termination termA, Termination termB,
   TopologyDirection topologyDirect)

         throws javax.megaco.InvalidArgumentException

              Constructs an Topology Descriptor object with the mandatory
   parameters of the termination A, termination-B and the topology
   direction between these two terminations. This extends the Descriptor
   class. It defines the Topology descriptor of the Megaco.

   Method Summary
    Termination getTermA()
              This retrieves the termination A in the topology
   descriptor.
    Termination getTermB()
              This retrieves the termination B in the topology
   descriptor.
    int  getTopologyDirection()
              This retrieves the integer value of the topology direction
   in the topology descriptor.

   Methods inherited from class javax.megaco.message.Descriptor
   getDescriptorId

   Methods inherited from class java.lang.Object
   clone, equals, finalize, getClass, hashCode, notify, notifyAll, wait

   Constructor Detail

  TopologyDescriptor

   public TopologyDescriptor(Termination termA,Termination termB,
              TopologyDirection topologyDirect)
       throws javax.megaco.InvalidArgumentException

   Constructs a Topology Descriptor with the mandatory parameters of the
   termination-A, termination-B and the topology direction between these
   terminations.

        Parameters:
   termA - This specifies an object identifier for the termination A.
   termB - This specifies an object identifier for the termination B.
   topologyDirect - This specifies topology direction between the
   terminations.

    
        Throws:
   InvalidArgumentException : This exception is raised if the reference
   of either of Termination Ids or the Topology Direction passed to this
   method is NULL.
     _________________________________________________________________

   Method Detail

  getDescriptorId

public final int getDescriptorId()

          This method cannot be overridden by the derived class. This
          method returns that the descriptor identifier is of type
          Topology descriptor. This method overrides the corresponding
          method of the base class Descriptor.


        Returns:
                Returns an integer value that identifies this object as
                the type of topology descriptor. It returns that it is
                Topology Descriptor i.e., M_TOPOLOGY_DESC.
     _________________________________________________________________

  getTermA

public Termination getTermA()

          This method retrieves the termination A set in the topology
          descriptor.


        Returns:
                Returns the termination A for the topology.
     _________________________________________________________________

  getTermB

public Termination getTermB()

          This method retrieves the termination B set in the topology
          descriptor.


        Returns:
                Returns the termination B for the topology.
     _________________________________________________________________

  getTopologyDirection

public int getTopologyDirection()

          This method retrieves the integer value of the topology
          direction set in the topology descriptor.


        Returns:
                Returns the integer value for the topology direction. It
                can take only the values set in TopologyDirection
     _________________________________________________________________
     _________________________________________________________________

   Overview Package  Class Tree Index Help
   JAIN^TM MEGACO API (RELEASE) - Version 1.0 - 22 December 2003
    PREV CLASS   NEXT CLASS FRAMES NO FRAMES
   SUMMARY:  INNER | FIELD | CONSTR |  METHOD DETAIL:  FIELD | CONSTR |
   METHOD
     _________________________________________________________________

                  Copyright (C) 2001 Hughes Software Systems
       HUGHES SOFTWARE SYSTEMS and JAIN JSPA SIGNATORIES PROPRIETARY
        This document contains proprietary information that shall be
     distributed, routed or made available only within Hughes Software
       Systems and JAIN JSPA Signatory Companies, except with written
                   permission of Hughes Software Systems
             _________________________________________________

   22 December 2003


    If you have any comments or queries, please mail them to
    Jmegaco_hss@hss.hns.com
*/
