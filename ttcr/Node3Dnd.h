//
//  Node3Dnd.h.h
//  ttcr
//
//  Created by Bernard Giroux on 18-10-20.
//  Copyright © 2018 Bernard Giroux. All rights reserved.
//

#ifndef Node3Dnd_h
#define Node3Dnd_h

#include "Node3Dn.h"

namespace ttcr {
    
    template<typename T1, typename T2>
    class Node3Dnd : public Node3Dn<T1,T2> {
    public:
        Node3Dnd() : Node3Dn<T1,T2>(1) {}
        
        Node3Dnd(const T1 t, const T1 xx, const T1 yy, const T1 zz, const size_t nt,
                 const size_t i) : Node3Dn<T1,T2>(t, xx, yy, zz, 1, 0) {}

        Node3Dnd(const T1 t, const sxyz<T1>& s, const size_t nt,
                 const size_t i) : Node3Dn<T1,T2>(t, s, 1, 0) {}
        
        Node3Dnd(const Node3Dnd<T1,T2>& node) :
        Node3Dn<T1,T2>(node.tt[0], node.x, node.y, node.z, 1, 0)
        {
            this->gridIndex = node.gridIndex;
            this->owners = node.owners;
            this->slowness = node.slowness;
            this->primary = node.primary;
        }
        
        T1 getTT(const size_t n) const { return this->tt[0]; }
        void setTT(const T1 t, const size_t n ) { this->tt[0] = t; }
        
    };

}

#endif /* Node3Dnd_h_h */
