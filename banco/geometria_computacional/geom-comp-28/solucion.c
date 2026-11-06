#include "geom-comp-28.h"
#include <math.h>
line_result_t intersect_parametric_lines(point2d_t p,point2d_t r,point2d_t q,point2d_t s,double e,point2d_t*out){if(!out||!isfinite(e)||e<0||!isfinite(p.x)||!isfinite(p.y)||!isfinite(r.x)||!isfinite(r.y)||!isfinite(q.x)||!isfinite(q.y)||!isfinite(s.x)||!isfinite(s.y))return LINE_INVALID;double den=r.x*s.y-r.y*s.x,qpx=q.x-p.x,qpy=q.y-p.y;if(fabs(den)<=e){return fabs(qpx*r.y-qpy*r.x)<=e?LINE_COINCIDENT:LINE_PARALLEL;}double t=(qpx*s.y-qpy*s.x)/den;out->x=p.x+t*r.x;out->y=p.y+t*r.y;return LINE_UNIQUE;}
