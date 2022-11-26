#define easyos_TAGRETURNTYPE BOOL
#include <utility/tagitem.h>


/*****************************************************************************
    NAME */
#include <libraries/asl.h>
#include <proto/asl.h>
extern struct Library *AslBase;
#undef AslRequestTags /* Get rid of the macro from inline/ */

        BOOL AslRequestTags (

/*  SYNOPSIS */
        APTR requester,
        Tag  tag1,
        ...)

/*  FUNCTION
        This is the varargs version of the asl.library AslRequest().
        For information see asl.library/AslRequest().
    INPUTS
        requester - Pointer to requester returned by AllocAslRequest().
        tag1      - TagList of extra arguments.
    NOTES
    EXAMPLE
    BUGS
    SEE ALSO
        asl.library/AslRequest()
    INTERNALS
    HISTORY
*****************************************************************************/
{
    easyos_SLOWSTACKTAGS_PRE(tag1)

    retval = AslRequest(requester, easyos_SLOWSTACKTAGS_ARG(tag1));

    easyos_SLOWSTACKTAGS_POST
} /* AslRequestTags */
Footer