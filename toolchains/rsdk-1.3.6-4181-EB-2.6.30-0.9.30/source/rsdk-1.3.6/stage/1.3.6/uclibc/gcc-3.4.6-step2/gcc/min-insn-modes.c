/* Generated automatically from machmode.def and config/mips/mips-modes.def
   by genmodes.  */

#include "bconfig.h"
#include "system.h"
#include "machmode.h"

const char *const mode_name[NUM_MACHINE_MODES] =
{
  "VOID",
  "BLK",
  "CC",
  "BI",
  "QI",
  "HI",
  "SI",
  "DI",
  "TI",
  "SF",
  "DF",
  "TF",
  "CQI",
  "CHI",
  "CSI",
  "CDI",
  "CTI",
  "SC",
  "DC",
  "TC",
  "V2QI",
  "V4QI",
  "V2HI",
  "V8QI",
  "V4HI",
  "V2SI",
  "V1DI",
  "V16QI",
  "V8HI",
  "V4SI",
  "V2DI",
  "V8SI",
  "V4DI",
  "V8DI",
  "V2SF",
  "V4SF",
  "V2DF",
  "V8SF",
  "V4DF",
  "V16SF",
  "V8DF",
};

const unsigned char mode_class[NUM_MACHINE_MODES] =
{
  MODE_RANDOM,             /* VOID */
  MODE_RANDOM,             /* BLK */
  MODE_CC,                 /* CC */
  MODE_INT,                /* BI */
  MODE_INT,                /* QI */
  MODE_INT,                /* HI */
  MODE_INT,                /* SI */
  MODE_INT,                /* DI */
  MODE_INT,                /* TI */
  MODE_FLOAT,              /* SF */
  MODE_FLOAT,              /* DF */
  MODE_FLOAT,              /* TF */
  MODE_COMPLEX_INT,        /* CQI */
  MODE_COMPLEX_INT,        /* CHI */
  MODE_COMPLEX_INT,        /* CSI */
  MODE_COMPLEX_INT,        /* CDI */
  MODE_COMPLEX_INT,        /* CTI */
  MODE_COMPLEX_FLOAT,      /* SC */
  MODE_COMPLEX_FLOAT,      /* DC */
  MODE_COMPLEX_FLOAT,      /* TC */
  MODE_VECTOR_INT,         /* V2QI */
  MODE_VECTOR_INT,         /* V4QI */
  MODE_VECTOR_INT,         /* V2HI */
  MODE_VECTOR_INT,         /* V8QI */
  MODE_VECTOR_INT,         /* V4HI */
  MODE_VECTOR_INT,         /* V2SI */
  MODE_VECTOR_INT,         /* V1DI */
  MODE_VECTOR_INT,         /* V16QI */
  MODE_VECTOR_INT,         /* V8HI */
  MODE_VECTOR_INT,         /* V4SI */
  MODE_VECTOR_INT,         /* V2DI */
  MODE_VECTOR_INT,         /* V8SI */
  MODE_VECTOR_INT,         /* V4DI */
  MODE_VECTOR_INT,         /* V8DI */
  MODE_VECTOR_FLOAT,       /* V2SF */
  MODE_VECTOR_FLOAT,       /* V4SF */
  MODE_VECTOR_FLOAT,       /* V2DF */
  MODE_VECTOR_FLOAT,       /* V8SF */
  MODE_VECTOR_FLOAT,       /* V4DF */
  MODE_VECTOR_FLOAT,       /* V16SF */
  MODE_VECTOR_FLOAT,       /* V8DF */
};

const unsigned char mode_wider[NUM_MACHINE_MODES] =
{
  VOIDmode,                /* VOID */
  VOIDmode,                /* BLK */
  VOIDmode,                /* CC */
  QImode,                  /* BI */
  HImode,                  /* QI */
  SImode,                  /* HI */
  DImode,                  /* SI */
  TImode,                  /* DI */
  VOIDmode,                /* TI */
  DFmode,                  /* SF */
  TFmode,                  /* DF */
  VOIDmode,                /* TF */
  CHImode,                 /* CQI */
  CSImode,                 /* CHI */
  CDImode,                 /* CSI */
  CTImode,                 /* CDI */
  VOIDmode,                /* CTI */
  DCmode,                  /* SC */
  TCmode,                  /* DC */
  VOIDmode,                /* TC */
  V4QImode,                /* V2QI */
  V2HImode,                /* V4QI */
  V8QImode,                /* V2HI */
  V4HImode,                /* V8QI */
  V2SImode,                /* V4HI */
  V1DImode,                /* V2SI */
  V16QImode,               /* V1DI */
  V8HImode,                /* V16QI */
  V4SImode,                /* V8HI */
  V2DImode,                /* V4SI */
  V8SImode,                /* V2DI */
  V4DImode,                /* V8SI */
  V8DImode,                /* V4DI */
  VOIDmode,                /* V8DI */
  V4SFmode,                /* V2SF */
  V2DFmode,                /* V4SF */
  V8SFmode,                /* V2DF */
  V4DFmode,                /* V8SF */
  V16SFmode,               /* V4DF */
  V8DFmode,                /* V16SF */
  VOIDmode,                /* V8DF */
};

const unsigned char class_narrowest_mode[MAX_MODE_CLASS] =
{
  MIN_MODE_RANDOM,         /* VOID */
  MIN_MODE_CC,             /* CC */
  MIN_MODE_INT,            /* QI */
  MIN_MODE_PARTIAL_INT,    /* VOID */
  MIN_MODE_FLOAT,          /* SF */
  MIN_MODE_COMPLEX_INT,    /* CQI */
  MIN_MODE_COMPLEX_FLOAT,  /* SC */
  MIN_MODE_VECTOR_INT,     /* V2QI */
  MIN_MODE_VECTOR_FLOAT,   /* V2SF */
};
