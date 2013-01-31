// ***************************************************************************
// bamtools_convert.h (c) 2010 Derek Barnett, Erik Garrison
// Marth Lab, Department of Biology, Boston College
// ---------------------------------------------------------------------------
// Last modified: 9 July 2010
// ---------------------------------------------------------------------------
// Converts between BAM and a number of other formats
// ***************************************************************************

#ifndef PILE_H
#define PILE_H

#include <vector>
#include "bamtools_tool.h"


namespace BamTools { 
  
class PileDriverTool : public AbstractTool {
  
    public:
        PileDriverTool(void);
        ~PileDriverTool(void);

    public:
        int Help(void);
        int Run(int argc, char* argv[]); 
        
    private: 
        struct PileDriverSettings;
        PileDriverSettings* m_settings;
        
        struct PileDriverToolPrivate;
        PileDriverToolPrivate* m_impl;
};

struct SampleCoverage {
    size_t a_fwd_cnt;
    size_t c_fwd_cnt;
    size_t g_fwd_cnt;
    size_t t_fwd_cnt;
    size_t del_fwd_cnt;
    size_t ins_fwd_cnt;
    
    size_t a_rev_cnt;
    size_t c_rev_cnt;
    size_t g_rev_cnt;
    size_t t_rev_cnt;
    size_t del_rev_cnt;
    size_t ins_rev_cnt;

    size_t a_fwd_totqual;
    size_t c_fwd_totqual;
    size_t g_fwd_totqual;
    size_t t_fwd_totqual;
    std::vector<std::string> ins_fwd_alleles;
    
    size_t a_rev_totqual;
    size_t c_rev_totqual;
    size_t g_rev_totqual;
    size_t t_rev_totqual;
    std::vector<std::string> ins_rev_alleles;
};
  
} // namespace BamTools

#endif // PILE_H
