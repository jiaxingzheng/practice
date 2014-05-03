template <typename F> class Link {
public:
  F element;      // Value for this node
  Link *next;        // Pointer to next node in list
  // Constructors
  Link(const F& elemval, Link* nextval =NULL)
    { element = elemval;  next = nextval; }
  Link(Link* nextval =NULL) { next = nextval; }
};
